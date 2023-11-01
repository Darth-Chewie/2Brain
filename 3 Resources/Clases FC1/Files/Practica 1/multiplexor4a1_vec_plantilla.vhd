-------------------------------------------
-- definici贸n de componentes para el multiplexor4a1
-------------------------------------------
--puerta l贸gica or de cuatro entradas
ENTITY or4 IS
  PORT(i1, i2,i3,i4 : IN bit; o : OUT bit);
END or4;

ARCHITECTURE comportamiento OF or4 IS
BEGIN
  o <= i1 OR i2 OR i3 OR i4;
END comportamiento;

--puerta l贸gica and de cuatro entradas
ENTITY and4 IS
  PORT(i1, i2,i3,i4 : IN bit; o : OUT bit);
END and4;

ARCHITECTURE comportamiento OF and4 IS
BEGIN
   o <= i1 and i2 and i3 and i4;
END comportamiento;

--puerta l贸gica inv de dos entradas
ENTITY inv IS
  PORT(i1 : IN bit; o : OUT bit);
END inv;

ARCHITECTURE comportamiento OF inv IS
BEGIN
  o <= not i1;
END comportamiento;

------------------------------------
--multiplexor de 4 a 1
------------------------------------

ENTITY multiplexor4a1 IS
PORT(	X0, X1,X2, X3: 	IN bit;	 -- entradas de datos
S1,S0 : 		IN bit; 	-- entradas de control
E:		IN bit;	--entrada de capacitaci贸n
Z : 		OUT bit);-- salida
END multiplexor4a1;

ARCHITECTURE puertas OF multiplexor4a1 IS
--declaraci贸n de componentes
  COMPONENT or4 
    	PORT(i1, i2,i3,i4 : IN bit; o : OUT bit);
  END COMPONENT;

  COMPONENT and4
    	PORT(i1, i2, i3,i4 : IN bit; o : OUT bit);
  END COMPONENT;

  COMPONENT inv
   	 PORT(i1 : IN bit; o : OUT bit);
  END COMPONENT;
  
  --declaraci贸n de se帽ales internas
  SIGNAL ia1,ia2,ao1,ao2,ao3,ao4: bit;
--empieza el cuerpo de la arquitectura  
BEGIN
  i_inv_1 : inv  PORT MAP(s1, ia1);
  i_inv_2 : inv  PORT MAP(s0, ia2);

  i_and_1 : and4  PORT MAP(ia1,ia2,x0,e,ao1);
  i_and_2 : and4  PORT MAP(ia1,s0, x1,e,ao2);
  i_and_3 : and4  PORT MAP(s1,ia2,x2,e,ao3);
  i_and_4 : and4  PORT MAP(s1,s0,x3,e,ao4);

  i_or_1  : or4   PORT MAP(ao1,ao2,ao3,ao4,z);

END puertas;

----------------------------------------------
-- multiplexor vectorial
----------------------------------------------


ENTITY multiplexor4a1_vec IS
PORT(	x3,y3,x2,y2,x1,y1,x0,y0: 	IN bit;	 -- entradas de datos
	S1,S0 : 			IN bit; 	-- entradas de control
	e:			IN bit;	--entrada de capacitaci髇
	z1,z0 : 		OUT bit);-- salida
END multiplexor4a1_vec;

ARCHITECTURE puertas OF multiplexor4a1_vec IS
--declaracion de componentes
 COMPONENT multiplexor4a1
	PORT(x0, x1, x2, x3: 	IN bit;
	     s1, s0:		IN bit;
	     e:		        IN bit;
	     z:		        OUT bit);
END COMPONENT;

--declaraci髇,en su caso, de se馻les internas
--empieza el cuerpo de la arquitectura  
BEGIN
  -- instanciaci髇 y conexi髇 de componentes
i_m_1 : multiplexor4a1	PORT MAP(x0, x1, x2, x3, s1, s0, e, z1);
i_m_0 : multiplexor4a1	PORT MAP(y0, y1, y2, y3, s1, s0, e, z0);
	
END puertas;


