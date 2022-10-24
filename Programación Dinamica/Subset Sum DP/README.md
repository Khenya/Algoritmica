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
   
   ![alt text](https://algocoding.files.wordpress.com/2015/05/subset_sum_11.png)

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
* [video 1](https://youtu.be/L1ZC9MI5yhY)
* [video 2](https://youtu.be/Pa4YwO8B8-w)
* [Tutorial 1](https://towardsdatascience.com/how-to-find-all-solutions-to-the-subset-sum-problem-597f77677e45)
* [Dígito DP | Introducción - Acervo Lima](https://es.acervolima.com/digito-dp-introduccion/)
</div>
