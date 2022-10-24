<div align="center">
  
  ## Subset Sum DP
    
</div>

### Introducción
 
 Una solución de programación dinámica que funciona para números negativos, positivos y repetidos.
 
 El problema SUBSET-SUM implica determinar si un subconjunto de una lista de enteros puede sumar o no un valor objetivo. 

En general, determinar si incluso hay soluciones para SUBSET-SUM es NP-hard. Esto quiere decir que si hay números enteros en la numslista, existen $2^n — 1$  subconjuntos que deben verificarse (excluyendo el conjunto vacío). Es similar al problema de la mochila. 

Este algoritmo es Greedy Codicioso. Esto significa que:
* Siempre voy a pensar que soy experto.
* El array debe estar ordendo.
* Va ir sumando de mayor a menor.

### Ejemplos 
  Dado un array de números enteros:
  
   $$ [7,3,2,1,0,-2]$$ 
  
  queremos verificar si existe una combinación de números sumados que nos den exactamente $x$.
  
  
   Ddo la lista de numreos: 
   $$nums = [1, 2, 3, 4]$$
   Si el $target = 7$, hay dos subconjuntos que logran esta suma: {3, 4}y {1, 2, 4}. Si $target = 11$, no hay soluciones.
   
   Dado un array:
   $$nums = [0, 3, 1, 2, 4]$$

   Al ordenar el array tenemos:
   $$nums = [0, 1, 2, 3, 4]$$
   
   Queremos llegar a sumar el numero 6. Por ello $W=6$ y tenemos 7 columnas del 0 al 6. 
   
   En este ejmplo podemos visualisar la tabla. 
   
   El $0$ representa a falso o que no se puede surmar el número señalado de la fila de la izquierda, con todos los numreos en que poseemos en esa posición.  
   
   El $1$ respresenta a verdadero que se puede surmar el número exacto señalado de la fila de la izquierda, con todos los numreos en que poseemos en esa posición.  
 
   ![alt text](https://algocoding.files.wordpress.com/2015/05/subset_sum_11.png)
   
   Para lograr hacer esta tabla primero debemos ordenar el array y ponerlo en fila al lado izquierdo de la tabla y dependiendo al numreo que queremos llegar a sumar 
   debemos ir de 0 a x, en este caso es de 0 a 6.
   
   La fila del 0 siempre sera $1$ porque podemos generar un 0 con cualquier númreo.
   Lo que determina si podemos o no generar una suma que de exactamente 6, el la equina inferior derecha, porque al llegar ahi nosotros ya tratamos de sumar 6 con todos los números que poseiamos en el array. 
   
   En elte caso fue posible llegar a 6 con dos conjuntos diferentes $[0,1,2,3]$ y $[0,2,4]$. 

</ol>

### Ventajas 
* Tiene una comlplejidad algoritmica de O(nW). Lo cual es imopresionante porque es muy veloz. La complejidad varia dependiendo del problema ya que depende no solo (linealmente) del número de elementos en nums, sino también (linealmente) de los valores de $numsy target$, ya que el número de columnas en la tabla es la distancia entre $target$ y la suma de los enteros negativos en $nums$.


### Bibibliografia
* [video 1](https://youtu.be/s6FhG--P7z0)
* [video 2](https://youtu.be/kyLxTdsT8ws)
* [video 3](https://youtu.be/dJmyfFC3-3A)
* [Tutorial 1](https://towardsdatascience.com/how-to-find-all-solutions-to-the-subset-sum-problem-597f77677e45)
* [Programación, algoritmos y estructuras de datos| Introducción - Acervo Lima](https://algocoding.wordpress.com/2015/05/01/subset-sum-and-dynamic-programming/)
</div>
