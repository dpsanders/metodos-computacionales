from os import popen
from numpy import arange

gp = popen('gnuplot', 'w')

gp.write('set term gif anim\n')
gp.write('set out "sin.gif"\n')


for a in arange(0, 10, 0.1):
	gp.write('plot sin(x+%g)\n' % a)
	gp.flush()

gp.write('set out\n')

gp.close()
