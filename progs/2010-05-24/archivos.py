
from numpy import *

salida = open("cuad.dat", "w")

for x in arange(0.5, 10, 0.5):
	salida.write("%f%20.10f\t%g\n" % (x, x**2, x**3) )
	
	
salida.close()