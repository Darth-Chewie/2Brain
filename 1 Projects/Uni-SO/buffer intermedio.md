* Las llamadas al sistema son costosas
* La bibliotea estandar de [[C]] usa buffers intermedios
	* Llamadas consecutivas a [[fread]] o [[fwrite]] suponen lecturas o escrituras del buffer intermedio 
* Cuando se cumple alguna condición se hace la llamada al sistema para leer o escribir del fichero real (escritura/lectura en bloque):
	* Porque se llena o vacía el buffer
	* Porque escribimos un final de línea La política se puede cambiar con setvbuf int
 ```
	setvbuf ( FILE * stream , char * buf , int mode , size_t size ) 
 ```
 