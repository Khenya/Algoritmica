<div align="center">
  
  ## Union Find
  
    
</div>

### Introducción
Union Find es una estructura de datos enfocada a identificar qué elementos de un conjunto se encuentran en un subgrupo especificado. Para entender el objetivo de Union Find, debemos volver al concepto de grafo. En Union Find podemos decir que construiremos diversos grafos e identificaremos a qué grafo pertenece qué nodo.

  En la estructura Union Find, existen nodos padres y nodos hijos. Cada nodo existente tiene un solo un padre y puede o no tener hijos. Los nodos hijos pueden tener un mismo nodo padre. Al inicio de la estructura cada nodo es su propio padre y solo tienen un hijo que es el mismo, esto se puede mantener.

Existe una jerarquía, que se basa en que el superpadre será el nodo que es su propio padre, ya que cada nodo nescesita tener un padre, este super padre tiene hijos de los cuales pueden ser padres de otrpos nodos y su padre seria el super padres, generalmente se trata de lograr que solo exista dos niveles d eprofundidad como máximo. 

La sintaxis para crear una relación entre nodos en Union Find es $[hijo, padre]$.
         
 Podemos determinar si dos elementos están en el mismo subconjunto comparando el resultado de dos operaciones Find. Si los dos elementos están en el mismo conjunto, tienen la misma representación; de lo contrario, pertenecen a conjuntos diferentes. Si se llama a la unión de dos elementos, fusione los dos subconjuntos a los que pertenecen los dos elementos.

Union Find es una estructura de datos donde cada conjunto está representado por un árbol de datos en el que cada nodo tiene una referencia a su padre y el representante de cada conjunto es la raíz del árbol de ese conjunto.

* Find sigue a los nodos padre hasta que llega a la raíz.

* Union combina dos árboles en uno uniendo la raíz de un árbol con la raíz del otro.

La complejidad algoritmica del Union Find se divide en dos partes. Union tiene un complejidad de $O(1)$. Find tiene una complejidad de $O(h)$, donde $h$ es el nodoiAltura del árbol

### Ejemplo

Dado que los dos nodos están en progresounionAl operar, siempre deseleccionamos los nodos. El árbol donde se empalma al nodo j. Debajo del árbol, esto puede hacer que un árbol sea especial. Delgado y alto, Es decir, su $h$ muy grande.

![alt text](https://programmerclick.com/images/591/9cdd3c534f82239cce5558ab338c76a7.JPEG)

Por esta razón, necesitamos ajustar constantemente el árbol para hacerlo ligeramenteponerse en cuclillas. Algunos, como se muestra en la siguienet imagen.

![alt text](https://programmerclick.com/images/682/c3f1cb53a079e3bc66bb27cd349b25a2.JPEG)

Cuando cambiamos el rango del arbol mejoramos: 

* Autorizado union. La operación está en curso union. Al operar, primero puede determinar el tamaño del árbol donde se encuentra el nodo y conectar el árbol con un tamaño pequeño a un árbol con un tamaño grande.

* compresión de ruta en cursofindDurante la operación, después de encontrar el nodo raíz, haga un bucle de todos los nodos bajo la ruta al nodo raíz.

Gracias a LA estructura de datos Union Find pasamos de un arbol asi: 

![alt text](https://programmerclick.com/images/579/ebc89dad15ef964c449b1343e91ce53b.JPEG)

A alogo asi: 

![alt text](https://programmerclick.com/images/793/310fa9efa8087b426b3dea12bb19f2d9.JPEG)

### Aplicaciones
* Implementando Algoritmo de Kruskal para encontrar el árbol de expansión mínimo de un graph.
* Ciclo de detección en un graph no dirigido.
* Percolation.
* Dynamic connectivity.
* COVID, para ver encontrar el pasiente 0.

</div>
