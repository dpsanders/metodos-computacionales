import os

E_min = 10
E_max = 20

for i in range(1, 100, 10):
	#s = r"./wl %d %d&" % (i, i+10)
	#print s
	#os.system(s)
	
	s = "python args.py %d" % i
	os.system(s)

