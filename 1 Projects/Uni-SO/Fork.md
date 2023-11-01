* LLamada al sistema $\text{pid\_t fork(void)}$
	* Clona el proceso que la ejecuta
	* Noción de proceso padre e hijo
	* El hijo tiene accesos a recursos del padre (copia parcial de [[Bloque de control de procesos|BCP]])
	* Valor de retorno distinto para padre ([[PID]] del hijo) e hijo (0)
	* El proceso hijo solo tiene un hijo