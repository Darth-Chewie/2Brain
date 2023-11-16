Para terminar la ejecución de un proceso debe invocarse la llamada $\text{int exit(int status)}$
* Status: códgo de retorno a proceso padre
	* 0 si es una finalización sin error
	* Otro si hay error
* El [[SO]] liberará todos los recursos no compartidos asociados al proceso
* En un programa C un retorno de main supone una llamada a exit con un valor devuelto desde el main
* Cuidado con los procesos multi-hilo, todos los hilos del proceso terminarán