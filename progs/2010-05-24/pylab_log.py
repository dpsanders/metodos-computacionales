#log# Automatic Logger file. *** THIS MUST BE THE FIRST LINE ***
#log# DO NOT CHANGE THIS LINE OR THE TWO BELOW
#log# opts = Struct({'__allownew': True, 'logfile': 'pylab_log.py', 'pylab': 1})
#log# args = []
#log# It is safe to make manual edits below here.
#log#-----------------------------------------------------------------------
_ip.magic("logstart pylab_log.py")

x, y, z = loadtxt("cuad.dat", unpack=True)
plot(x,y)
plot(x,y, 'o')
plot(x,2*y, 'o')
hold(False)
plot(x,2*y, 'o')
plot(x,y, 'o')
plot(x,y, 'o')
plot(x,2*y, 'o')
hold(True)
plot(x,y, 'o')
plot(x,3*y, 'x')
plot(x,3*y, '.')
#?plo
#?plot
plot(x,3*y, '')
plot(x,3*y, 'rl')
plot(x,3*y, 'r-')
clf()
plot(x,3*y, '--')
xlabel ("x")
ylabel ("$\sin(x^2)$")
#?label
#?text
text(2,50, "Hola")
text(2,60, "Hola")
t = text(2, 70, "Hola2")
t.remove()
clf()
_ip.magic("run graficar.py ")
_ip.magic("run graficar.py ")
plot(t, cos(t))
	
_ip.magic("run graficar.py ")
clf()
zeros((10,10))
ones((10,10))
twos((10,10))
2*ones(10)
eye(10)
identity (10)
ones((10,10)) + identity (10)
diag 
#?diag
M = zeros (( L, L))
L = 10
M = zeros (( L, L))
diag(M)
diag(M,1)
diag(M,-1)
diag(M,1) = ones(L-1)
#?diag(M,1)
diag(M,1)
#?diag
#?diagflat
diagflat(ones[L-1],1)
diagflat(ones(L-1),1)
M
M[1]
M[1, 0:3]
M[1, 0:3] = 1, -2, 1
M
eig(M)
