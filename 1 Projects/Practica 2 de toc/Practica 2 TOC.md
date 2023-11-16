* Que es la FSM?
	* Finite State Machine
* Toda máquina de estados finita esta compuestas por:
	* Un circuito combinacional que calcula la saldida del circuito y el siguiente estado
	* Elementos de memoria para almacenar el estado actual 


![[Composición FSM.excalidraw]]

![[Estructura FSM.excalidraw]]

![[FSM P2a.excalidraw]]

 


To do
- [x] Diseñar la FSM
- [x] Describir la FSM usando tres procesos concurrentes.
	- Que es?
		- Es una metodología común para diseñar máquinas de estado de manera clara y estructurada. Estos tres procesos suelen ser:
			1. **Proceso de Definición de Estado**: Determina el estado actual de la FSM.
			2. **Proceso de Transición de Estado**: Decide el próximo estado basado en el estado actual y las entradas.
			3. **Proceso de Salida**: Genera salidas basadas en el estado actual (y posiblemente en las entradas).
- [ ] Crear un testbench, simular y verificar el funcionamiento de la FSM.
- [ ] El testbench (en VHDL) proporciona las entradas a la FSM y debéis comprobar que la evolución de los estados es correcta para dichas entradas.
- [ ] Sintetizar y verificar los recursos hardware empleados. – NO usar el divisor de frecuencia.
- [ ] Implementar sobre la FPGA.
- [ ] Conectar las entradas y salidas a pines de la FPGA.
- [ ] Conectar el puerto clk de la FSM al pin de reloj de la FPGA. 
- [ ] Validar el funcionamiento en placa proporcionando entradas mediante los switches y comprobando que las salidas son correctas.


## Parte avanza
