import re
import ctypes
import random
import struct
import itertools
from enum import Enum, auto, unique

#******************************************************************************
# libopcodes
#******************************************************************************
bfd_arch_powerpc = 25

class bfd_ppc_machine(Enum):
	ppc = 32
	ppc64 = 64
	ppc_403 = 403
	ppc_403gc = 4030
	ppc_405 = 405
	ppc_505 = 505
	ppc_601 = 601
	ppc_602 = 602
	ppc_603 = 603
	ppc_ec603e = 6031
	ppc_604 = 604
	ppc_620 = 620
	ppc_630 = 630
	ppc_750 = 750
	ppc_860 = 860
	ppc_a35 = 35
	ppc_rs64ii = 642
	ppc_rs64iii = 643
	ppc_7400 = 7400
	ppc_e500 = 500
	ppc_e500mc = 5001
	ppc_e500mc64 = 5005
	ppc_e5500 = 5006
	ppc_e6500 = 5007
	ppc_titan = 83
	ppc_vle = 84

ppc_all_machines = [bfd_ppc_machine.ppc, bfd_ppc_machine.ppc64,
		bfd_ppc_machine.ppc_403, bfd_ppc_machine.ppc_403gc,
		bfd_ppc_machine.ppc_405, bfd_ppc_machine.ppc_505,
		bfd_ppc_machine.ppc_601, bfd_ppc_machine.ppc_602,
		bfd_ppc_machine.ppc_603, bfd_ppc_machine.ppc_ec603e,
		bfd_ppc_machine.ppc_604, bfd_ppc_machine.ppc_620,
		bfd_ppc_machine.ppc_630, bfd_ppc_machine.ppc_750,
		bfd_ppc_machine.ppc_860, bfd_ppc_machine.ppc_a35,
		bfd_ppc_machine.ppc_rs64ii,
		bfd_ppc_machine.ppc_rs64iii,
		bfd_ppc_machine.ppc_7400, bfd_ppc_machine.ppc_e500,
		bfd_ppc_machine.ppc_e500mc,
		bfd_ppc_machine.ppc_e500mc64,
		bfd_ppc_machine.ppc_e5500, bfd_ppc_machine.ppc_e6500,
		bfd_ppc_machine.ppc_titan, bfd_ppc_machine.ppc_vle]

gofer = None
cbuf = None
def disasm_data(data, addr=0, arch=bfd_arch_powerpc, mach=bfd_ppc_machine.ppc):
	# initialize disassembler, if necessary
	global gofer, cbuf, cbuf2
	if not gofer:
		gofer = ctypes.CDLL("gofer.so")
		cbuf = ctypes.create_string_buffer(256)
		cbuf2 = ctypes.create_string_buffer(256)

	#print('arch:', arch)
	#print('mach:', mach)
	#print('addr:', addr)
	#print('data:', data)
	gofer.get_disasm_libopcodes(arch, mach.value, addr, data, 4, ctypes.byref(cbuf))
	tmp = cbuf.value.decode('utf-8')
	if tmp[0] == '.':
		return None
	tmp = tmp.strip()
	tmp = re.sub('\s+', ' ', tmp)
	return tmp

def disasm_insword(insword, addr=0, arch=bfd_arch_powerpc, mach=bfd_ppc_machine.ppc):
	data = struct.pack('>I', insword)
	return disasm_data(data, addr, arch, mach)

#******************************************************************************
# binja disassembler
#******************************************************************************

def disasm_insword_binja(insword):
	# initialize disassembler, if necessary
	global gofer, cbuf, cbuf2
	if not gofer:
		gofer = ctypes.CDLL("gofer.so")
		cbuf = ctypes.create_string_buffer(256)
		cbuf2 = ctypes.create_string_buffer(256)

	tmp = gofer.get_disasm_binja(insword, ctypes.byref(cbuf2))
	if tmp:
		return None
	else:
		tmp = cbuf2.value.decode('utf-8')
		return tmp

