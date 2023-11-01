* Especifica modelos con
	* Diagramas de casos de uso
	* Descripcipción de los casos de uso: 
		* mediante plantillas  de texto
		* acompañados de diagramas de interacción
* Entidades
	* Caso de uso
		* Secuencia de acciones, incluyendo variantes, que puede realizar el sistema interaccionando con los actores del sistema • 
	*  Actor
		* Un conjunto coherente de roles que juegan los usuarios cuando interaccionan con los casos de uso 
	* Límite del sistema
		* Representa el límite entre el sistema físico y los actores que interaccionan con el sistema
![[Pasted image 20230926132438.png]]
* Relaciones
	* Asociación: participación de un actor en un caso de uso
	* Generalización: herencia
	* Dependencia
		
		* `<<extend>>` el comportamiento de un caso de uso origen extiende el de un caso de uso destino
		* `<<include>>` el comportamiento de un caso de uso origen incluye el de un caso de uso destino
* Ej:
![[Pasted image 20230926132940.png]]
>Si ejecutas realizar pedido, **obligatoriamente** necesitas proporcionar datos cliente, pedir producto, realizar pago

* Partes CU:
	*  Entrada: información que viene de otro caso de uso
	* Salidas: información que se introduce o se genera en el CU y sale hacia otro
	* Precondición: condición que se tiene que se cumplir antes de ejecutarse el CU
	* Postcondición: la condición lógica que se cumple cuando acaba el CU
 * Prototipo de GUI


Practica
* Crear modelo por defecto: General-> Blank Package