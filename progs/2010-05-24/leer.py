entrada = open("cuad.dat")

#lineas = entrada.readlines()

M = [ ]

#for linea in lineas:
for linea in entrada:
	datos = map(float, linea.split() )
	
	M.append(datos)
	