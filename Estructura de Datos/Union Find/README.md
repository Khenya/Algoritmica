<div align="center">
  
  ## Union Find
  
    
</div>

### Concepto
Union Find es una estructura de datos enfocada a identificar qué elementos de un conjunto se encuentran en un subgrupo especificado. Para entender el objetivo de Union Find, debemos volver al concepto de grafo. En Union Find podemos decir que construiremos diversos grafos e identificaremos a qué grafo pertenece qué nodo.

  En la estructura Union Find, existen nodos padres y nodos hijos. Cada nodo existente tiene un solo un padre y puede o no tener hijos. Los nodos hijos pueden tener un mismo nodo padre. Al inicio de la estructura cada nodo es su propio padre y solo tienen un hijo que es el mismo, esto se puede mantener.

Existe una jerarquía, que se basa en que el superpadre será el nodo que es su propio padre, ya que cada nodo nescesita tener un padre, este super padre tiene hijos de los cuales pueden ser padres de otrpos nodos y su padre seria el super padres, generalmente se trata de lograr que solo exista dos niveles d eprofundidad como máximo. 

         Cabe remarcar que la sintaxis para crear una relación entre nodos en Union Find es $[hijo, padre]$.
         
         odemos determinar si dos elementos están en el mismo subconjunto comparando el resultado de dos operaciones Find. Si los dos elementos están en el mismo conjunto, tienen la misma representación; de lo contrario, pertenecen a conjuntos diferentes. Si se llama a la unión de dos elementos, fusione los dos subconjuntos a los que pertenecen los dos elementos.

Union Find es una estructura de datos donde cada conjunto está representado por un árbol de datos en el que cada nodo tiene una referencia a su padre y el representante de cada conjunto es la raíz del árbol de ese conjunto.

Find sigue a los nodos padre hasta que llega a la raíz.
Union combina dos árboles en uno uniendo la raíz de un árbol con la raíz del otro.
</div>
