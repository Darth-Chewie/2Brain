---
aliases:
  - transmisión en banda base
---
* Transmisión de datos mediante el uso de [[Señales]] [[Digitales]]
* Ejemplos
	* Codificación polar [[NRZ]], sin retorno a 0
		* Sin retorno a cero de nivel ([[NRZ-L]]) 
			* 0 = nivel alto/positivo 
				* 1 = nivel bajo/negativo
		* Sin retorno a cero invertido ([[NRZ-I]])
			* 0 = no hay transición al comienzo del intervalo (un bit cada vez)
			* 1 = transición al comienzo del intervalo
	   ![[Pasted image 20230928113534.png]]
	* Codificación bipolar
		* Utiliza tres niveles eléctricos (positivo, negativo y cero)
		* [[AMI]] (Alternate Mark Inversion) 
			* 0 = Nivel de voltaje
			* 1 = Nivel positivo o negativo alternante
		* [[Pseudoternaria]] 
			* 0 = Nivel positivo o negativo alternante 
			* 1 = Nivel de voltaje 
	   ![[Pasted image 20230928114017.png]]
	* [[Codificación polar bifase]]
		* Utiliza dos niveles eléctricos de polaridad opuesta (-V, +V)
		* Cada elemento de datos se codifica con una transición en mitad del intervalo
		* [[Manchester]] 
			* 0 = Nivel alto seguido de bajo 
			* 1 = Nivel bajo seguido de alto
		* [[Manchester diferencial ]]
			* 0 = Transición al inicio del intervalo 
			* 1 = No transición al inicio del intervalo
		   ![[Pasted image 20230928114342.png]]
	* Codificación multitransición [[MLT-3]]
		* Utiliza 3 niveles elétricos (+V, 0 y -V)
		* Se basa en reglas de transición para codificar los datos binarios
			* Si el siguiente bit es 0, no hay transición
			* Si el siguiente bit es 1, y el nivel eléctrico actual es ≠ 0, el siguiente nivel es 0 Si el siguiente bit es 1, y el nivel eléctrico actual es = 0, el siguiente nivel es el opuesto al último nivel distinto de cero
			![[Pasted image 20230928114456.png]]
			