## Notación estadística
* En inferencia estadísitca es esencial distinguir entre descriptores de población y muestra
	* Población: letras griegas
	* Muestra: letras latinas
 
Cantidad | Población | Muestra
-- | -- | --
Media o Valor esperado | $\mu$ | $\overline{x}$
Varianza | $\sigma$ | $\sigma²$
Desviación típica | $\sigma$ | $s$ 
Convarianza | $\sigma_{xy}$ | $s_{xy}$ 
Proporción | $\pi$ | $p$

 Variable aleatoria: $\xi$, si hay más de una $\xi_1, \xi_2$ o $\xi, \eta$
 Muestras: $X, Y$
 Valores concretos: $x_i, y_i$,
## Distribuciones univariantes
* Para especificar una variable aleatoria necesitamos:
	* El conjunto $\Omega$ de posibles valores $x$ que la variable aleatoria puede tomar, pudiendo ser un conjunto discreto o continuo, y se corresponde a la realización de determinados sucesos
		* $\Omega=\{x_1\}, (i=1,2, ...)$
	* La forma de la distribución y la asignación de las probabilidades a dichos valores a través de una **función de probabilidad** que tambien recibe el nombre de:
		* **Función de masa** o cuantía en caso de ser discreta
			* $f(x_i)=P[\xi x_1]=p_i$  donde $\sum{p_1}=1$
		* **Función de densidad** en caso de ser continua
			* $F(x)=P[\xi \leq x] = \sum_{x_i \leq x}{P[\xi=x_1]}$
* Además, se pueden calcular otras caracterśiticas:
	* Media o valor esperado:
		* $E[\xi] =  \sum_{}i{x_ip_i} = \mu$
		* Para $n$ sucesos equiprobables: $E[\xi]=\frac{1}{n}\sum{x_i}$
	* Varianza: $V[\xi]=\sum_{i}{(x_i-\mu)^2p_1}=\sum_{i}{x^2_ip_i-\mu^2}=\sigma^2$
		* Para $n$ sucesos equiprobables:
			$V[\xi]=\frac{1}{n}\sum{(x_i-\mu)^2}= \frac{1}{n}\sum{x^2_i\mu^2}$
## Desviación típica
* $\sigma = +\sqrt{\sigma^2}$
* La desviación típica o desviación estándar es la raíz cuadrara positiva de la varianza
* La DT es una medida de dispersión(distancia media a la media)

## Distribución de Bernoulli o binomial $B(1, \pi)$
* Experimento único con dos posibles resultados (si/no) donde $P(sí) = \pi, P(no)=1-\pi$
* Ejemplos: lanzamiento de moneda(cara/cruz), aprobar un examen(si, no)
* Conjunto de posibles valores: $\Omega = \{0,1\}$
* Función de masa de probabilidad:
	* $P[\xi=1] = \pi$
	* $P[\xi =0] = 1-\pi$
	 * O de forma resumida: $f(k)=P(\xi=k)=\pi^k\cdot(1-\pi)^{1-k}$
*  Media o valor esperado: $E[\xi] = 0\cdot(1-\pi)+1\cdot\pi=\pi$
* Varianza: $V[\xi]=(O^2\cdot(1-\pi)+1^2\cdot\pi)-\pi^2=\pi-\pi^2 = \pi\cdot(1-\pi)$
## Distribución binomial $B(n,\pi)$
* $n$ experimentos Bernoulli independientes
* Ejemplo: numero de caras en $n$  lanzamientos de moneda
* $P(k) = P(\text{k veces "si" de un total de n intentos})$
* Binomial $B(n, \pi)$
* $\xi=\sum_{i=1}^{n}{\xi_i}$ donde $\xi_i \sim B(1, \pi)$ e independientes
* Conjunto de posibles valores $\Omega=\{0, 1, 2, ..., n-1, n\}$ 
*  Función de masa de probabilidad 
	* $f(k)=P[\xi=k] = {n \choose k}\cdot \pi^k \cdot (1-\pi)^{n-k}$, $(k=0, ..., n)$
* Media o valor esperado
	* $E[\xi]=E[\sum_{i=1}^{n}{\xi_1}]=\sum_{i=1}^{n}{E[\xi_i]}=\sum_{i=1}^{n}{\pi}=n\pi$
