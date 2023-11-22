---
aliases:
  - FCFS
---
* Se planifican los procesos por orden de entrada en la cola de listos
* Muy sencillo y óptimo uso de la [[CPU]]

| Proceso o Hilo | Instante de llegada | Tiempo de CPU (ms) |
| -------------- | ------------------- | ------------------ |
| T0             | 0                   | 5                  |
| T1             | 1                   | 12                 |
| T2             | 2                   | 2                  |
| T3             | 3                   | 1                  |
* ![[Pasted image 20231117103715.png]]
* Tiempos medios altos
	* Programas con [[E-S|E/S]] son encolados al final
	* Programas largos afectan al sistema
 
 | Proceso o Hilo | Instante de llegada | Tiempo de CPU (ms) |
| -------------- | ------------------- | ------------------ |
| T0             | 0                   | 5                  |
| T1             | 1                   | 12                 |
| T2             | 2                   | 2                  |
| T3             | 3                   | 1                  |
![[Pasted image 20231117103813.png]]