import subprocess
import sys

try:
	nombre = sys.argv[1]
	titulo = sys.argv[2]
except:
	print "Dame un nombre"
	sys.exit()

latex = \
r"""
\documentclass{minimal}
\begin{document}
Hola %s. $x^2$ es $x$ cuadrado.
Tu poster titulado "%s" ha sido aceptado.
\end{document}

""" \
% (nombre, titulo)

salida = open("temp.tex", "w")
salida.write(latex)
salida.close()

subprocess.Popen(['pdflatex', 'temp'])
subprocess.Popen(['okular', 'temp.pdf'])
			