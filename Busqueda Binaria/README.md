<div align="center">
  
  ## Busqueda Binaria
 
</div>

### Introducción

La búsqueda binaria es un algoritmo eficiente para encontrar un elemento en una lista ordenada de elementos. Funciona dividiendo repetidamente la parte de la lista que el elemento puede contener por la mitad, hasta que las ubicaciones posibles se reducen a una sola. Usamos la búsqueda binaria en el juego de adivinanzas de la lección introductoria.

Una de las maneras más comunes de usar la búsqueda binaria es para encontrar un elemento en un arreglo numerico.


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
 * [Coins And Triangle](https://vjudge.net/contest/520691#problem/E)
 
 ### Bibliografia
 
 * [Búsqueda binaria](https://es.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)

</div>

