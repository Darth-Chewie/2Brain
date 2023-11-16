* Lista de bloques enlazados
	* En el directorio tenemos guardado el número de bloque físico que se utiliza para almacenar el primer bloque lógico del fichero
	* Se utiliza una tabla ([[FAT]]) para almacenar los enlaces a los siguientes bloques
	* Se usa una marca especial en la tabla [[FAT]] para indicar que es el ultimo bloque del fichero ([[EOF]])
* Distitas versiones de FAT indican el número de bits (12, 16, 32) usados para identificar al bloque

* [[Ventajas de FAT]]
* [[Desvenatjas de FAT]]
* [[Acceso al n-ésimo byte en FAT]]