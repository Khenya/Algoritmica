<div align="center">
  
  ## TRIE
 
 
    
</div>

### Introduccion
 
</ol>
    Trie es una estructura de datos enfocada a la facilitación de la búsqueda de una secuencia de caracteres dentro de un conjunto de palabras o de caracteres. Es posisible utilizar para realizar búsquedas de manera óptima. Con una complejidad casi lineal, dependiendo de la implementación y las restricciones del problema.
    
Realizamos esta búsqueda construyendo un árbol, compuesto por nodos, es necesario recalcar que cada trie siempre iniciara con un nodo basio, cada nodo es un caracter el cual pertenece a un universo denominado $U$, solo podemos usar las palabras del universo $U$. Los nodos son posicionados de acuerdo a las posisciones de la palabre que tratamos de introducir al árbol.

El código del árbol pued estar compuesto por maps o arrays, en caso de que sea un array es nesesario ordenar los nodos alfabeticamente. Al usasr arrays la busqueda será mas veloz que al usar maps. Al utilizar maps no es necesario ordenar los nodos del primer nivel alfabeticamente pero cada nodo debe contener dos datos, el caracter y la posicion del caracter.

Para utilizar un Trie es necesario armar un árbol, donde los nodos sean las letras de las palabras. Se debe marcar a cada letra que es fin de una palabre, es importante recalcar que en cada nivel los caracteres del universo $U$ que no usemos debemos ponerlos con valor null.

### Ventajas
Algunas de sus ventajas son:

1) Búsqueda de claves más rápida. La búsqueda de una clave de longitud m tendrá en el peor de los casos una complejidad algoritmica de $O(n)$, lineal.
2) Menos espacio requerido para almacenar gran cantidad de cadenas pequeñas, puesto que las claves no se almacenan explícitamente.
3) Mejor funcionamiento para el algoritmo de búsqueda del prefijo más largo.
4) Al estar conformada por nodos de tal manera que unos estén conectados con otros formando ramas. Lo cual ayuda a que cada rama debe conformar una palabra.
5) Al cada nodo contenga un caracter es posible marcar el final de palabra en cada nodo. Lo cual nos ayuda a ahorrarmemoria, logrando que nuestro algoritmo sea más veloz.

### Aplicaciones
Algunas de las aplicaciones de la estructura de datos Trie son:

* Autocorrector
* Autocompletado de texto
</div>
