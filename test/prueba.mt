COMIENZA PROGRAMA PRUEBA
	SECCION IO
		USANDO STDIO
		DEFINE DATA COMO FICHERO
			FICHERO CORESPONDE A "./datos.json"
			FICHERO ES LECTURA,ESCRIPTURA
		DEFINE PEPES COMO ARRAY
	ARRAY
	SECCION DEPENDECIAS
		USANDO "./modulos/parser/mtjson.mt" COMO mtscriptparser
	SECCION FUNCIONES
		HABLAR PARAMETROS: texto COMO CADENA DEVUELVE: NADA
			ESCRIBE LINEA EN SALIDA texto 
	SECCION VARIABLES
		DEFINE D COMO ENTERO 
		DEFINE B COMO ENTERO DE 8 BYTES
		DEFINE C COMO ENTERO
		DEFINE H COMO ARRAY
		DEFINE PERSONA COMO ESTRUCTURA
			PERSONA.ALTURA COMO ENTERO
			PERSONA.PESO COMO ENTERO
	SECCION PROCEDIMIENTO
		A ES 4
		A = 9
		C *= A -= B
		MIENTRAS A<B
		A +== 1
TERMINA PROGRAMA PRUEBA2