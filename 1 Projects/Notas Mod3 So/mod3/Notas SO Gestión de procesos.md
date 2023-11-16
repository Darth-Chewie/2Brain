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
3. Por una 