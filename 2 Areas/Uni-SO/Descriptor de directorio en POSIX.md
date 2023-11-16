

En [[POSIX]]  un descriptor de directorio En POSIX un directorio se maneja con el descriptor obtenido al abrirlo:
```
DIR * opendir ( char * dirname ) ;
```
* Un descriptor en una estructura DIR
* Su almacenamiento en memoria lo gestiona la biblioteca del sistema