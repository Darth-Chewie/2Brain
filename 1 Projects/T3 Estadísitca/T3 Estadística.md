## Estimación de poblaciones
* En situaciones realies se pueden hacer suposiciones razonables sobre el tipo de distribución que describe cierto fenómeno respecto a cierta población, pero se desconoce por lo menos un parámetro de esta población
* Construimos estimadores para los parámetros desconocidos de la población
* Posibles maneras de usar estadísticos muestrales para obtener información sobre un parámetro poblacional
	* Estimación: aproximar el verdadero valor
		* Estimación puntual
		* Estimación por intervalo de confianza
	* Aceptar o rechazar que el parámetro tenga cierto valor o se encuentre dentro de cierto rango de valores
		* Contraste de hipótesis
## Definición de un estimador
* Un estimador estadístico es una caraterística de la muestra tal que su valor es el que asignará al parámetro desconcido $\theta$ de la población
* **Objetivo de un estimador**: aproximar o estimar el verdadero valor del parámetro poblacional desconocido, y el valor obtenido en este proceso se llama estimación
* **Parámetro** $\theta$: el valor desconocido de la distribución de la población
* **Estimador** $\theta$: un estadístivo con su distribución de probabilidad correspondiente, que será usado para estimar el verdadero valor del parametro $\theta$
* **Estimación** $\theta$: el valor obtenido para el estadístico $\hat{\theta}$ basado en una muestra concreta $X_0=\{x_{i0}\}$ }
## Tipos de estimación
* Estimación puntual
	* Encontrar el "mejor" estadístico $\hat{\theta}$ tal que una muestra concreto $X_0=\{x_{io}\}$ determine una estimación $\hat{\theta}_0$ para el parámetro $\theta$
* Estimación por intervalo de confianza: consiste en encontrar dos estadísticos $T_1$ y $T_2$ que determinan un intervalo para el parámetro$\theta$ con un cierto grado de confianza, es decir:
	* $\theta \in [T_{1_0},T_{2_0}]$ para una muestra concreta $X_0=\{x_{i_0}\}$ con cierto nivel de confianza
## Valores esperados y varianzas
* Sean dos variables aleatorias $\xi_1$ y $\xi_2$, y $a, b \in\mathbb{R}$
* El valor esperado es un operador lineal:
	* $E[a\xi_1\pm b\xi_2] = aE(\xi_1)\pm bC(\xi_2)$ 
 * La varianza no es lineal, se comporta de forma cuadrática
	 * $V[a\xi_1 \pm b\xi_2] = a^2V(\xi_1)+b^2V(\xi_e)\pm2abCOV(\xi_1, \xi_2)$
  * Solo cuando las variables son linealmente independientes
	 * $V[a\xi_1 \pm b\xi_2] = a^2V(\xi_1)+b^2V(\xi_e)$
## Sesgo de un estimador
* El sesgo $b(\hat{\theta})$ del estimador $\hat{\theta}$ es la diferencia entre el valor esperado del estimador $\hat{\theta}$ y el verdadero valor del parámetro $\theta$:
	* $b(\hat{\theta})=E(\hat{\theta})-\theta$
	 * Un estimador sesgado $[b(\hat{\theta} \neq 0)]$ es decir $E(\hat{\theta}) \neq \theta]$ es un estimador cuyo valor esperado es igual al parámetro poblacional que se está estimando
	 * Un estimador insesgado $[b(\hat{\theta})=0]$, es decir: $E(\hat{\theta}) = \theta]$ es un estimador cuyo valor esperado es igual al parámetro poblacional que se está estimando
![[Pasted image 20231101171225.png]]
$\hat{\theta}_1$ es un estimador insesgado.$\hat{\theta}_2$  es un estimador sesgado
* Un estimador insesgado no dará necesariamente una estimación correcta, pero de "media" si lo hará.
* Un estimador sesgado no dará necesariamente una estimación incorrecta, pero de "media" si lo hará.

* Un estimador sesgado puede tener sesgo positivo o negativo
	* Sesgo positivo: $b(\hat{\theta}) = E(\hat{\theta})>\hat{\theta}$, es decir, $E(\theta)>\theta$
	* Sesgo negativo: $b(\hat{\theta}) = E(\hat{\theta})<\hat{\theta}$, es decir, $E(\theta)<\theta$

## Varianza de un estimador
* La varianza de un estimador es también importante
* $V(\hat{\theta})=E[\hat{\theta} - E(\hat{\theta})]^2$
* Puesto que contribue a la propabilidad de que el estimador de $\theta$ dé una buena estimación
## Error Cuadrático medio de un estimador
* Herramienta usada para cuantificarpor completo la calidad de un estimador
* Mide el valor esperado o media de los errores al cuadraro, es decir:
	* La distancia al cuadrado entre el posible valor del estimador $\hat{\theta}$ y el valor desconocido del parámetro $\theta$.
