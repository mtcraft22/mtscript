COMIENZA PROGRAMA java
	SECCION IO
		DEFINE datos
			datos.destino es "datos.dat"
			datos.acesso es escritura y lectura
	SECCION VARIABLES
		DEFINE palabra_buena COMO CADENA
		DEFINE numero COMO ENTERO
	SECCION PROCEDIMIENTO
		palabra_buena ES "casa"
		numero ES 5555
		ESCRIBE palabra ->
		EN pantalla
		palabra ES "fuera"
		ESCRIBE palabra EN datos
		dato.posicion = 5
TERMINA PROGRAMA java