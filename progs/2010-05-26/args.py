import sys

#print "Argumentos: ", sys.argv

#l = []

#for i in sys.argv[1:]:
	#l.append(float(i))
	
	

#l = map(float, sys.argv[1:] )

l = []

for i in sys.argv[1:] :
	try:
		x = float(i)
		#print x, x*x, x**3
		l.append(x)
	except:
		pass

l.sort()
for i in l:
	print i, i*i, " ",