#!/usr/bin/env python
#
# This generates extract patterns, or "epatterns" that look like:
#
# 111100AAAAA01000BBBBB111011011BA xvxexpsp VSREG,VSREG
#
# Where bits marked "AA..." are measured to have an affect ONLY on the first
# operand and bits marked "BB..." are measured to have an affect ONLY on the
# second operand and so on.
#
# The results are in epatterns.txt

import re
from helpers import *

npatterns = []
syntaxes = []

with open('npatterns.txt') as fp:
	for line in fp.readlines():
		if not line:
			continue
		(npattern, syntax) = re.match(r'^(................................) (.*)$', line).group(1,2)
		npatterns.append(npattern)
		syntaxes.append(syntax)

for i in range(len(npatterns)):
	npattern = npatterns[i]
	syntax = syntaxes[i]

	insword = syntax_gen_example(syntax, npattern)
	instxt = disasm_insword(insword)
	tokens = tokenize(instxt)

	operands_n = toks_get_num_operands(tokens)

	oper_idx_to_bits = [[] for k in range(operands_n)]

	for (i,c) in enumerate(npattern):
		bit_idx = 31-i
		if c == 'x':
			insword2 = insword ^ (1 << bit_idx)
			instxt2 = disasm_insword(insword2)
			if not instxt2:
				continue
			tokens2 = tokenize(instxt2)

			diff = toks_find_operand_difference_single(tokens, tokens2)
			if diff == None:
				#print('b%d affects 0 or >1 operand' % (bit_idx))
				pass
			else:
				#print('b%d affects operand %d' % (bit_idx, diff))
				oper_idx_to_bits[diff].append(bit_idx)

	epattern = ''
	for (i,c) in enumerate(npattern):
		if c in ['0', '1']:
			epattern += c
			continue

		assert c == 'x'
		bit_idx = 31-i
		isvar = False
		for oper_idx in range(operands_n):
			if bit_idx in oper_idx_to_bits[oper_idx]:
				epattern += 'ABCDEFGHIJK'[oper_idx]
				isvar = True

		if not isvar:
			epattern += 'x'

	print('%s %s' % (epattern, syntax))