*  Varianza: al ser las variables $\xi_i$ independientes
	* $V[\xi]=V[\sum_{i=1}^n\xi_i]= \sum_{i=1}^{n}V[\xi_i]=\sum_{i=1}^{n}{\pi(1-\pi)}= n\pi(1-\pi)$
## Distribución de Poisson
* $\lambda =$ frecuencia de ocurrencia media
* $P(k)=P(\text{k sucesos durante un determinado intervalo de tiempo/espacio/...}$
* Ejemplo: Si el número medio de coches que pasan por una intersección es de 10/minuto, ¿cuál es la probabilidad que en los próximos dos minutos pasarán exactamente 18 coches?
* Conjunto de posibles valores: $\Omega=\{1, 2, 3, ... \infty\}$ 
* Función de masa de probabilidad:
	* $f(k)=P[\xi = k]=\frac{e^{-\lambda}\cdot\lambda^{k}}{k!}$, $(k=0, 1, ..., \infty)$
 * Media o valor esperado: $E[\xi]= \lambda$ 
 * Varianza: $V[\xi]=\lambda$
 

## Distribuciones continuas
* Caraterísitcas generales
	* Conjunto de posibles valores: $x \in I \subset \mathbb{R}$  
	* Funció de densidad de propabilidad 
		* $f(x): P[a \leq \xi \leq b] = \int_a^bf(x)dx$ con $\int_{-\infty}^{+\infty}f(x)dx=1$
	* Función de distribución acumulada: 
		* $F(x)=P[\xi\leq x]=\int_{-\infty}^xf(x)dx$
	  * Media o valor esperado: 
		  * $E[\xi]=\int_{-\infty}^{+\infty}x\cdot f(x)dx = \mu$
	* Varianza:
		* $V[\xi]=\int_{-\infty}^{+\infty}{(x-\mu)^2\cdot f(x)dx}=\int_{-\infty}^{+\infty}{x^2\cdot f(x)dx-\mu^2}=\sigma^2$


## Distribucion uniforme
* Función de densidad continua en el intervalo  $[a,b]$
* Distribución uniforme $\xi\sim U(a, b)$
* Conjunto de posibels valores: $\Omega = [a, b] \subset \mathbb{R}$
* Función de densidad de probabilidad
	*$f(x) = \begin{cases}\frac{1}{b-a} & \quad x \in [a, b], \\0 & \quad x \notin [a, b]\end{cases}$
 * Media o valor esperado: $E[\xi]=\int_a^bx\frac{1}{b-a}dx=\frac{a+b}{2}$
## Distribución normal
* Distribución normal $\xi \sim N(\mu, \sigma)$ con $\mu \in \mathbb{R}, \sigma > 0$
* Conjuntos de posibles valores
	* En teoria: $\Omega = \mathbb{B}$
	* En la práctica: 99% de todos los valores $\in [\mu-3\sigma, \mu+3\sigma]$
 * Función de densidad de probabilidad
	  * $f(x)=\frac{1}{\sigma \sqrt{2\pi}=\sigma}$
* Media o valor esperado $E[\xi]=\mu$
* Varianza: $V[\xi]=\sigma^2$

## Distribuciones bidimensionales conjuntas
* Para estudiar el comportamiento conjunto de dos fenómenos aleatorios, cada uno representado por una variable aleatoria, se puede describir mediante una variable aleatorio bidimensional $\xi_1, \xi_2$ cuyos valores vendrán representados por pares cartesianos $(x,y)$.
* Al conjunto de estos pares de posibles valores,  junto con sus respectivas    
* Las distribuciones bidimensionales pueden ser cualquier combinación de continua y discreta
* Conjunto de posibles valore: $\{x_i, y_j\}$
* Función de masa de probabilidad conjunta
	* $f(x_i, y_j)=P[\xi_1 = x_i; x_2 = y_j] = p_{ij}$ donde $p_{ij} \geq 0$ y $\sum_{x_i\leq x} \sum_{x_j\leq y}p_{ij} = 1$
* Función de distribución acumulada conjunta:
	* $f(x, y)=P(\xi_q \leq x; \xi_2 \le y) = \sum_{x_i\leq x} \sum_{x_j\leq y}p_{ij}$ 
## Distribución condicionada
* Distribución unidimensional que surge cuando se estudia la distribución de una de las variables sujeta a la restricción que la otra variable tome un valor predeterminado
* La distribución condicionada para $\xi_2$ si $\xi_1$ tome el valor $x_i$ se  escribe:
	* $\xi_2 | \xi_1 = x_1$
* Se puede definir una distribución condicionada $\xi_2 | \xi_1 = x_1$ para cada valor posible $x_i$ de la variable aleatoria $\xi_1$.
## Variables independientes
* Dos variables aleatoria $\xi_1$ y $\xi_2$ se llaman estocásticamente independientes cuando la distribución de una variable no se ve afectada por el valor concreto que toma la otra variable
* Condición necesaria para la independencia de una variable es:
	* $f(x, y)=f_1(x)\cdot f_2(y)$
* Para dos variables independientes se cumple:
	* $Cov(\xi_1, \xi_2) = 0$

## Momentos
* Parámetros estadístivos que describen una distribución
* Los momentos se obtiene como valores esperados elevados a alguna potencia $r$:
	* $\alpha _r = E(\xi²)$
	* $\mu_r = E[(\xi-\mu)^r]$
 * Los dos momentos más importantes son el propio valor esperado y la varianza
	 * Valor esperado:
		 * $E[a\xi_1 \pm b\xi_2] = aE(\xi_1) \pm bE(\xi_2)$
	* Varianza
		* La varianza no es lineal, se comporta de forma cuadrática
		* $V[a\xi_1 \pm b\xi_2]= a^2V(\xi_1) + b^2V(\xi_2) \pm 2abCOV(\xi_1; \xi_2)$
	* Momentos respecto al origen
		* Definición general: $\alpha_r = E(\xi^r)$
		* El momento de orden 1 respecto al origen  es la media
		* De manera análoga, para distribuciones conjuntas bidimensionales, se puede definir el momento de orden(1, 1) respecto al origen $\alpha _{11} = E(\xi_1 \cdot \xi_2)$
	* Momentos respecto a la media 
		* $\mu_r = E[(\xi-\mu)^r]$
		* El momento dentral de orden 1 es igual a 0
			* $\mu_1 = E[(\xi - \mu)] = E(\xi)-E[\mu] = \mu -\mu = 0$
		* El momento central de orden 2 es la varianza
			* $\mu_2 = E[(\xi - \mu)^2] = V[\xi]$
		* Para distribuciones conjuntas bidimensionales, se puede definir el momento central de orden (1, 1)
			* $\mu_{11}=E[(\xi-\mu_x)(\xi_2-\mu_y)]=Cov(\xi_1, \xi_2)=\sigma_{xy}$
   
## Convarianza
* $Cov(\xi_1, xi_2) = \sigma_{xy}=E[(\xi-\mu_x)(\xi_2-\mu_y)]$	  
* Si:
	* $Cov(\xi_1; \xi_2) > 0$, entonces la relación entre las variables es positiva
	* $Cov(\xi_1; \xi_2) < 0$, enconces la relación entre las variables es negativa
	* $Cov(\xi_1; \xi_2)=0$, el grado lineal de relación en nulo
* El grado de confianza se mide a través del coeficiente de correlación

## Coeficiente de correlación lineal
* $\rho = \frac{\mu_{11}}{\sqrt{\mu_{2x}\cdot  \mu_{2y}}}=\frac{COV(\xi_1;\xi_2)}{\sqrt{V(\xi_1)\cdot (\xi_2)}}= \frac{\sigma_{xy}}{\sigma_x\cdot\sigma_y}$
* $\rho$ mide el grado de dependencia lineal entre las variabesl
* $-1\leq \rho \leq 1$
* Cuanto más cerca este de 0, menos será el grado de relación lineal
* $\rho$ siempre tiene el mismo signo que la convarianza

## Distribuciones multidimensionales conjuntas
* Cuando estudiamos el comportamiento conjunto de $n$ fenómenos aleatorios, cada uno su variable aleatoría $\xi_i$ correspondiente, podemos definir una distribución de propabilidad conjunta multivariante o multidimensional
* El procedimiento formal asó como las definiciones son ampliaciones directas del caso bidimensional ($n=2$)
* Notar que
	* La media $E[\xi_i] = \mu_i$ se puede definir para cada variable por separadp
	* La varianza $V[\xi_i]=\sigma²_i$ se puede definir para cada variable por separado
	 * Cada par de variables $(\xi_i, \xi_j)$ tiene su propia covarianza $COV(\xi_i, \xi_j)=\sigma_{ij}$
  * Propiedades de medias, varianzas y covarianzas
	  * La media es un operador lineal
		  * $E[\xi_1+...+\xi_i+...+\xi_n] = E(\xi_1)+...+E(\xi_i)+...+E(\xi_n)$
	  * La varianza se comporta de forma cuadrática
		  * $C[\sum_{i=1}{n}\xi_i =\sum_{i=1}{n}V(\xi_i) + s\sum_{i<j}COV(\xi_i;\xi_j)$
## Independencia de variables multidimensionales
* Existen $n$ variables independientes entre sí
* La función de distribución conjunta es simplemente el producto de las funciones marginales
	* $f(x_1,...,x_i,...,x_n)=f(x_1)\cdot ... \dot(f(x_i) \cdot ... \cdot f(x_n))$
 * Cuando las $n$ variables son independientes entre sí, todas las covarianzas son nulas y por lo tanto
	* $V[\xi_1,...,\xi_i,...,\xi_n]=V(\xi_1)\cdot ... \dot V(\xi_i) \cdot ... \cdot V(\xi_n)$

## Resumen recordatorio
* Variable aleatoria $\xi$ (or $X$): discreta/continua
	* Discreta: posibles valores $\{x_i\}$ con probabilidad $p_i=(\xi = x_i) \equiv f(x_i)$, la función de **masa** de propabilidad
	* Continua: función de **densidad** de probabilidad $f(x) : P(a \leq \xi \le b) = \int_a^b f(x)dx$
 
| **Discreta** | Notación | General | Sucesos equiprobables |
|-|-|-|-|
| Media | $\mu=E[\xi]$ | $\sum x_ip_i$ | $\frac{1}{n}\sum x_i$ |
| Varianza | $\sigma^2 = Var[\xi ]=V[\xi]$ | $\sum(x_i-\mu)^2p_i = \sum x^2_ip_i - \mu^2$ | $\frac{1}{n}\sum(x_i-\mu)^2 = \frac{1}{n}\sum x^2_i-\mu^2$|
| **Continua** |
| Media | $\mu = E[\xi]$& | $\int xf(x)dx$ |
| Varianza | $\sigma^2 = Var[\xi] = V[\xi]$ | $\int (x - \mu)^2 f(x) dx = \int x^2 f(x) dx - \mu^2$ |

* Función de distribución acumulada: $F(x)=P(\xi \leq x)$
	* Discreta: $F(x)=\sum P(x_i)$
	* Continua: $F(x) = \int _{-\infty}^x f(x)dx$ 
 * Distribuciones importantes
	 * Distribución de Bernoulli o Binomial $B(1, \pi)$
		 * $E[\xi]=\pi$ , $V[\xi]=\pi(1-\pi)$
	* Distribución binomail $B(n, \pi)$
		* $E[\xi]=n\pi$, $V[\xi]=n\pi(1-\pi)$
	* Distribución de Poisson $P(\lambda)$ 
		* $E[\xi]=\lambda$, $V[\xi]=\lambda$
* Distribución normal $N(\mu, \sigma)$
	* $E[\xi]=\mu$, $V[\xi]=\sigma^2$
* Momentos: definición general
	* $\alpha_r=E(\xi^r)$ y $\mu_r = E[(\xi -\mu)^2]$
* Momentos más importante
	* $x_1=E(\xi)$
	* $\mu_2 = E[(\xi-\mu)^2]=V[\xi]$ (varianza)
	* $u_{11} = E[(\xi-\mu_x)(\xi_2-\mu_y)]=Cov(\xi_1, \xi_2)$ (convarianza)
* Propiedades de $E[\xi]$ y $V[X]$
	* $E[a\xi_1 \pm b\xi_2]= aE(\xi_1)\pm bE(\xi_2)$
	* $V[a\xi_1 \pm b\xi_2]= a^2V(\xi_1)+ b^2V(\xi_2) \pm 2abCOV(\xi_1; \xi_2)$
* Propiedades de variables aleatorias
	* $\xi_1, \xi_2$ independientes -> $Cov(\xi_1, \xi_2)=0$
	* $E_1$ independiente (i=1, ..., n) 
		-> $V(\sum\xi_i)=\sum V(\xi_i)$
		-> $f(x_1, ..., x_1, ..., x_n) = f(x_1) \cdot ...\cdot f(x_1) \cdot ... \cdot f(x_n)$
  
 