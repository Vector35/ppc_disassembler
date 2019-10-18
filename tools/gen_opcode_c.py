#!/usr/bin/env python
#
# generate C code for decoding all instructions with given opcode

import re
import sys
from helpers import *

syn2epattern = {}

def epattern_to_extract(epattern, varname):
	assert len(epattern) == 32
	if not varname in epattern:
		return None
	indices = filter(lambda i: epattern[i]==varname, range(32))
	bitpos = [31-k for k in indices]
	starts = map(lambda a,b: a if a+1!=b else None, bitpos, [bitpos[-1]]+bitpos[:-1])
	starts = list(filter(lambda x: x!=None, starts))
	ends = map(lambda a,b: a if a!=b+1 else None, bitpos, bitpos[1:]+[bitpos[0]])
	ends = list(filter(lambda x: x!=None, ends))
	masks = list(map(lambda a,b: '0x%X' % ((2**(a+1)-1)-(2**b-1)), starts, ends))
	widths = list(map(lambda a,b: a-b+1, starts, ends))
	shamts = list(map(lambda k: ends[k] - sum(widths[k+1:]), range(len(widths))))
	#print('widths: ', list(widths))
	#print('masks: ', list(masks))
	#print('shamts: ', list(shamts))
	if len(starts)==1:
		if shamts[0]:
			return '(insword & %s)>>%d' % (masks[0], shamts[0])
		else:
			return 'insword & %s' % masks[0]
	else:
		clauses = map(lambda i: '((insword & %s)>>%d)' % (masks[i], shamts[i]), range(len(starts)))
		return '|'.join(clauses)

with open('epatterns.txt') as fp:
	for line in fp.readlines():
		(epattern, syntax) = re.match(r'^(................................) (.*)$', line).group(1,2)
		syn2epattern[syntax] = epattern

opcode = int(sys.argv[1], 16)

print('#include "disassembler.h"\n')

for (syn, epattern) in syn2epattern.items():
	if int(epattern[0:6], 2) != opcode:
		continue

	print('/* %s */' % syn)
	print('int %s(uint32_t insword, struct decoded *dec)' % syn2func(syn))
	print('{')

	# mnemonic and whether it's dotted
	mnem_str = syn.split(' ')[0]
	if mnem_str.endswith('.'):
		print('\tdec->properties |= PPC_PROPERTY_DOTTED;' % syn_get_mnemonic_enum(syn))
		mnem_str = mnem_str[0:-1]
	print('\tdec->mnemonic = PPC_MNEM_%s;' % mnem_str.upper())

	# number and types of operands
	operand_count = syn_get_operand_count(syn)
	if operand_count:
		print('\t/* %s */' % epattern)
		print('\tdec->operand_n = %d;' % operand_count)
		operand_types = [syn_get_operand_type(syn, i) for i in range(operand_count)]
		operand_extractors = [epattern_to_extract(epattern, x) for x in 'ABCDEFGHI'[0:operand_count]]
		for (i, ot) in enumerate(operand_types):
			print('\tdec->operand_types[i] = PPC_OPER_TYPE_%s;' % operand_types[i])
			if operand_extractors[i]:
				print('\tdec->operand_values[i] = %s;' % operand_extractors[i])

	# format string
	if operand_count:
		print('\tdec->operand_fmtstr = PPC_FMTSTR_%s;' % syn_get_operand_fmtstr(syn))

	print('\treturn 0;')
	print('}')
	print('')

