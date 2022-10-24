<div align="center">
  
  ## Rod Cutting
 
</div>

### Introducción

Rod Cutting es un algoritmo de corte de carretera o barra de corte encuentra el mejor valor. Parte de una longitud L y logra encontrar algo menor a L.

En este algoritmo depende bastante de su valor, se puede obtener una barra.

Es similar al problema de la mochila.


### Ejemplo

Debemos considerar las siguientes longitudes y valores de varilla:
Input:
length[] = $[1, 2, 3, 4, 5, 6, 7, 8]$
price[] = $[1, 5, 8, 9, 10, 17, 17, 20]$
Rod length: 4
Best: Cut the rod into two pieces of length 2 each to gain revenue of 5 + 5 = 10
Cut           Profit
4                9
1, 3            (1 + 8) = 9
2, 2            (5 + 5) = 10
3, 1            (8 + 1) = 9
1, 1, 2         (1 + 1 + 5) = 7
1, 2, 1         (1 + 5 + 1) = 7
2, 1, 1         (5 + 1 + 1) = 7
1, 1, 1, 1      (1 + 1 + 1 + 1) = 4


 ### Complejidad Algoritmica
 
Tiene una complejidad de: $O(n)=n^3$

### Bibliografia 

* [Problema de corte de varilla](https://www.techiedelight.com/es/rod-cutting/)

</div>
