Para encontrar el n-ésimo byte del fichero tenemmos que:
1. Calcular el bloque lógico en el que se encuentra el byte
2. Acceder al directorio para obtener el id del primer bloque
3. Seguir los enlaces de la tabla [[FAT]] hasta llegar al bloque lógico B (B-1 enlaces)
4. Acceder al disco, en el bloque físico(indicando en la última entrada de la [[FAT]] consultada)