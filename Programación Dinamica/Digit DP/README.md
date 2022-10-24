
<div align="center">
  
  ## Dgit DP
    
</div>

### Introducción
 
 Digit DP es una técnica sencilla y útil para resolver distintos problemas de Programación Dinámica;
como indica su nombre “Digit DP” trabaja con dígitos.

Existen varios tipos de problemas que pueden ser resueltos implementando Digit DP,en especial aquellos que
piden contar el número de enteros "x" entre dos enteros, digamos que "a" y "b" de manera que
x satisfaga una propiedad específica que puede relacionarse con sus dígitos.

</ol>
  
### Ejemplo 
Deseamos sabre ¿Cuántos números $x$ hay en el rango de $a$ a $b$ , donde el dígito $d$ aparece exactamente $k$ veces en $x$? 

Lo primero que hay que hacer es el rango de 0 a $a$. Para luego eso restarlo al rango de 0 a $b$ y así conceguir el rango de $a$ a $b$.

Podemos iniciar diciendo que $a$ es cero. Entonces necesitamos encontrar los números totales que no sean mayores que b y que también satisfagan las condiciones dadas.

Debemos construior la secuencia de números. 
Consideremos el número como una secuencia de dígitos. Llamemos a la secuencia $sq$. Inicialmente $sq$ está vacío. Intentaremos agregar nuevos dígitos de izquierda a derecha para construir la secuencia. En cada llamada recursiva colocaremos un dígito en nuestra posición actual y llamaremos recursivamente para agregar un dígito en la siguiente posición. Pero, ¿podemos colocar cualquiera de los dígitos del 0 al 9 en nuestra posición actual? Por supuesto que no, porque debemos asegurarnos de que el número no sea mayor que $b$, a lo cual le podemos llamar tope.

Ingresar digitos. 
Digamos que durante la construcción de la secuencia, actualmente estamos en la posición $pos$. Ya hemos colocado algunos dígitos en la posición del 1 al $pos-1$. Así que ahora estamos tratando de colocar un dígito en la posición actual $pos$. Si supiéramos toda la secuencia que hemos construido hasta ahora hasta la posición $pos-1$, entonces podríamos averiguar fácilmente qué dígitos podemos colocar ahora.

Puede ver que, en la secuencia $sq$, el dígito más a la izquierda es en realidad el dígito más significativo. Y la importancia se reduce de izquierda a derecha. Entonces, si existe alguna posición $t$ (1 <=t <  pos) donde $sq[t]$ < $b[t]$ entonces podemos colocar cualquier dígito en nuestra posición actual. Porque la secuencia ya se ha vuelto más pequeña que b sin importar qué dígito coloquemos en las últimas posiciones. Tenga en cuenta que $b[t]$ significa el dígito en la posición $t$ en el número $b$.

Pero si no hubo $t$ que satisficiera esa condición, entonces en la posición pos , no podemos colocar ningún dígito mayor que $b[pos]$. Porque entonces el número será mayor que $b$.

Finalmente para hacer el rango de $a$ a $b$ debemos usar el enfoque anterior, podemos encontrar los números válidos totales en el rango de 0 a $b$, como fue mencionado anteriormente. Entonces así tendriamos ambos rangos y solo nos queda restarlos.

### Aplicaciones
Algunas de las aplicaciones del digit DP son:

* Pruebas matemáticas.
* Contar la cantidad de números que sean divisibles entre n.
* Se utiliza en el banco.
* [TAPAS](https://toph.co/p/lids)
* [Números mágicos](https://codeforces.com/contest/628/problem/D)
* [Números palindrómicos](https://vjudge.net/problem/LightOJ-1205)

### Bibibliografia
* [video 1](https://youtu.be/L1ZC9MI5yhY)
* [video 2](https://youtu.be/Pa4YwO8B8-w)
* [Tutorial 1](https://codeforces.com/blog/entry/53960)
* [Tutorial 2](https://codeforces.com/blog/entry/77096)
* [Dígito DP | Introducción - Acervo Lima](https://es.acervolima.com/digito-dp-introduccion/)
</div>
