import subprocess

subprocess.Popen('echo "\\"', shell=True)

subprocess.Popen(['echo', '\\' ])

process = subprocess.Popen(['echo', 'Hola mundo'], shell=False, 
	stdout = subprocess.PIPE)
	
datos = process.communicate()[0]
	
gp = subprocess.Popen(['gnuplot', '-persist'], stdin = subprocess.PIPE)
gp.communicate('plot sin(x)\n')
#gp.flush()