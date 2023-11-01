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