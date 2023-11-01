
1. El [[hardware|HW]] se inicia con una excepción especial: Reset
2. El vector de reset está en memoria no volátil ([[ROM]], [[Flash]])
3. La [[RTI]] de reset está en memoria no volátil ([[ROM]], [[Flash]])
	1. El código de la ROM/Flash ([[BIOS]] en PC) se encarga de buscar un [[SO]] (o gestor de arranque) en los posibles dispositivos de arranque 
	2. Si lo encuentra copia el primer sector en memoria Salta a la zona de memoria donde lo ha copiado 
	3. El código copiado se encarga de cargar todo el [[SO]]. en memoria Finalmente comienza la ejecución del S.O.