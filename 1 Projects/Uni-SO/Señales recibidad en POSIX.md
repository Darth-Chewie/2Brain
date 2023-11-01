---
related: "[[POSIX]]"
---
* En [[POSIX]] los procesos pueden recibir señales
	* De otros procesos
	* Del propio [[SO]]
* El [[SO]] guarda una máscara de señales pendientes por atender para cada proceso
* Un proceso puede
	* Bloquearse a la espera de la recepción de alguna señal
	* Registrar un manejador para tratar la señal
* Cuando el [[SO]] cede la [[CPU]] al proceso, si tiene señales pendientes serán tratadas primero
	* Supone una analogía software de una interrupción