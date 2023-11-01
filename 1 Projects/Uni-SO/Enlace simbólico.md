* Existe el concepto de enlace simbólico, que es un tipo especial de fichero cuyo contenido es el nombre del fichero al que aputna
	* Un open al enlace simbolico abre el fichero al que apunta
	* El nombre escrito puede ser absoluto o relativo
	* Se diferencia de un [[Enlace duro]]:
		* Hay fichero intermedio
		* Si se borra el fichero apuntado el enlace permanece en el sistema apuntando a un fichero que no existe
		* Si se borra el [[fichero]] apuntado y se crea otro con el mismo nombre, el enlace apuntaría al nuevo fichero
		* Borrar el enlace simbólico no afecta al fichero apuntado
		* Podemos atravesar puntos de montaje
		* Podemos hacer enlaces simbólicos a directorios