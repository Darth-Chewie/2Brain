```
struct dirent* readdir(DIR* dirp);
```
* La función readdir devuelve la siguiente entrada de directorio como una estructura struct dirent
	* Almacenamiento gestionado por la biblioteca del sistema
	* Implementación dependiente del sistema
	* POSIX fija que debe tener al menos dos campos:
		* d_name: nombre del fichero/directorio
		* d_ino: nodo-i del fichero Definida en el fichero dirent.h
	  * Definidas en el fichero dirent.h
