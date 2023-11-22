* Implementar una red iterativa y una red en árbol para encontrar el mayor de una serie de números:
* Ambas redes deben poder generarse para cualquier cantidad (potencia de dos) de números mediante la sentencia ‘generate’
	* Ahí está la complicación de la práctica, generar un sistema autogenerativo
* Necestio un componente comparador con el siguiente diagrama:
* ![[diagrama comparador p3 toc.excalidraw]]
* El resto de la práctica radica somo como conextarlos para implementar un comparador de n entradas:
	* dos modos:
		* En serie
			* Implementación más facil
			* El retardo aumenta de manera proporcional al nº de entredas
		* En paralelo
			* Implementación más dificil
			* El retardo aumenta en $log(n)$, mucho más eficiente


![[esquema p3a.excalidraw]]

```
begin
    -- Primer comparador
    inst0: comparador_4bits port map(A => Entradas(4*N-1 downto 4*N-4), B => Entradas(4*N-5 downto 4*N-8), Mayor => intermediates(0));

    -- Comparadores intermedios
    gen: for i in 1 to N-2 generate
        inst: comparador_4bits port map(A => intermediates(i-1), B => Entradas(4*(i+1) downto 4*(i+1)+4, Mayor => intermediates(i));
    end generate gen;

    -- Último comparador
    final_inst: comparador_4bits port map(A => intermediates(N-2), B => Entradas(3 downto 0), Mayor => Mayor);

end Behavioral;
```