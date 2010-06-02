#
from numpy import *

from pylab import *


t = arange(0, 10, 0.1)
s = sin(t)

plot(t, s, 'o')
show()

plot(t, cos(t), '--')
