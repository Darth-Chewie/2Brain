* Agrupación lógica de sectores de disco que suponen la unidad de transferencia mínima que usa el sistema de fichero, como mínimo un cluster
* Los [[Sistema de ficheros|SSFF]] tiene un tamaño de bloque por defecto, pero se puede especificar otro al usar mkfs
* Sirve para optimizar la eficiencia de la entrada/salida de los dispositivos secundarios de almacenamiento
* El problema que introducen las agrupaciones grandes es la existencia de fragmentación interna. El tamaño que ocupa un fichero en disco es múltiplo del tamaño del cluster