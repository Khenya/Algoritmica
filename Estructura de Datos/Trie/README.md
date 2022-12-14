<div align="center">
  
  ## TRIE
 
 
    
</div>

### Introduccion
 
</ol>
    Trie es una estructura de datos enfocada a la facilitación de la búsqueda de una secuencia de caracteres dentro de un conjunto de palabras o de caracteres. Es posisible utilizar para realizar búsquedas de manera óptima. Con una complejidad casi lineal, dependiendo de la implementación y las restricciones del problema.
    
Realizamos esta búsqueda construyendo un árbol, compuesto por nodos, es necesario recalcar que cada trie siempre iniciara con un nodo basio, cada nodo es un caracter el cual pertenece a un universo denominado $U$, solo podemos usar las palabras del universo $U$. Los nodos son posicionados de acuerdo a las posisciones de la palabre que tratamos de introducir al árbol.

El código del árbol puede estar compuesto por maps o arrays, en caso de que sea un array es nesesario ordenar los nodos alfabeticamente. Al usasr arrays la busqueda será mas veloz que al usar maps. Al utilizar maps no es necesario ordenar los nodos del primer nivel alfabeticamente pero cada nodo debe contener dos datos, el caracter y la posicion del caracter.

Para utilizar un Trie es necesario armar un árbol, donde los nodos sean las letras de las palabras. Se debe marcar a cada letra que es fin de una palabre, es importante recalcar que en cada nivel los caracteres del universo $U$ que no usemos debemos ponerlos con valor null.

### Ventajas
Algunas de sus ventajas son:

1) Búsqueda de claves más rápida. La búsqueda de una clave de longitud m tendrá en el peor de los casos una complejidad algoritmica de $O(n)$, lineal.
2) Menos espacio requerido para almacenar gran cantidad de cadenas pequeñas, puesto que las claves no se almacenan explícitamente.
3) Mejor funcionamiento para el algoritmo de búsqueda del prefijo más largo.
4) Al estar conformada por nodos de tal manera que unos estén conectados con otros formando ramas. Lo cual ayuda a que cada rama debe conformar una palabra.
5) Al cada nodo contenga un caracter es posible marcar el final de palabra en cada nodo. Lo cual nos ayuda a ahorrarmemoria, logrando que nuestro algoritmo sea más veloz.
### Ejemplo

Tenemos las siguientes palabras: 

* how
* hi
* her
* hellow
* see
* so
 
![alt text](https://programmerclick.com/images/124/07b979885b56d487a213198d03e6f86c.png)

**Primer paso**

En el ejemplo partimos del nodo inicial con un **/** para demostrar que esta basio ese nodo.

**Segundo paso**

Proseguimos a ordenar las palabras alfabeticamente:

* hellow
* her
* hi
* how
* see
* so

**Tercer paso**

Proseguir a insertar las palabras al Trie. 

Colocamos primero  **hellow**. Despues **her** ahorrando nodos para la **h** y **e**, solo aumentando un nodo para la letra **r**. Hacemos lo mismo con la palabra **hi**, nos ahorramos la letra **h** colocando solo la letra **i**. Seguimos este patron hasta insertar todas las palabras en el árbol.

Este es un claro ejemplo del Tie Array, ya que esta ordenado alfabeticamente las palabras. Los nodos en naranja son los nodos que marcan el final de una palabra.

### Aplicaciones
Algunas de las aplicaciones de la estructura de datos Trie son:

* Autocorrector
* Autocompletado de texto

### Bibibliografia
* [video 1](https://youtu.be/AXjmTQ8LEoI)
* [video 2](https://youtu.be/6PX6wqDQE20)
* [video 3](https://youtu.be/-urNrIAQnNo)
* [Tutorial 1](https://www.toptal.com/java/the-trie-a-neglected-data-structure)
* [Tutorial 2](https://www.hackerearth.com/practice/data-structures/advanced-data-structures/trie-keyword-tree/tutorial/)
* [Tutorial 3](https://www.topcoder.com/thrive/articles/Using%20Tries)
</div>
