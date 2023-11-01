---
related:
  - "[[POSIX]]"
  - "[[Hilos]]"
---
* Creación de un hilo con función de entrada func
	 $\text{int pthread\_create (pthread\_t *thread, const pthread\_attr\_t *attr, void *(*func)(void *), void *ar)}$
* Terminación del hilo y retorno de valor de terminación
	* $\text{int pthread\_exit(void *value)}$ 
* Esperar a la terminación de un hilo y obtener el valor de terminación 
	* $\text{int pthread\_join(pthread\_t *thread, void **value) Obtención del identificador de hilo pthread\_t pthread\_self(void)}$
* Obtención del identificador de hilo
	* $\text{pthread\_t pthread\_self(void)}$
 