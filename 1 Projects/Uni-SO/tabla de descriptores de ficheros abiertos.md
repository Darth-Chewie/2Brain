---
aliases:
  - TFA
---
* Es una tabla con entrada por por descriptor de fichero abierto
* Cada entrada contiene una referencia a la entrada en la [[tabla intermedia de posiciones]] con la información de apertura
	* Puntero de posición
	* Permisos de apertura
	* nº de procesos que usan la entrada
	* ...
* [[POSIX]] : cuando un proceso crea otro la [[TFA]] se copia del proceso padre al hijo, incrementando el nº de referencias en la [[TIP]]