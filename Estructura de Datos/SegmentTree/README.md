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
En la siguiente imagen se muestra un árbol binario que se genera con solo $n=8$, el   
  
 ![alt text](https://libreim.github.io/assets/images/blog/segment_trees/segment_trees_visualizacion.png)
 
Es necesario aclarar que el nodo inicial va de 0  a 7, $V[0,7]$, puede que almacenar una suma, multiplicacion, minimo o otra operacion que sea un monoide. Cada nodo guarda un número, que es el resultado de un rango, si deseamos encontrar el minimo, o otra operqación, de todo el vector, se debe consultar al nodo $0$. 

Supongamos que tenemos un vector $V=[3,2,8,5,6,1,7,4]$ y deseamos hallar el minimo de todo el vector. En este caso necesitamos realizar un range minimum query. El mínimo del subintervalo V[i,j] es el mínimo de los mínimos obtenidos para los subintervalos preprocesados que formen una partición de V[i,j], en este caso usariamos $V[0,7]$. 

min(V[2,7])=min{min(V[2,2]),min(V[3,4]),min(V[5,6]),min(V[7,7])}=min{2,5,1,7}=1
En lo que sigue estudiaremos cómo construir el segment tree (librándonos de la suposición n=2m) y probaremos que es posible realizar una consulta y actualizar el vector de forma eficiente. Sin embargo, antes debemos saber qué operaciones tienen que realizar los nodos del segment tree para que esto sea posible.

Nodos del segment tree
La información relativa a los subintervalos del tipo V[k2l,(k+1)2l−1] debe almacenarse en un nodo. Los subintervalos V[i,i] son los casos base y sus nodos formarán las hojas del segment tree. Los nodos deben mantener 3 operaciones:

Asignar la información correspondiente al nodo en el caso de que este sea una hoja del árbol.
Generar la información del nodo a partir de dos nodos cuyos subintervalos sean una partición del subintervalo actual. Esta operación se denomina merge.
Devolver la información del subintervalo que el nodo representa.
 ### Aplicaciones 
 Este algoritmo se puede usar para resolver los siguiente problemas: 
 
 * Gráfico de clasificación de burbujas
 * Inventario
 * Conjunto de pedido
 * DQuery
 

</div>
