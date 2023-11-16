* ![[HDL]]
* VHDL realiza la simulación siguiendo la técnica de simulación por eventos discretos
* La simulación consta de 3 fases
	* Fase 0: Inicialización
	* Fase 1: Todas las transiciones planificadas para ese tiempo son ejecutadas
	* Fase 2: Las señales que se han modificado como consecuencia de las transiciones planificadas en el instante t se escriben en la lista de eventos planificandose para t + i siendo i in incremento infinitesimal
 * Simulable vs sintetizable :Cualquier código [[VHDL]] correcto es simulable pero no tiene por que ser sintetizable

* Para que sea sintetizable debemos de usar construcciones y estilos de description que permitan a las herramientas inferer la lógica del circuito
 * Descripción de un sistema digital
	 * Entity: descripción de los interfaces (entradas y salidas)
		 * Nombres y tipos de entrada y salida
		 * Información para conectar el sistema con otros circuitos
		 * Información necesaria para conectar a otros circuitos
	* Architecture
		* Define la funcionalidad del circuito
		* Señales, procesos, funciones
  * Tipos de objetos en VHDL
	  * Un objeto es un elemento con nombre en un modelo [[VHDL]]. El tipo de objeto define la naturaleza y comportaiento del elemento
	* Antes de poder usarse los objetos deben ser declarados
	* Tipos de objetos
		* Señales
		* Variables
		* Contantes
		* Archivos
* Señales
	* En [[VHDL]] representan elementos de memoria o conexiones y sirven para comunicar las sentencias concurrentes del lenguaje
	* Pueden usarse en cualquier linea de código de la arquitectura
	* El operador de asignación es <=
	* Estan sujetas al modelo de temporización basado en deltas
	* Se pueden usar señales en el lado de la derecha de asignaciones de señal o de variables
	* Para declararlas se usa la palabla reservada signal
		```VHDL
		signal a1 : std_logic_vector(7 downto 0);
		```
* Variables
	* No representan conexiones o estados de memorial
	* Se pueden utilizar como índives en instrucciones de bucle o modelar componentes
	* Solo pueden estar en los procesos
	* Operación de asignación es :=
	* No están sujetas al modelo de emporización basado en deltas
	* Se pueden usar señales en el lado de la derecha de asignaciones de señal o de variables
	* Se declaran con la palabra reservado variable
 


