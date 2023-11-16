## Distribución normal
* Se dice que una variable aleatoria $\xi$ sigue una distribución NORMAL de parámentro $\mu$ (media) y $\sigma$ (desviación típica o desviación estándar) si su función de densidad es:
	* Función de densidad de la distribución normal
		* $f(x)=\frac{1}{\sigma\sqrt{2\pi}} e^{\frac{(x-\mu)^2}{2\sigma^2}}$, $x\in \mathbb{R}, \sigma > 0$
	* Notación : $\xi \sim \mathcal{N}(\mu, \sigma)$
	* Los paŕametro que caracterizan una distribución normal son
		* $\mu$: la media o el valor esperado de la distribución (tendencia central)
		* $\sigma$: la desviación típica, que mide la dispersión con respecto a la media
	* Tipificación
		* Una varialble se puede tipificar o estandarizar para transformarla en una variable Normal estandar $Z \sim \mathcal{N}(0, 1)$ 
			* $Z = \frac{\xi-\mu}{\sigma} \sim \mathcal(0,1)$
			* Después de haber efectuado los cálculos, volvemos a la distribución normal a través del procedimiento inverso
				* $\xi = \mu + \sigma$
	* Operaciones con la distribución normal
		* $P(\xi \geq x)=1-P(\xi \leq x)$
		* $P(Z \geq x)=P(Z \leq -x)$
	* ![[Pasted image 20231115170720.png]]

## Distribución chi-cuadrado $X^2$
* Se dice que una variable aleatoria $\xi$ tiene una distribución chi-cuadrado con $v$ grados de libertad si es igual a una suma de $n$ variables independientes con distribución Normal $\mathcal{N}(0,1)$ elevadas al cuadrado
	* Valor esperado: $E[X^2_\nu]=V$
	* Varianza: $V(X^2_v)=2 \nu$
	* Propiedades
		* si $X^2_{v1}, ... , X^2_{vk}$ son variables aleatoria $X^2$ independientes, entonces
			* $\displaystyle \sum^k_{j=1}x^2_{\nu j}=x^2_n$ donde $N = \displaystyle \sum ^k_{j=1}\nu_j$
			* es decir, la suma de dos distribuciones $x^2$ también es una $x^2$ cuyos grados de libertad son la suma de los originales
	* Las tables $x^2$ suelen indicar el valor $x$ que deja cierta probabilidad $\alpha$ a la derecha de $x$
		* Para $\alpha$ y $\nu$ dadas, las tablas indican el valor $x$ tal que
				* $P(\mathcal{X}^2_\nu \geq x)= \alpha$
* ![[Pasted image 20231115170833.png]]


## Distribución $t$ de Student
* Se dice que una variable aleatoria $\xi$ sigue una distribución t de Student con $\nu$  grados de libertad si es igual al cociente de una distribución Normal Estándar entre la raíz cuadrada de una distribución $X^2$ dividida por sus grados de libertad
	* $t_\nu = \frac{\xi_0}{\sqrt{\frac{\displaystyle \sum ^\mu _ {i=1}\xi_i²}{\nu}}}$ donde $\xi_1 \sim \mathcal{N}(0, 1)$ independiente para $i=0, 1, ..., \nu$
	* Valor esperado: $E[t_\nu]=0, (\forall \nu \geq 2)$ 
	* Varianza: $V(t_\nu) = \frac{\nu}{\nu-2} , \nu \geq e$ 
	* Propiedades
		* La distribución es simétrica y centrada en 0
			* $P(t_nu \geq x) = P(t_nu \leq -x)$
		* La distribución obedece a la siguiente propiedad de convergencia
			* $t_{\nu} \xrightarrow[\nu \to \infty]{} \mathcal{N}(0, 1)$ 
	* Las tablas de $t$ studend suelen indicar el valor $x$ que deja cierta probabilidad $\alpha$ a la derecha de $x$
		* Pada $\alpha$ y $\nu$ dadas, las tablas indican el valor $x$ tal que 
		* $P(t_\nu \geq x) = \alpha$ 
	* ![[Pasted image 20231115172217.png]]


## Distribución F de Snecor
* Se dice que una variable aleatoria $\xi$ sigue una distribución F de Snecor con $\nu_1$ y $v_2$ grados de libertad si es igual al cocinte de dos distribuciones $X^2$ cada una divididad por sus grados de libertad correspondientes
	* $F_{\nu_1, \nu_2}=\frac{\frac{X^2_{\nu1}}{\nu_1}}{\frac{x^2_{\nu_2}}{\nu_{2}}}$ 
	*  Propiedad de simetria
		* $\frac{1}{F_{\nu_1, \nu_2}} = F_{\nu_2, \nu_1}$
	* Las tablas de la distribución F de Snedecor suelen indicar el valor $x$ que deja cierta probabilidad $\alpha$ a la derecha de $x$.
		* Notar que hojas separadas cubren valores diferentes de $\alpha$
		*  Es deir, que para $\alpha$ y $\nu_1$ y $\nu_2$ fijadas, las tablas indican el valor $x$ tal que:
		* $P(F_{\nu_1, \nu_2} \geq x) = \alpha$ 
	* ![[Pasted image 20231115173529.png]]