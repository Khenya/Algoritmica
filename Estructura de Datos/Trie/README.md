<div align="center">
  
  ## TRIE
 
 
    
</div>

### Introduccion
 
</ol>
    Trie es una estructura de datos enfocada a la facilitación de la búsqueda de una secuencia de caracteres dentro de un conjunto de Strings o de caracteres dado, se puede utilizar para realizar búsquedas de manera óptima, con una complejidad casi lineal (dependiendo de la implementación y las restricciones del problema).
    
Realizamos esta búsqueda construyendo un árbol. El árbol está compuesto por nodos, cada nodo es un caracter el cual pertenece a un universo denominado $U$. Los nodos son posicionados de acuerdo a las posisciones de la palabre que tratamos de introducir al árbol.

El código del árbol debe estar compuesto por maps o arrays, en caso de que sea un array es necesario ordenar los nodos alfabeticamente. Al usasr arrays la busqueda será mas veloz que al usar maps. Al utilizar maps no tendrempos nodos nulos pero la complejidad algoritmica sera de $O(n)$.

Para utilizar un Trie es necesario armar un árbol, donde los nodos sean las letras de las palabras. Se debe marcar a cada letra que es fin de una palabre, podemos ordenar alfabéticamente a las palabras que forman el Trie.

### Ventajas
Algunas de sus ventajas son:

1) Búsqueda de claves más rápida. La búsqueda de una clave de longitud m tendrá en el peor de los casos un coste de $O(m)$. Un BST tiene un coste de $O(m log n)$, siendo n el número de elementos del árbol, ya que la búsqueda depende de la profundidad del árbol, logarítmica con el número de claves.
2) Menos espacio requerido para almacenar gran cantidad de cadenas pequeñas, puesto que las claves no se almacenan explícitamente.
3) Mejor funcionamiento para el algoritmo de búsqueda del prefijo más largo.
4) AL estar conformada por nodos de tal manera que unos estén conectados con otros formando ramas. Lo cual ayuda a que cada rama debe conformar una palabra.
5) Cada nodo contenga un caracter. Por lo cual cada nodo puede marcar el final de palabra.
</div>
