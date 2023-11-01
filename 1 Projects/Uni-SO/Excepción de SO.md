---
aliases:
  - Excepción
---

* Evento interno del procesaro que desencadena un mecanismo que:
	1. Dentiene la ejecución del programa actual
	2. Cambia a modo privilegiado
	3. Salva una parte del estado arquitectónico
	4. Salta a una dirección específica
		1. En esa dirección deberá haber una instrucción de salto a la rutina de tratamiento de excepción ([[RTI]] o [[ISR]])
			1. El retorno a la rutina retomará la ejecución por donde se interrumpio dicha rutina pasando a modo usuario