* $ECM(\hat{\theta})=E[\hat{\theta}-\theta]^2$
* Se puede demostrar que
	* $ECM(\hat{\theta})=E[\hat{\theta}-\theta]^2 =V(\hat{\theta}+[b(\hat{\theta})]^2$)
 * Los mejores estimadores tienen:
	 * Varianza pequeña en su distribución de probabilidad
	 * Sesgo pequeño
* Al comparar dos estimadores $\hat{\theta}_1$ del parámetro $hat{\theta}$, se dice que $\hat{\theta}_1$ es más eficiente que $\hat{\theta}_2$ si:
	* $ECM(\hat{\theta})_1\le ECM(\hat{\theta}_2)$  para todos lo valores de $\theta$
	* $ECM(\hat{\theta})_1\le ECM(\hat{\theta}_2)$ para por lo menos algún valor de $\theta$ 

## Consistencia de un estimador
* Depende de las propiedades asintóticas del sesgo y de la varianza del estimador, es decir su comportamiento en el límite para muestras grandes
* Un estimador del parámetro $\theta$ se llama asintóticamente insesgado si el sesgo tiende a 0 cuando el tamaño $n$ de la muestra tiende a infinito,es decir
	* $b(\hat{\theta}) \xrightarrow[n->\infty]{} 0 \xLeftrightarrow {} E(\hat{\theta} \xrightarrow[n->\infty]{} \theta$
	* $\lim\limits_{n->\infty}b(\hat{\theta}) \xrightarrow[n->\infty]{} 0 \xLeftrightarrow {} \lim\limits_{n->\infty}E(\hat{\theta} \xrightarrow[n->\infty]{} \theta$

## Estimador consistente
* Un estimador se llama consistente si la secuencia $\{\hat{\theta}_n\}_{n\in\mathbb{N}}$ converge es probabilidadal valor verdadero del parámetro $\theta$,  es decir si:
	* $p\lim\limits_{n->\infty}\hat{\theta}_n =\theta$ o $\{\hat{\theta}_n\}_{n\in\mathbb{N}}\xrightarrow{P}\theta$
 * Por definiciṕon de convergencia en probabilidad, equivale a:
	 * $\lim\limits_{n->\infty}P(|\hat{\theta}_2 - \theta| \geq \varepsilon)$, $\forall\varepsilon>0$
* Condición suficiente:
	* asistóticamente insesgado: $\lim\limits_{n->\infty}E(\hat{\theta})=\theta$
	* asintóticamente varianza nula$\lim\limits_{n->\infty}V(\hat{\theta})=\theta$
 * Notese:
	* Un estimador insesgado satisfacede forma automática la condición1:
		 * $E(\hat{\theta})=0 \implies \lim\limits_{n->\infty}E(\hat{\theta})=0$
	* Pero no la 2 

## Estimación por máxima verosimilitud (MV)
* Un método de estimación de parámetros basado en la función de verosimilitud L que consiste en buscar el valor de parámetrosquemaximiza la verosimilitudde obetenerla muestra observada
* La idea básica es que cierto valor del parámetro desconocido es más verosímil que otro valor, cuando el primer valor da lugar a una mayor probabilidad de obtener la muestra observada que el segundo
* Para introducir la función versosimilitud, primero volvemos al concepto de función de distribución conjunta.
## Función de distribución conjunta de la muestra
* Se obtiene una m.a.s. de tamaño $n$ formada por un conjunto de $n$ variables aleatorias independientes e idénticas distribuidad (IID).
* Puesto que sonindependientes, la función de probabilidad conjunta es el producto de las funciones de probabilidad individuales
* La función de distribución conjunta de la muestra $X=(x_1,..., x_n)$ si $x_i \sim f(x_i; \theta)$ es:
	* $f(X; \theta)=f(x_1,...; x_n; \theta)=\prod\limits_{i=1}^{n}f(x_i; \theta)$
	* Donde $\theta$ indica que cada $f$ depende del valor concreto de algún parámetro de la población 
## Función de verosimilitud
* La función de verosimilitud, en el contexto de la estadística y la inferencia estadística, es una medida que s**e utiliza para evaluar la concordancia entre los datos observados y un modelo estadístico particular**. En otras palabras, la función de verosimilitud cuantifica cuán "verosímiles" son los datos bajo ciertas suposiciones acerca de la distribución de probabilidad subyacente.
* $L(\theta|X)=\prod\limits_{i=1}^{n}f(x_i; \theta)$  donde $X\{x_1,x_2, ..., x_n\}=\{x_i\}$ es la muestra y se supone los elementos $x_i$ de la muestra independiente (m.a.s)
* La función de distribución de la muestra $f(X; \theta)$ y la función de verosimilitud $L(\theta| X)$ tienen la misma expresión formal. Sin embargo, su interpretación es precisamente opuesta
	* $f(X;\theta)$ requiere valores concretos para los parámetros $\theta$ de la distribución y permite calcular la probabilidad de obtener una muestra con valores $X=(x_1, ..., x_n)$
	* $L(\theta | X)$ coge la muestra concreta obtenida con valores $X=(x_1,..., x_n)$ como entrada para calcular la plausibilidad o verosimilitud de que el parámetro poblacional $\theta$ tenga cierto valor
* Casos importante:
	* Población Bernoulli
		* Para una sola muestra $(x_i=\text{0 o 1})$ tenemos:
			* $f(x_i; \pi)=\pi^{x_i}(1-\pi)^{1-x_1}$
			* La función de verosimilitud es:
				* $L(\pi|X)=\pi^{\sum{x_i}}(1-\pi)^{n-\sum{x_i}}$
	* Población Binomial
	* Población Poisson
	* Población uniforme
	* Población Normal

## Estimación por máxima verosimilitud
* Sea una población distribuida bajo una variable aleatoría$\theta$ con función de masa o densidad $f(x;\theta)$ y de la que se optiene una muestra concreta $X=(x_1, ..., x_n)$ de tamaño $n$
* La función de verosimilitud es:
	* $L(\theta| X)=\prod\limits_{i=1}^{n}f(x_1;\theta)$
 * $\theta=M$ será el valor más verosimil del parámetro desconocido $\theta$ si $\max\limits_{\theta}L(\theta| X)=L(M| X)$
 * En general escribiremos el resultado como $\hat{\theta}_M$
 * En la mayoría de locs casos,es computacionalmente más fácil trabajar con el logaritmo neperiano de la función de verosimilitud o $\text{función de log-verosimilitud l}$:
	 * $l(\theta | X)=\ln L(\theta | X)$
	  * Puesto que convierte productos de funciones de distribución en sumas de funciones,que son mucho más fáciles de derivar
* Resumen del procedimiento:
	1. Escribimos la función de verosimilitud L
	2. Obtenemos la función de log-verosimilitud $l=\log{L}$
	3. Derivamos la función de log-verisimilitud con respecto al parámetro $\theta$ deseado $\frac{dl}{d\theta}=0$
	4. Buscamos el/los cero(s) de esta primera derivada $\frac{dl}{d\theta}=0$
	5. Calculamos la segunda derivada $\frac{d^2l}{d\theta^2}$ y comprobamos si es negativa la solución del paso previo
	6. Si se cumple la condición anterior, hemos encontrado $\hat{\theta}_{MV}$

##  Propiedades de los estimadores MV
 * Bajo ciertas propiedades de regularidad, se puede demostrar que un estimador de MV:
		 * Existe y es único
		 * Es siemprepor lo menos asintóticamente insesgaddo
		 * Es siempre consistente
	* Sin embargo,computacionalemnte puede ser más dificil encontrar el estimador de MV, muchas vecese es imposible hacerlode forma numérica y se hace de forma numéricacon un algoritmo iterativo
## Método de los momentos
*  La idea básica es usar los momentos muestrales $a_r$ como estimadores para los momentos poblacionales desconodidos $\alpha_r$ orden por orden en $r$:
	* $\hat{\alpha}_r = a_r$
* Mientras que no es tán potente como el método MV, el MM en general es mucho más facil y meintras el número de parámetros a estimar sea bajo,en general puede ser cálculado de forma analítica
* El MM muchas veces da lugar a estimadores sesgados, sin embargo:
	* Se pueden demostrar que los estimadores MM son siempre consistentes
	* El MM es importante debido a su simplicidad
* El resultado obtenido puede servir como primera estimación que luego se mejora a través de algún procedimiento numérico de MV
* Ver tema 0: los momentos poblacionales son $\alpha_r=E[\xi^r]$  y de forma análoga,para una muestra de tamaño $n$, los momentos muestralres:
	* $\alpha_r=\frac{1}{n}\sum\limits_{i=1}^{n}x_i^r$
	* La MM consite en definir los siguientes estimadores por orden en r:
			* $\hat{\alpha}_1=a_1$, $\hat{\alpha}_2=a_2$,... 


## Propiedades de los logaritmos
* $\ln(a\cdot b)=\ln a+\ln b$:
* $\ln(a^b)=b\ln a$
* $ln(e^a)=a$
* $ln(e^a)=a$
* $\frac{d}{dx}\ln x=\frac{1}{x}$
* Regla de la cadena: $\frac{d}{dx}ln (x)= \frac{1}{f(x)}\cdot f'(x)$
