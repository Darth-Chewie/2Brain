* Cada fichero tiene una estructura llamada índice
	* Entrada n -> id del bloque físico que contiene el bloque lógico n
* Puede usar varios niveles de indirección
	* Acceso eficiente a ficheros pequeños o grandes y dispersos
	* Operaciones de borrado y truncado ineficientes en ficheros grandes
* Accesible desde una estructura asociada al fichero
	* Nodo-i en Unix
	* Representa al fichero y almacena toda la meta información del mismo
	* El [[distema de ficheros]] guarda una tabla con esos nodos
	* El directorio almacena el id del nodo asociado al fichero