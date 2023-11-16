El primer [[Proceso(SO)|proceso]] creado por el sistema es [[systemd]](init), pid=1:
* Encargado de arrancar el [[SO]] y lanzar los demás procesos
* Todos los procesos del sistema son sus sucesores
* Al finalizar su tarea de levantar el sistema se queda esperando a que terminen sus hijos
* Si un proceso padre termin antes que uno hijo, los procesos hijo son heredados por el proceso antecesor más cercano marcado como subreaper o por el systemd
* El [[Linux]] podemos ver el árblo de procesos con pstree