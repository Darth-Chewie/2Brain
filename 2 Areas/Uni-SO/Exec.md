* Familia de llamadas al sistema $\text{int exec*(const char *path, ...)}$, permite cambiar el mapa de memoria del proceso por el de un nuevo programa con argumentos de llamada
	* Los procesos mantienen la [[tabla de descriptores de ficheros abiertos|TFA]], por tanto el nuevo programa tiene acceso a los ficheros abiertos por el anterior, a menos que se hubieses abierto con la opción *close on exec* ( flag O_CLOEXEC activo)
	 * Las señales que tengan registrado un manejador pasarán a tener la acción por defecto
* Variantes:
	* Formato largo: un puntero por argumento
	* Formato vector: un array con los parámetros
	* Con entorno(e)
	* Buscando en la variable PATH (p)
