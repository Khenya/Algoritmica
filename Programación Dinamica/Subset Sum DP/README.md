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
   
   Para lograr hacer la tabl 

</ol>
  
### Ventajas
Algunas de sus ventajas son:

1) Complejidad algoritmica. Al eliminar todas las ramas que no cumplan los reqisitos la complejidad lineal no supera $O(2^{n})$. 
2) La mayor ventaja es que nos da todo el árbol de soluciones.


### Aplicaciones
Algunas de las aplicaciones del digit DP son:

* Pruebas matemáticas.
* Contar la cantidad de números que sean divisibles entre n.
* Se utiliza en el banco.

### Bibibliografia
* [video 1](https://youtu.be/s6FhG--P7z0)
* [video 2](https://youtu.be/kyLxTdsT8ws)
* [video 3](https://youtu.be/dJmyfFC3-3A)
* [Tutorial 1](https://towardsdatascience.com/how-to-find-all-solutions-to-the-subset-sum-problem-597f77677e45)
* [Programación, algoritmos y estructuras de datos| Introducción - Acervo Lima](https://algocoding.wordpress.com/2015/05/01/subset-sum-and-dynamic-programming/)
</div>
