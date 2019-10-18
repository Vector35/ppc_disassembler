#!/usr/bin/env python
#
# This generates necessary patterns "npatterns".
#
# a necessary pattern looks like:
# 000100xxxxxxxxxxxxxxx00000001110 vpkuhum VREG,VREG,VREG
#
# An instruction word matching 000100xxxxxxxxxxxxxxx00000001110 is not
# guaranteed sufficient for "vpkuhum VREG,VREG,VREG", but every
# "vpkuhum VREG,VREG,VREG" implies 000100xxxxxxxxxxxxxxx00000001110.
#
# In other words, the entire instruction space is a superset of the space
# matching the npattern which is a superset of the space matching the
# "vpkuhum...".
#
# This is written to be called with parallel, my invocation was:
#
# cat opc_blocks.txt | parallel --ungroup --max-procs 8 --max-args 2 ./npatterns.py {1} {2}
#
# where opc_blocks.txt has:
#
# 00000000
# 04000000
# 04000000
# 08000000
# 08000000
# 0C000000
# ...
#
# The final result is in npatterns.txt and took about 12 hours on my
# 4core/8thread MBP.

import sys
import signal
from helpers import *

start = int(sys.argv[1], 16)
end = int(sys.argv[2], 16)
proc_key = 'npatterns_%08X_%08X' % (start, end)
print('DEBUG %s starting' % proc_key)

def handler(sig, foo):
	global proc_key, insword, start, end
	print('DEBUG %s: at %08X, %.02f%% progress' % \
		(proc_key, insword, 100.0*(insword-start)/(end-start)))
	signal.alarm(300)

signal.signal(signal.SIGALRM, handler)
signal.alarm(300)

syn2always1 = {}
syn2always0 = {}

insword = 0
for insword in range(start, end):
	syn = syntax_from_insword(insword)
	if not syn:
		continue

	if not syn in syn2always1:
		print('DEBUG %s: new syn "%s"' % (proc_key, syn))
		syn2always1[syn] = insword
		syn2always0[syn] = ~insword
	else:
		syn2always1[syn] &= insword
		syn2always0[syn] &= ~insword
	
for syn in syn2always1:
	always0 = syn2always0[syn]
	always1 = syn2always1[syn]

	# generate a necessary bitpattern
	npattern = []
	for k in range(32-1, -1, -1):
		if always1 & (1 << k): npattern.append('1')
		elif always0 & (1 << k): npattern.append('0')
		else: npattern.append('x')
	npattern = ''.join(npattern)
	print('%s %s' % (npattern, syn))

