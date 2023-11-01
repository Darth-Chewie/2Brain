En [[POSIX]] un [[fichero]] se maneja con un descriptor de fichero obtenido al abrirlo con la siguiente llamada
```
	int open(const char *path, int oflag,...);
```
* Indica la posición correspodiente en la [[tabla de descriptores de ficheros abiertos]]  del proceso
* La [[tabla de descriptores de ficheros abiertos|TFA]] es una estructura gestionada por el SO para el proceso
* La apertura se realiza en un modo indicado por los flags
	* Máscara de bits
	* Permisos de lectura/escritura
	* Qué hacer si existe(colocarse al final, borrar...) o no
