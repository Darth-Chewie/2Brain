* Todos los [[Proceso(SO)|procesos]] están organizados en sesiones
* El ID de la sesión es el [[pid]] del proceso que la creo utilizando la llamada al sistema setid()
	* El lider de la sesión
* Todos los procesos creados a contunuación pertenecen a la sesión, a menos que se quiten de la sesión creado su propia sesión
* Cada sesión está asociada a un terminal de control, que es la estrada y salida estándar para los procesos de la sesión
	* Cuando un proceso se ejecuta en el background ya no puede recibir datos del terminal pero si puede escribir datos en él