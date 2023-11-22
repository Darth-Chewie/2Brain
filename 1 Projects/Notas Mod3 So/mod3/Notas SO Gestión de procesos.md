## Multitarea
* Los procesos pasan por fases de E/S y CPU
* Mientras un proceso espera or E/S otro podría utilizar la [[CPU]]
* El [[SO]] mantiene en memoria varios procesos activos

## Proceso nodo o idle
* Proceso que mantiene la cpu ejecutando instrucciones cuando no hay ningún otro proceso listo en el sistema.
* No hace nada útil
* Es el menos prioritario

## Ventajas de la multitarea
* Facilita la programación, dividiendo los programas en procesos
* Permite el servicio interactivo simultáneo de varios usuarios de forma eficiente
* Aprovecha los tiempos que los procesos pasan esperando a que se completen sus operaciones de [[E-S|E/S]]
* Aumenta el uso de la [[CPU]]

## Grado de multiprogramación
* Grado de multiprogramación: nº de procesos activos
* Aumentarlo demasiado puede degradar el rendimiento global por paginación

## Estructura del planificador
![[Pasted image 20231109203056.png]]
* A largo plazo: añadir procesos a ejecutar (batch)
* A medio plazo: añadir procesos a [[RAM]]
* A corto plazo: que proceso tiene la [[CPU]]


## Planificación a corto plazo
![[Pasted image 20231109203119.png]]
* Activador o dispacher: cede el control al siguiente proceso
	* Escogido entre los hilos en estado ready
	* Depende de la política de planificación
	* Cambiar de proceso implica un cambio de contexto


## Intervención del planificador
* El [[SO]] siempre entra a través de una [[Excepción de SO|excepción]]/[[Interrupción del SO | interrupción]]
* El tratamiento de la interrupción supone:
	1. Detener la ejecución de instrucciones
	2. Cambiar a modo privilegiado
	3. Salvar el estado arquitectónico
	4. Ejecutar la rutina de tratamiento de excepción/interrupción
* La RTI
	* Es el código de [[SO]]
	* Es ejecutada en el contexto del proceso activo
	* Finaliza con un proceso de retorno de interrupción que restaura el contexto arquitectónico
* Algunas interrupciones y/o excepciones desescadenan la ejecución del planificador

## Activación del planificador
1. Periódicamente en cada tick del sistema
	* El HW procee el [[SO]] de un contador programeble que genera interrupciones periódicas
	* Actualiza estadísticas para el algoritmo de planificación
	* Comprueba si le toca planificar otro proceso
2. Por el tratamiento de la interrupción de algún dispositivo [[E-S|E/S]]
3. Por una excepción provocada por el proceso en ejecución
	* Que lo bloquea
	* Que fuerza su terminación
	* Que termina voluntariamente el proceso de ejecución
	* Que cede voluntariamente el procesador
	* Que desbloquea y crea otro proceso
4. Porque se desbloquea un proceso más importante que el actual
	* Sucede realmente por alguno de los mecanismos anteriores

## Cambio de contexto
* Acciones realizadas por el [[SO]] para cambiar el proceso en ejecución en una [[CPU]]
	* Salvar el contexto del proceso saliente (registros -> [[Bloque de control de procesos|BCP]])
	* Cambiar el estado del proceso saliente ( En efecución -> Otro)
	* Configurar la [[Unidad de gestión de memoria  | MMU]]  para el espacio de direcciones del proceso entranteç
		* Segmentos o regiones de [[Memoria || memoria]]h que puede usar
		* Punteros a la tabla de páginas
		* Flush de [[Translation Lookaside Buffer | TLB]]
	* Cambiar el estado del proceso entrante (Listo -> En ejecución)
	* Restaurar su contexto ([[Bloque de control de procesos|BCP]] -> registros)
	* Realizar el entorno de Interrupción para continuar la ejecución del proceso (modo usuario)
* Puede llegar a ser una operación bastante costosa

## Planificación de procesos
* Objetivos 
	* Optimizar el uso de la [[CPU]]
	* Minimizar el tiempo de espera
	* Justicia -> ofrecer reparto equitativo
	* Prioridades -> proporcionar grados de urgencia
* Métricas
	* Parámetros por entidad (proceso o hilo)
		* Tiempo de ejecución (turnaround) : creación - terminación
		* Tiempo de espera: tiempo total lista y sin [[CPU]]
		* Tiempo de respuesta: creación - 1er uso de [[CPU]]
	* Parámetros globales
		* % de utilización del procesador
		* Justicia: equitatividad en el reparto de [[CPU]]
		* Productividad: número de trabajos completados por unidad de tiempo

## Algoritmos de planificación de procesos

* Tipos:
	* Algoritmos no expropiativos
		* El proceso en ejecucuón conserva la [[CPU]] hasta que 
			* Se bloquea
			* Cede expresamente la [[CPU]]
			* Termina su ejecución
		* Algoritmos:
			* [[First Come First Served]]
			* [[Shortest Job First]]
			* [[Basado en prioridades]]
	* Algoritmos expropiativos
		* Cuando el planificador lo considera pertinente, cambia el proceso/hilo que hay ejecutando por otro
			* La decisión depende del algoritmo de planificación
		* Más adecuados para [[SO]] de propósito general
		* Manejan bien mezclas de trabajos interactivos y trabajos intensivos en [[CPU]]
		* Algoritmos:
			* [[Round Robin]]
			* [[Shortest Remaining Tiem First]]
			* [[Expropiativo basado en prioridades]]

## Colas Multinivel con retroalimentación
* Motivación: 
	* Reducir el tiempo de ejecución medio (turnaround)
		* Como lo hace la [[Shortest Job First|SJF]]
		* Sin conocer a priory el tiempo de ejecucción medio de cada tarea
		* El sistema debe aprender las características de cada tarea
	* Queremos reducir el tiempo de respuesta
		* Como lo hace la [[Round Robin]]
		* Importante para tareas intetactivas
	* Objetivos contrapuestos
* Reglas básicas
	* Varias colas con distinto nivel de prioridad
	* La prioridad de un proceso es la de la cola a la que está asignado
	* Si Prioridad(A) > prioridad(B), A se ejecuta y B no
	* Si prioridad(A) == Prioridad(B) se utiliza [[Round Robin]] para planificar la ejecución de A y B
* Tareas con prioridad dinámica
	* Variar la prioridd de las tareas en función de su comportamiento
		* Si un trabajo repetidamente libera la [[CP]] bloqueándose por [[E-S|E/S]] debemos asignarle alta prioridad
		* Si una tarea repetidamente usa la [[CPU]] de forma intensiva por largos periodos de tiempo, debemos asignarle menos prioridad
	* MLFQ intenta aprender de los procesos mientras se ejecutan,asuando así su historia para predecir su comportamiento
* Asignación de prioridades: intento 1