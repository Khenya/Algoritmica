<div align="center">
  
  ## Segment Tree
 
</div>

### Introducción
Un Segment Tree es una estructura de datos en la que almacenamos los datos de un conjunto y los resultados de las operaciones permitidas entre ellos en distintos nodos 
los cuales se encuentran en un árbol. La complejidad algoritmica de esta estructura de datos es $O(4+n+1)$.

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
En la siguiente imagen se muestra un árbol binario que se genera con solo $n=8$, el   
  
 ![alt text](https://libreim.github.io/assets/images/blog/segment_trees/segment_trees_visualizacion.png)
 
Es necesario aclarar que el nodo inicial va de 0  a 7, $V[0,7]$, puede que almacenar una suma, multiplicacion, minimo o otra operacion que sea un monoide. Cada nodo guarda un número, que es el resultado de un rango, si deseamos encontrar el minimo, o otra operqación, de todo el vector, se debe consultar al nodo $0$. 

Supongamos que tenemos un vector $V=[3,2,8,5,6,1,7,4]$ y deseamos hallar el minimo del nodo 4 a 7 el vector. El mínimo del subintervalo $V[i,j]$ es el mínimo de los mínimos obtenidos para los subintervalos preprocesados que formen una partición de V[i,j], en este caso hariamos un querry de $V[4,7]$.  

**Primer paso**

![alt text](http://www.oscarblancarteblog.com/wp-content/uploads/2014/08/arbolvslineal.png)

Tenemos que seguir la secuencia $A -> B-> D -> H$ para asignar al nodo 7 el minimo de la posición $V[0,0]$ del vector, que vendria a ser en este caso el mismo numero, 3. 
llegamos a esta conclucion, al aplicar la siguiente formula:
$$[i,j/2]$$
Donde $j$ inicia con $7$, pero va canbiando. Este ciclo debe terminar cuando $i=j$.

Donde $i$ inicia con $0$, este canbia de valor cuando va a la derecha, porque como se ve en la secuencia que sigue, va a la izquierda hasta llegar al fondo de la rama.

**Segundo paso**

Vamos a la derecha cuando ya no podemos ir mas a la izquierda y seguimos sacando el minimo. En este caso seria $2$, en la posición $V[1,1]$, en el nodo 8. 

**Tercer paso**

Al tener el minimo del a,bos lados, izquierdo y derecho, podemos sacar el minimo entre ambos, que en este caso seria $2$, en la posición $V[0,1]$

Debemos seguir este ciclo hasta llegar al nodo numero $0$. 

Este ejemplo nos daria como resultado un nuevo vector, más geande que el inicial, de tamaño 14 y seria el siguiente:
$$V=[1,2,1,2,5,1,4,3,2,8,5,6,1,7,4]$$
Y la respuesta a nuestro querry seria $1$.

 ### Aplicaciones 
 Este algoritmo se puede usar para resolver los siguiente problemas: 
 
 * Ciencia de datos
 * Busqueda profunda
 * Ordenamiento de elementos
 * Búsqueda binaria
 

</div>
