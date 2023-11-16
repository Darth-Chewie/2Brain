* Wide Area Network
	* Ocupan un área geográfica mayor (ciudad, país...)
	* Normalmente de uso público y gestionado por empresas de comunicación
* Tipos
	* WAN punto a punto
		* Conecta dos dispositivos de comunicación vía un medio de transmisión
		* Ejemplo: conexión por modem convencional o [[ADSL]] entre computador doméstivo e [[ISP]]
	* WAN de conmutación de circuitos (Circuit Switched WAN)
		 * Se establece una conexión dedicada entre los dos extremos
		 * Los [[switch]]es no realizan procesamiento de información
			 * Solo se establecen los circuitos necesarios para la comunicación
		* Ejemplo: [[PSTN]]
	* WAN de conmutación de paquetes
		* La información se divide en [[paquete]]s
		* Los switches procesan los paquetes realizando dos funciones:
			* [[routing]] de paquetes
			* [[forwarding]] de paquetes
		* Se distinguen dos tipos
			* Redes de datagramas: cada paquete se trata de forma independiente
				* Los paquetes se encaminan en función de la dirección de destino
				* Los paquetes pueden seguir caminos distintos hasta llegar a destino y pueden llegar fuera de orden
					* Ejemplo: red ip
			* Redes de circuitos virtuales
				* Se establece una ruta previa para el envio de paquetes
				* Los paqueten llegan en orden
				* La ruta establecida puede usarse para otras transmisiones
				* Ejemplo redes ATM