* Escritura inmediata: cada actualización en cache implica escritura en disco
* Escritura difereida: un bloque solo se mete a disco cuando se elige para su remplazo en la cache
	* Optimiza el rendimiento pero genera problemas de fiabilidad
* Escritura retrasada: periodicamente se escriben a disco los bloques modificados
* Escritura al cierre: cuando se cierra un archivo se escriben en disco los bloques modificados