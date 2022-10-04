<div align="center">
  
  ## Union Find
  
    
</div>

### Concepto
Union Find es una estructura de datos enfocada a identificar qué elementos de un conjunto se encuentran en un subgrupo especificado. Para entender el objetivo de Union Find, debemos volver al concepto de grafo. Un grafo, en matemática discreta, es un conjunto de objetos que se encuentran interconectados entre sí. Llamaremos a estos objetos, nodos. Entonces, un grafo está compuesto por nodos que tienen conexiones entre ellos. Cabe remarcar que existen nodos que no tienen conexiones, pero no se ahondará en el tema de grafos en esta sección. En Union Find podemos decir que construiremos diversos grafos e identificaremos a qué grafo pertenece qué nodo.

         En esta estructura, existen nodos padres y nodos hijos. Cada nodo existente tiene un y solo un padre de manera obligatoria y puede o no tener hijos. Varios nodos hijos pueden tener un mismo nodo padre. Un nodo puede ser su propio padre.

         Las reglas anteriormente detalladas crean una jerarquía: el superpadre será el nodo que sea su propio padre. Para acortar el método de búsqueda de Union Find y la unión de un nodo con su nuevo padre, nos enfocaremos en el superpadre. Esto se logra haciendo que el nodo superpadre sea padre directo tanto de sus nodos hijos como de los hijos de sus hijos, etc. Esto se logra encontrando a los superpadres del futuro nodo padre y el futuro nodo hijo y creando una relación padre-hijo con los superpadres encontrado.

         Cabe remarcar que la sintaxis para crear una relación entre nodos en Union Find es: [hijo, padre].
         
         odemos determinar si dos elementos están en el mismo subconjunto comparando el resultado de dos operaciones Find. Si los dos elementos están en el mismo conjunto, tienen la misma representación; de lo contrario, pertenecen a conjuntos diferentes. Si se llama a la unión de dos elementos, fusione los dos subconjuntos a los que pertenecen los dos elementos.

Union Find es una estructura de datos donde cada conjunto está representado por un árbol de datos en el que cada nodo tiene una referencia a su padre y el representante de cada conjunto es la raíz del árbol de ese conjunto.

Find sigue a los nodos padre hasta que llega a la raíz.
Union combina dos árboles en uno uniendo la raíz de un árbol con la raíz del otro.
</div>
