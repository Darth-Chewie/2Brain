* Aisla de los detalles de los drives de disco de los [[Sistema de ficheros|SF]]
* API simple: leer/escribir bloques de un disco
* Implementa cache de bloques:
	* Los bloques más recientes accedidos se dejan copiados en memoria, mejorando el rendimiento del sistema
	* En casa acceso se comprueba si el bloque está en la caché
	* Si no está se copia del disco a la cache
	* Si la caché esta llena, hay que quitar un bloque para hacer hueco: [[Politica de remplazo]]
	 * Si el bloque ha sido escrito (sucio) : [[Politica de escritura]]