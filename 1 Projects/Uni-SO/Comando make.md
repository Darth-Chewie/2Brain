- La estructura de un makefile se compone principalmente de tres cosas:
  1. Comentarios.
  2. Definiciones de variables.
  3. Reglas.
## Variables:
  - Definir una variable: CC = gcc -Wall -pthread
  - Acceder al contenido de esta variable: $(CC) partial_sum1.c -o sum1
  - Empleando := en lugar de = evitamos la expansión recursiva.
- Un tipo especial de variables lo constituyen las variables automáticas, aquellas que se evalúan en cada regla. Estas variables recuerdan a las variables usadas en los scripts de bash.
## Reglas:
  - El formato de una regla es el siguiente: objetivo: prerrequisitos
  - El objetivo es generalmente un fichero a crear.
  - Los prerrequisitos son una serie de ficheros que deben estar presentes y actualizados para que make pueda crear el objetivo.
  - Para construir el objetivo, make ejecutará los comandos indicados en el cuerpo de la regla.
- Procesa una regla de la siguiente manera:
  1. Primero comprueba los prerrequisitos.
	  - Si hay alguna regla para construir el prerrequisito, make procesará dicha regla.
	  - Si no hay ninguna regla para crear el prerrequisito, pero hay un fichero con ese nombre, el prerrequisito queda cumplido.
	  - Si no hay ninguna regla para crear el prerrequisito y el fichero no existe, make no puede completar la compilación y termina con error.
- Make determina si debe aplicar la regla o no.
	  - Si no existe ningún fichero con el nombre del objetivo, o existe pero es más antiguo que alguno de los prerrequisitos, entonces la regla debe aplicarse para actualizar el objetivo.
	  - Por el contrario, si el fichero existe y no es más antiguo que ninguno de los prerrequisitos, make no necesita aplicar la regla.
  - Si hay que aplicar la regla, make ejecutará los comandos escritos en el cuerpo de la regla.
## Reglas virtuales:
  - Es relativamente habitual que, además de las reglas normales, los ficheros Makefile puedan contener reglas virtuales que sirvan para realizar una determinada acción dentro de nuestro proyecto software.
  - Suelen tener un objetivo, pero ninguna dependencia.
  - .PHONY: Todas las dependencias que incluyamos en este objetivo obviarán la presencia de un fichero que coincida con su nombre.
- Reglas implícitas:
  - No todos los objetivos de un Makefile tienen por qué tener una lista de comandos asociados para poder realizarse.
- Reglas patrón:
  - Las reglas implícitas que acabamos de ver tienen su razón de ser debido a una serie de "reglas patrón" que implícitamente se especifican en los Makefiles.

- Invocando al comando make.
## Source
[[make.pdf]]