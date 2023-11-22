
## Población estadística
* Un conjunto completo de $N$ elementos o eventos de interés para cierto experimento u observación
* Puede ser
	* Un conjunto concreto de objetos concretos realmente existente
	* Un conjunto teórico de todas las posibles realizaciones de un fenómeno aleatorio
	* Finito o infinito

## Muestra estadística
* Cualquier subconjunto finito de $n$ elementos de la población que se observa correctamente
* Una buena muestra debe ser una representación fiel y objetiva de las propiedades de la población -> su selección es crucial para la calidad de resultados estadísitcos
 * Es importante que la muestra sea suficientemente grande
 * Se puede dintinguir entre
	 * Muestreo sin reemplazamiento
	 * Muestreo con reemplazamiento
* MAS (muestreo aleatorio simple):
	* Consiste en seleccionar elementos de la muestra de forma aleatoria a partir de la población -> estrictamente al azar, y sin ninguna influencia entre los elementos seleccionados
	* Propiedades
		* Los elementos $x_i$ de una m.a.s. $X$ puede ser representado por variables aleatorias $\{x_i\}_i=1,..., n$ con la misma distribución de probabilidades que la variable aleatoria poblacional $\xi$
		* Las variables aleatorias $\{x_i\}_i=1,...,n$ forman un conjunto de variables estocásticamente **independientes**
	 * Con los elementos de la muestra se pueden calcular medidas que describen las propiedades estadísticas de la muestra.

## Estadísticos
*  Una medida de alguna característica de una muestra
* Estadísticos que vamos a usar
	* $\sum implica \displaystyle \sum ^n _{i=1}$

| | |
|-|-|
| Media muestral |$\overline{x} \frac{1}{n} \sum x_i$|
| Proporción muestral <br> (para $\xi \sim \mathcal{B}(1, \pi))$ | $p = \frac{1}{n}\sum{x_1}$ |
| Varianza muestral | $s^2_n=\frac{1}{n}\sum(x_1-\overline{x})^2=\frac{1}{n}\sum x^2_i-\overline{x}^2$ |
| Cuasivarianza muestral | $s^2_{n-1}=\frac{1}{n-1}\sum (x_1 - \overline{x})^2=\frac{n}{n-1}S^2_n$ | 


| Propiedad        | Parámetro poblacional         | Estadístico muestral              |
|------------------|-------------------------------|-----------------------------------|
| Media            | Media poblacional $E[\xi]$    | Media muestral $\bar{x}$          |
| Varianza         | Varianza poblacional $S_n^2$  | Cuasivarianza muestral $S^2_{n-1}$|
| Desviación típica| DT poblacional $DT[\xi]$      | DT muestral $S_n$ <br> Cuasi-DT muestral $S_{n-1}$ |
| Proporción       | Proporción poblacional $\pi$  | Proporción muestral $p$           |


## Distribución de la población
### Características
* Tenemos
	* $E[\overline{x}]=E[\xi]$
	* $Var[\overline {x}] \not = Var[\xi]$
	* $DT[\overline {x}] \not = DT [\xi]$
* Sin embargo
	* $Var[\overline{x}] = 2.5 = \frac{5}{2} = \frac{Var[\xi]}{n}$
	* Donde el tamaño de la muestra $n = 2$
	* Resulta que efectivamente es una regla general y por tanto podeos resumir:
		* $E[\overline{x}] = E[\xi]$
		* $Var[\overline{x}]=\frac{Var[\xi]}{n}$
	* Y tamnbién
		* $DT[\overline{x}] = \frac{DT[\overline{x}]}{\sqrt{n}}$
* Demostrando
	* $E[\bar{x}] = E[\xi]$ 
	* $\text{Var}[\bar{x}] = \frac{\text{Var}[\xi]}{n}$
 * Se cumlpe siempre: $E[\overline x] = E[\xi]$
 * La varianza:
	* En casos sin remplazamiento:  $Var[\overline{x}] \not = \frac{Var[\xi]}{n}$
	* En casos con reemplazamiento: $Var[\overline{x}] = \frac{Var[\xi]}{n}$
* 