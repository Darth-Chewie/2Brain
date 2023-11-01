* Árbol balanceado de [[Extents | extents]]
	* Acceso homogéneo a todo el [[fichero]]
 * El [[Sistema de ficheros|SF]] tiene un nodo por fichero
	 * Contiene metadas y la raiz del árbo
* Permite tamaños de ficheros muy grandes
	* En el ext4 de hasta 16TiB con bloques de 4KiB
* Requiere algoritmos eficientes de asignaticón de bloques
	* La asignación a disco se retrasa lo más posible
	* Buscan grupos de bloques consecutivos
	* Permiten pre-asignación de espacio
* Los [[Sistema de ficheros|SSFF]] modernos usan extens