def disasm_data_binja(data):
	insword = struct.unpack('>I', data)
	return disasm_insword_binja(insword)

#******************************************************************************
# tokenizing
#******************************************************************************
def tokenize(string):
	if not string:
		return ''

	string_ = string
	#print 'tokenizing: %s' % string
	result = []

	# pick off opcode
	opcode = re.match(r'^([\w\.]+)', string).group(1)
#	if opcode.endswith('.'):
#		result.append(('MNEM', opcode[:-1]))
#		result.append(('DSUF', '.'))
#	else:
#		result.append(('MNEM', opcode))
	result.append(('MNEM', opcode))

	string = string[len(opcode):]

	# pick off the rest
	while string:
		eat = 0
		if string.startswith(' '):
			eat = 1
		elif re.match(r'^r\d+', string):
			tmp = re.match(r'^(r\d+)', string).group(1) # eg: r0
			result.append( ('GPR',int(tmp[1:])) )
			eat = len(tmp)
		elif re.match(r'^v\d+', string):
			tmp = re.match(r'^(v\d+)', string).group(1) # eg: v0
			result.append( ('VREG',int(tmp[1:])) )
			eat = len(tmp)
		elif len(string) >= 2 and string[0:2] in ['lt','gt','eq','so'] and \
		  (len(string)==2 or (re.match(r'[^\w]',string[2]))):
			result.append( ('FLAG',string[0:2]) )
			eat = 2
		elif re.match(r'^cr\d+', string):
			tmp = re.match(r'^(cr\d+)', string).group(1) # eg: cr1
			result.append( ('CREG',int(tmp[2:])) )
			eat = len(tmp)
		elif re.match(r'^vs\d+', string):
			tmp = re.match(r'^(vs\d+)', string).group(1) # eg: vs0
			result.append( ('VSREG',int(tmp[2:])) )
			eat = len(tmp)
		elif re.match(r'^fcr\d+', string):
			tmp = re.match(r'^(fcr\d+)', string).group(1) # eg: f0
			result.append( ('FCREG',int(tmp[3:])) )
			eat = len(tmp)
		elif re.match(r'^f\d+', string):
			tmp = re.match(r'^(f\d+)', string).group(1) # eg: f0
			result.append( ('FREG',int(tmp[1:])) )
			eat = len(tmp)
		elif re.match(r'^-?0x[a-fA-F0-9]+', string):
			tmp = re.match(r'^(-?0x[a-fA-F0-9]+)', string).group(1)
			result.append( ('NUM', int(tmp,16)) )
			eat = len(tmp)
		elif re.match(r'^-?\d+', string):
			tmp = re.match(r'(^-?\d+)', string).group(1)
			result.append( ('NUM', int(tmp)) )
			eat = len(tmp)
		elif string[0] in list('(),.*+-'):
			result.append( ('PUNC', string[0]) )
			eat = 1
		else:
			return [(None,None)]
			raise Exception('dunno what to do with: %s (original input: -%s-)' % (string, string_))

		string = string[eat:]

	return result

def toks_get_num_operands(toks):
	assert toks[0][0] == 'MNEM'
	count = 0
	for i in range(1, len(toks)):
		if toks[i][0] in ['GPR', 'VREG', 'FLAG', 'CREG', 'VSREG', 'FCREG', 'FREG', 'NUM']:
			count += 1
	return count

# given two token lists, return the single operand position they differ
# return NONE if the mnemonic is different or if >1 positions differ
def toks_find_operand_difference_single(a, b):

	assert a[0][0] == 'MNEM'
	assert b[0][0] == 'MNEM'
	if a[0][1] != b[0][1]:
		return None

	# no operand instructions are equal if their mnemonic is equal
	if len(a) == 1:
		return None

	# ensure same amount of tokens
	if len(a) != len(b):
		return None

	# ensure all types are the same
	for i in range(len(a)):
		if a[i][0] != b[i][0]:
			return None

	oper_idx_differ = None
	oper_idx = 0
	for i in range(1, len(a)):
		if a[i][1] != b[i][1]:
			# did two operands differ?
			if oper_idx_differ != None:
				return None
			oper_idx_differ = oper_idx
		if a[i][0] in ['GPR', 'VREG', 'FLAG', 'CREG', 'VSREG', 'FCREG', 'FREG', 'NUM']:
			oper_idx += 1
	
	return oper_idx_differ

