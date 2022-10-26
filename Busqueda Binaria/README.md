<div align="center">
  
  ## Busqueda Binaria
 
</div>

### Introducción

La búsqueda binaria es un algoritmo eficiente para encontrar un elemento en una lista ordenada de elementos. Funciona dividiendo repetidamente la parte de la lista que el elemento puede contener por la mitad, hasta que las ubicaciones posibles se reducen a una sola. 

La busqueda binaria tiene cuatro caracteristicas las cuales son:

* Objeto Ordenado. Debe tener un array ordenado.
* Debe tener un inicio y fin. Los cuales seran nuestros punteros, de los cuales sacaremos el $mid$. 
* Funcion. Lo más importante en el codigo del algoritmo es la funcion, con la cual podemos dar los valores de verdadero y falso.
* Asume que el antecedente o posterior tiene el mismo valor dado por la funcion.

La búsqueda binaria no tendría que examinar todo el areglo numerico, incluso en el peor de los casos.

### Ejemplos

Digamos que estoy pensando en un número entre uno y 100, justo como en el juego de adivinar. Si ya intentaste decir 25 y te dije que mi número es más grande, y ya intentaste decir 81 y te dije que mi número es más chico, entonces los números en el rango de 26 a 80 son los únicos intentos razonables. Aquí, la sección roja de la recta numérica contiene los intentos razonables, y la sección negra muestra los intentos que hemos descartado:
  
 ![alt text](https://cdn.kastatic.org/ka-perseus-images/91981c0666c061815dd0e9b473ad0570a1803a45.png)
 
 En cada turno, haces un intento que divide el conjunto de intentos razonables en dos rangos de aproximadamente el mismo tamaño. Si tu intento no es correcto, entonces te digo si es muy alto o muy bajo, y puedes eliminar aproximadamente la mitad de los intentos razonables. Por ejemplo, si el rango actual de los intentos razonables es de 26 a 80, intentarías adivinar a la mitad del camino, con la siguiente formula: 
 
 $$(ini,fin)/2$$
 
 En este caso la formula seria la siguiente: $(26 + 80) / 2 = 53$. Si después te digo que 53 es demasiado alto, puedes eliminar todos los números de 53 a 80, dejando 26 a 52 como el nuevo rango de intentos razonables, reduciendo a la mitad el tamaño del rango. 
 
 ![alt text](https://cdn.kastatic.org/ka-perseus-images/a376ce2d2746fc126293571121a818f395a97354.png)
 
 De esta formula seguiria el juego, hasta encontrar nuestro númeo.
 
 ### Aplicaciones 
 Este algoritmo se puede usar para resolver los siguiente problemas: 

 * Una de las maneras más comunes de usar la búsqueda binaria es para encontrar un elemento en un arreglo numerico.
 * [Coins And Triangle](https://vjudge.net/contest/520691#problem/E)
 
 ### Bibliografia
 
 * [Búsqueda binaria](https://es.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)

</div>

