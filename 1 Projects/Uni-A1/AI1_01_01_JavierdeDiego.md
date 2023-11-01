
# Tarea 1 de la asignatura de Auditoria Informática 1
## Establecimiento de que métricas voy a medir y en función a que CSF 

He decidido crear las siguientes auditorias:
* Auditar el número de switches IP cuya dirección IP no esta registrada
* Auditar el número de impresoras cuyo número de serie no se encuentra registrado

1. **Métricas relacionadas con la CSF "Accounting for, managing and protecting the integrity of CIs throughout the service lifecycle":**
    
    - **1.1.3. KPI Reduction in the use of unauthorized hardware and software:** todos los switches deberán tener las direcciones IP registradas, ya que los switches no registrados pueden presentar una preocupación de seguridad
        
    - **1.1.4. KPI Reduced number of exceptions reported during configuration audits:** el no tener el número de serie registrado puede presentar de manera directa excepciones durante las auditorías de confirmación
        
2. **Métricas relacionadas con la CSF "Supporting efficient and effective service management processes by providing accurate configuration information at the right time":**
    
    - **2.1.5. KPI Improvement in time to identify poor-performing and poor-quality assets:** la falta de información sobre la dirección ip puede conllevar problemas de rendimiento
        
    - **2.1.6. KPI Reduction in risks due to early identification of unauthorized change:** ambas métricas ayudan a la identificación de cambios no autorizados
	
1. **Métricas relacionadas con la CSF "Establishing and maintaining an accurate and complete configuration management system (CMS)":**
    
    - **3.1.2. KPI Improved audit compliance:** La auditoría de impresoras y switches puede mejorar la conformidad con las auditorías de configuración.
        
    - **3.1.4. KPI Fewer errors caused by people working with out-of-date information:** La información de dirección de IP de los switches y el número de serie de las impresoras contribuye a reducir errores por falta de configuración

## Auditoria 1: Impresoras que no tengan el número de serie registrado

1. He determinado el filtro que nos selecciona todas las impresoras
	![[Pasted image 20230929112139.png]]
2. Creación de la plantilla que selecciona aquellas impresoras sin número de serie
	![[Pasted image 20230929121957.png]]
3. Creación y ejecución de la auditoría
	![[Pasted image 20230929113041.png]]
	![[Pasted image 20230929122327.png]]
 4. Creación del gráfico a partir de los datos obtenidos:
	![[Pasted image 20230929164932.png]]
## Auditora 2: Switches que no tengan la dirección IP registrada
1. He determinado el filtro que selecciona todos los switches
	![[Pasted image 20230929112440.png]]
2. Creación de la template
	![[Pasted image 20230929122031.png]]
1. Creación y ejecución de la auditoría
	![[Pasted image 20230929122135.png]]
	 ![[Pasted image 20230929122154.png]]
 4. Creación del gráfico a partir de los datos obtenidos:
	 ![[Pasted image 20230929164647.png]]



### Comenterios adicionales de la entrega
* Para poder crear de manera correcta los dos gráficos, no solo he selecionado los resultados de la auditoria, si no solo aquellos correspondientes a la ultima ejecución de esta, ya que en las primeras ejecuciones la selección de la template era erroneo y por lo tanto los datos recabados también. No he encontrado la manera de borrar los datos errones así que simplemente me he asegurado que para obtener los gráficos solo utilizaba todos los datos de una sola ejecución  de la auditoria.
* He intentado crear una scripted audit, pero era por que mal interpreté la tabla de software packages, pensaba que ahí estarían todos las instalaciones de manera individual, no los paquetes en sí. Por lo que hay una scripted audit en el servidor que es erronea, ya que tenía como objetivo averiguar de todoso los paquetes de software, cuales no erán la última versión disponible en el sistema. Por como está hecho el script, creo que si funcionaría de estar la tabla estructurada como interpreté, pero es inutil de cara a la estructura real de esta.