---
aliases:
  - transmisión de banda ancha
---
* Ejemplos
	* Modulación en Amplitud ([[Amplitude Shift Keying | ASK]], [[Amplitude Shift Keying]])
		* [[2-PSK]] o [[BPSK]] (PSK Binario)
			* Utiliza una señal portadora con frecuencia y fase constante, pero dos niveles de amplitud distintos para representar el 1 y el 0 lógicos
				* 1 → s(t) = A sen(2πft) 
				* 0 → s(t) = B sen(2πft) 
				* V=2 elementos de señal 
				* R=1 bit por baudio
			![[Pasted image 20230928114708.png]]
		* 4-PSK o QPSK (PSK en cuadratura)
			* Similar a BPSK, pero usa cuatro fases distintas en lugar de dos 
			* V=4 elementos de señal → R=2 bits por baudio
		   ![[Pasted image 20230928115319.png]]
	* Modulación de amplitud en cuadratura ([[QAM]])
		* Es una combinación de [[PSK]] y [[ASK]]
		* Utiliza varias fases y amplitudes distintas para codificar un mayor número de bits por baudio
		* Ejemplos:
			* 8-QAM: V=8 elementos de señal → R=3 bits por baudio
			* 16-QAM: V=16 elementos de señal → R=4 bits por baudio
			* 32-QAM: V=32 elementos de señal → R=5 bits por baudio
			* etc
		![[Pasted image 20230928115420.png]]
		