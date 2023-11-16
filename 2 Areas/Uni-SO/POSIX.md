* Portable Operating System Infertace for uniX
	* Estandar de sistemas operativos UNIX de IEEE
	* No es una implementación, solo define una interfaz
* Objetivo: portabilidad de las aplicacioens entre diferentes plataformas y sistemas UNIX
* Compuesto o dividido en varios estándares
* Caracteristicas
	* Nombre de funciones corton y en minusculas: fork, read, close...
	* Las funciones devuelven 0 en caso de éxito o -1 en caso de error
		* Variable errno
	* Recursos gestionados por el [[SO]] se referencian mediante decriptores