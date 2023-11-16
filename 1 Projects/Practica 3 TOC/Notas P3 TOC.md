* Implementar una red iterativa y una red en árbol para encontrar el mayor de una serie de números:
* Ambas redes deben poder generarse para cualquier cantidad (potencia de dos) de números mediante la sentencia ‘generate’
	* Ahí está la complicación de la práctica, generar un sistema autogenerativo
* Necestio un componente comparador con el siguiente diagrama:
* ![[diagrama comparador p3 toc.excalidraw]]
* El resto de la práctica radica somo como conextarlos para implementar un comparador de n entradas:
	* dos modos:
		* En serie
			* Implementación más facil
			* El retardo aumenta de manera proporcional al nº de entredas
		* En paralelo
			* Implementación más dificil
			* El retardo aumenta en $log(n)$, mucho más eficiente
