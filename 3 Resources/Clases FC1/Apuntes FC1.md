
**Tema 2**

- Sistemas combinacionales
- La salida en cada instante depende exclusivamente del valor de la entrada en ese instante.
- Para especificar su comportamiento deberán definirse:
    - Los conjuntos discretos de valores de entrada/salida: E, S
    - La función F: E -> S
- Dominio: Conjunto de valores que puede tomar la entrada.
- Codominio: Conjunto discreto de valores que puede tomar la salida.
- Función de entrada/salida: Comportamiento del sistema, es decir, qué valor toma la salida para cada posible valor de la entrada.
- Entrada es un vector de n bits.
- Salida es un vector de m bits.
- Funciones de conmutación de n variables definiendo cada una el comportamiento de un bit de la salida.
- Una función de conmutación de n variables es una aplicación:
    - f: {0, 1}ⁿ -> {0, 1}
- A veces las funciones de conmutación son parciales.
- Forma alternativa de definir FC completamente especificadas: Reglas de generación.
- Toda variable lógica es una EC (Expresión Canónica) válida.
- 0 y 1 son EC válidas.
- Si A es una EC válida, Atambién lo es.
- Si A y B son EC válida, (A), A+B y A∙B también lo son.
- Solo son EC válidas las generadas usando las reglas 1 a 4.
- Mapa de Karnaugh: tabla de verdad de doble entrada que permite obtener de manera gráfica una EC mínima en forma de suma de productos que la represente.

**Tema 3**

- Implementación de sistemas combinacionales
- Dispositivo que realiza físicamente una función de conmutación sencilla.
- Tipos de puertas lógicas:
    - NOT
    - AND
    - OR
    - XOR
    - NAND
    - NOR
    - XNOR
- Tipos de buffers:
    - Buffer no inversor: permite compensar la atenuación eléctrica de una señal.
    - Buffer tristado: permite desconectar selectivamente una señal.
- Definiciones:
    - Red combinacional: red de módulos combinacionales en las que no existen realimentaciones.
    - Nivel de una red: número máximo de módulos que atraviesa cualquier camino que conecte una entrada con una salida.
- Al dibujar el esquema de un circuito, usaremos alguna notación adicional para las interconexiones.
- Se dice que un conjunto de módulos combinacionales es universal si permite implementar cualquier función combinacional.
- Ejemplos de conjuntos universales:
    - {AND, OR, NOT}
    - {AND, NOT}
    - {NAND}
    - {OR, NOT}, {NOR}, {XOR, AND}
- Proceso de implementación: Dada una especificación de una conducta combinacional, implementarla usando puertas.