#******************************************************************************
# syntax stuff
#******************************************************************************
def syntax_from_tokens(tokens):
	if not tokens:
		return ''
	syntax = tokens[0][1];
	if tokens[1:]:
		syntax += ' '
	
		for (type_,value) in tokens[1:]:
			if type_ == 'PUNC':
				syntax += value
			else:
				syntax += type_
	return syntax

def syntax_from_string(instxt):
	if not instxt:
		return ''
	tokens = tokenize(instxt)
	return syntax_from_tokens(tokens)

def syntax_from_insword(insword, addr=0):
	distxt = disasm_insword(insword, addr)
	if not distxt:
		return ''
	return syntax_from_string(distxt)

def syn2func(syn):
	syn = syn.replace('-', 'N')
	syn = syn.replace('+', 'P')
	syn = syn.replace('.', 'D')
	return re.sub('[^\w]', '_', syn)

def syn_get_operand_count(syn):
	if not ' ' in syn:
		return 0
	operand_half = syn[syn.find(' ')+1:]
	operand_types = re.split(r'[,\(\)\+\-\*]+', operand_half)
	operand_types = list(filter(lambda x: x and (not x.isspace()), operand_types))
	return len(operand_types)

def syn_get_operand_type(syn, operand_index):
	if not ' ' in syn:
		return None
	operand_half = syn[syn.find(' ')+1:]
	operand_types = re.split(r'[,\(\)\-\+\*]+', operand_half)
	operand_types = list(filter(lambda x: x and (not x.isspace()), operand_types))

	if not operand_types[operand_index]:
		print('original syn: %s' % syn)
		print('operand_count: %d' % syn_get_operand_count(syn))
		print('operand_index: %d' % operand_index)
		print('operand_types: ', operand_types)
		assert False

	return operand_types[operand_index]

def syn_get_operand_fmtstr(syn):
	if not ' ' in syn:
		return 'ERROR'
	operand_half = syn[syn.find(' ')+1:]
	operand_half = operand_half.replace('(', '_LPAREN_')
	operand_half = operand_half.replace(')', '_RPAREN_')
	operand_half = operand_half.replace(',', '_C_')
	operand_half = operand_half.replace('-', '_NEG_')
	operand_half = operand_half.replace('+', '_POS_')
	operand_half = operand_half.replace('*', '_MUL_')
	return operand_half

def syn2fmtstr(syn):
	syn = syn.replace('GPR', 'r%d')
	syn = syn.replace('VREG', 'v%d')
	syn = syn.replace('FLAG', 'flag_names[%d]')
	syn = syn.replace('CREG', 'cr%d')
	syn = syn.replace('VSREG', 'vs%d')
	syn = syn.replace('FCREG', 'fcr%d')
	syn = syn.replace('FREG', 'f%d')
	syn = syn.replace('NUM', '0x%X')
	return syn

#******************************************************************************
# bit pattern (eg: "111011xxxxxxxxxxxxxxxxx000000110") stuff
#******************************************************************************

def pattern2check(pattern):
	'''
	convert a pattern to a C-style check, eg: "(insword & 0xFC0001FF)==0xEC000006"
	'''

	if re.match(r'^x+$', pattern): return '1'
	if not 'x' in pattern: return 'insword == 0x%08X' % int(pattern,2)

	comparator = '=='

	mask = 0;
	reqVal = 0;

	for c in pattern:
		if c == '0':
			mask = (mask << 1) | 1
			reqVal = reqVal << 1
		elif c == '1':
			mask = (mask << 1) | 1
			reqVal = (reqVal << 1) | 1
		elif c == 'x':
			mask = (mask << 1)
			reqVal = reqVal << 1
		else:
			assert False

	# fully enclosed so it can be bang inverted
	return '(insword & 0x%X)%s0x%X' % (mask, comparator, reqVal)

