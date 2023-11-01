* ![[HDL]]
* VHDL realiza la simulación siguiendo la técnica de simulación por eventos discretos
* La simulación consta de 3 fases
	* Fase 0: Inicialización
	* Fase 1: Todas las transiciones planificadas para ese tiempo son ejecutadas
	* Fase 2: Las señales que se han modificado como consecuencia de las transiciones planificadas en el instante t se escriben en la lista de eventos planificandose para t + i siendo i in incremento infinitesimal
 * ![[Simulable vs sintetizable]]
 * Descripción de un sistema digital
	 * Entity: descripción de los interfaces (entradas y salidas)
		 * Nombres y tipos de entrada y salida
		 * Información para conectar el sistema con otros circuitos
		 * Información necesaria para conectar a otros circuitos
	* Architecture
		* Define la funcionalidad del circuito
		* Señales, procesos, funciones
* 