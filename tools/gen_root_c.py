#!/usr/bin/env python
#
# generate C code for the root decoding logic

import re
import sys
from helpers import *
syn2npattern = {}

print('#include <stdint.h>')
print('#include "disassembler.h"')
print('')

with open('npatterns.txt') as fp:
	for line in fp.readlines():
		(npattern, syntax) = re.match(r'^(................................) (.*)$', line).group(1,2)
		syn2npattern[syntax] = npattern

print('/* prototypes/declarations */')
for syn in syn2npattern:
	print('int %s(uint32_t insword, struct ppc_decoded *dec);' % syn2func(syn))
print('')

opcodes_valid = set()
for opcode in range(len(syn2npattern)):
	syns = list(filter(lambda syn: int(syn2npattern[syn][0:6],2) == opcode, syn2npattern))
	if not syns:
		continue
	opcodes_valid.add(opcode)
	print('static int opcode_%d(uint32_t insword, struct ppc_decoded *dec)' % opcode)
	print('{')
	for syn in sorted(syns, key=lambda syn: syn2npattern[syn].count('x')):
		npattern = syn2npattern[syn]
		print('\tif(%s) return %s(insword, dec);' % (pattern2check(npattern), syn2func(syn)))
	print('\treturn -1;')
	print('}\n')

# main switch on [b31..b26]
print('int ppc_decode(uint32_t insword, struct ppc_decoded *dec)')
print('{')
print('\tswitch((insword & 0xFC000000) >> 26) {')
for i in sorted(opcodes_valid):
	print('\t\tcase %d: return opcode_%d(insword, dec);' % (i, i))
print('\t}')
print('\treturn -1;')
print('}')

# 

