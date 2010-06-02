class cbase:
	def __init__ ( self , rr = 17):
		print 'Constructor'
		y = 9
		self.x = 4
		self.r = rr
		
	def func (self, a, b, c):
		print a * b * c
	
	def f2(self, x):
		print 'clase base'

class csec(cbase) :  # herencia		
	def f2(self, f) :
		return f**2
		print self.x
	

c = cbase(1+8j)
print c.x
#print c.y  # no existe -- variable local con scope la funcion __init__ solamente
print c.r

c.func(1,2,3)

c2 = csec()

l = [csec(), cbase()]
