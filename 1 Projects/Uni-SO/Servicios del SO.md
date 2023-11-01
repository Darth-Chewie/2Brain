---
aliases:
  - Servicios
---
* Funcionalidad que el [[SO]] provee a los programas
* Se accede a través de llamadas al sistema
1. Se invoca una función de biblioteca del sistema, que
	1. I Prepara los argumentos de la llamada al sistema: 
		1. según la arquitectura por registro o pila 
		2. uno de los argumentos es el no de llamada al sistema
	2. Ejecuta una instrucción especial que provoca una excepción interrupción software, trap en x86, swi en arm 
2. La [[RTI]] invoca la función del SO que ofrecerá el servicio
	1. Se obtiene indexando una tabla con el nº de llamada al sistema
	2. Se ejecuta por tanto en modo privilegiado
	3. Tiene acceso a las estructuras del SO
	4. No hay cambio de contexto 
3. Al finalizar:
	1. se prepara el valor de retorno
	2. se realiza el retorno de interrupción, retomándose la ejecución dónde se interrumpió y en modo usuario