def pattern_gen_example(npattern):
	'''
		return a random input that matches the bitpattern
	'''
	result = 0
	for c in npattern:
		result <<= 1
		if c == 'x':
			result |= random.randint(0,1)
		elif c == '1':
			result |= 1
		elif c == '0':
			pass
		else:
			print('wtf in %s' % npattern)
			assert c == '0'
	return result

def syntax_gen_example(syntax, npattern):
	while 1:
		insword = pattern_gen_example(npattern)
		if syntax == syntax_from_insword(insword):
			return insword

#******************************************************************************
# bit dimension woo
#******************************************************************************
# https://stackoverflow.com/questions/374626/how-can-i-find-all-the-subsets-of-a-set-with-exactly-n-elements
def powerset(iterable):
    """
    powerset([1,2,3]) --> (1,) (2,) (3,) (1,2) (1,3) (2,3) (1,2,3)
    """
    xs = list(iterable)
    return itertools.chain.from_iterable(itertools.combinations(xs, n) for n in range(1, len(xs)+1))

def any_freedom_at_all(insword, width=32):
	syn = syntax_from_insword(insword)
	for pos in range(width):
		insword2 = insword ^ (1<<pos)
		syn2 = syntax_from_insword(insword2)
		if syn2 == syn:
			#print('mutate possible! %08X: %s' % (insword2, syn2))
			return True
	return False

#******************************************************************************
# fuzzing
#******************************************************************************
# return all 32-bit values that have 4, 3, 2, 1 and 0 bits set
def fuzz4():
	fuzz = [0]

	for positions in itertools.combinations(range(32), 1):
		mask = (1<<positions[0])
		fuzz.append(mask)

	for positions in itertools.combinations(range(32), 2):
		mask = (1<<positions[0])|(1<<positions[1])
		fuzz.append(mask)

	for positions in itertools.combinations(range(32), 3):
		mask = (1<<positions[0])|(1<<positions[1])|(1<<positions[2])
		fuzz.append(mask)

	for positions in itertools.combinations(range(32), 4):
		mask = (1<<positions[0])|(1<<positions[1])|(1<<positions[2])|(1<<positions[3])
		fuzz.append(mask)

	# fuzz should have all 4-bit subsets, 3-bit subsets, 2-bit, 1-bit, 0-bit
	assert len(fuzz) == 32*31*30*29/24 + 32*31*30/6 + 32*31/2 + 32 + 1

	return fuzz

def fuzz5():
	fuzz = fuzz4()

	for positions in itertools.combinations(range(32), 5):
		mask = (1<<positions[0])|(1<<positions[1])|(1<<positions[2])|(1<<positions[3])|(1<<positions[4])
		fuzz.append(mask)

	# fuzz should have all 4-bit subsets, 3-bit subsets, 2-bit, 1-bit, 0-bit
	assert len(fuzz) == 32*31*30*29*28/120 + 32*31*30*29/24 + 32*31*30/6 + 32*31/2 + 32 + 1

	return fuzz

def fuzz6():
	fuzz = fuzz5()

	for positions in itertools.combinations(range(32), 6):
		mask = (1<<positions[0])|(1<<positions[1])|(1<<positions[2])|(1<<positions[3])|(1<<positions[4])|(1<<positions[5])
		fuzz.append(mask)

	# fuzz should have all 5-bit subets, 4-bit subsets, 3-bit subsets, 2-bit, 1-bit, 0-bit
	assert len(fuzz) == 32*31*30*29*28*27/720 + 32*31*30*29*28/120 + 32*31*30*29/24 + 32*31*30/6 + 32*31/2 + 32 + 1

	return fuzz

