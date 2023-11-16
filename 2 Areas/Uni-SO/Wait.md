* Un proceso puede bloquearse a la espera de que termine alguno de sus procesos hijos, utilizando alguna de las siguientes llamadas al sistema
	* $\text{pid\_t wait(int *status)}$ : espera a la finalicación de cualquiera de sus procesos hijo
	* $\text{pid\_t waitpid(pid\_ t , int *status, int options)}$ : espera por la terminación de un proceso hijo determinado identificado por su [[pid]]
 * Si un proceso hijo termina, queda en un estado zombie hasta poder entregar el valor de retorno al proceso (a través wait)