#!/usr/bin/env python
#

import re
import sys
from helpers import *

syntaxes = set()

with open('epatterns.txt') as fp:
	for line in fp.readlines():
		(epattern, syntax) = re.match(r'^(................................) (.*)$', line).group(1,2)
		syntaxes.add(syntax)

seen = set()
for syn in syntaxes:

	fmtstr = syn2fmtstr(syn)
	if not ' ' in fmtstr:
		continue
	fmtstr = fmtstr[fmtstr.find(' ')+1:]

	if fmtstr in seen:
		continue
	seen.add(fmtstr)

	print('\t\tcase PPC_FMTSTR_%s:' % syn_get_operand_fmtstr(syn))

	print('\t\t\tsprintf(buf, "%s", ' % fmtstr, end='')
	print(', '.join(['dec.operand_values[%d]'%i for i in range(syn_get_operand_count(syn))]), end='')
	print(');')
	print('\t\t\tbreak;')

