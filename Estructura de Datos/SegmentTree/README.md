<div align="center">
  
  ## Segment Tree
 
</div>

### Introducción
Un Segment Tree es una estructura de datos en la que almacenamos los datos de un conjunto y los resultados de las operaciones permitidas entre ellos en distintos nodos 
los cuales se encuentran en un árbol. La complejidad algoritmica de esta estructura de datos es O(log(n)).

  Al construir un Segment Tree con un formato binario, cada nodo tendrá como máximo solo dos nodos derivados. Los nodos derivados representarán las dos mitades que 
  forman el intérvalo de su nodo padre. Entonces, el nodo 0 tiene un intérvalo de $[0..N]$, el nodo 1 de $[0..N/2]$, el nodo 2 de $[N/2+1..N]$, y así sucesivamente hasta
  llegar a nodos que tienen un intérvalo de tamaño 1.

El primer paso es constru ir el árbol con todos los nodos necesarios, empezaremos a guardar resultados. 

Lo siguiente es encontrar el resultado de un intérvalo, tomando los índices inicial y final. Como cada nodo representa un intérvalo, buscaremos el resultado solamente en
los nodos que se encuentren dentro del intérvalo que estamos buscando. Si el resultado que buscamos ya se encuentra en un nodo, devolveremos ese mismo nodo. 

Para actualizar el valor de uno de los números del conjunto dado, buscaremos el intérvalo en que se encuentra el nuevo valor y actualizaremos a todos los nodos por 
encima del nodo cuyo valor modificaremos. De esta manera solo modificaremos los nodos necesarios y no cambiaremos todo el árbol.

Lo malo de esta estructura es que es necesario que sea un monoide.

Un conjunto de números es un monoide si es que es un semigrupo. Un monoide debe tener lo siguiente: 

  * Es necesario que exista un neutro $e$. Un neutro es un numero, al cual se le aplica una operacion y no cambi el resultado inicial. 
  
  * Es necesario que sea asociativa $(a * b) * c = a * (b * c) $. 
  
  * Debe ser una operacion interna por lo cual cada resultado de un aoperacion debe pertenecer al mismo conjunto. 

### Ejemplo
En la siguiente imagen se muestra un árbol binario que se genera con solo $n=8$  


</div>
