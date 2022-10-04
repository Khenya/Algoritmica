<div align="center">
  
  ## TRIE
 
 
    
</div>

### Introduccion
 
</ol>
    Trie es una estructura de datos enfocada a la facilitación de la búsqueda de una secuencia de caracteres dentro de un conjunto de Strings o de caracteres dado, se puede utilizar para realizar búsquedas de manera óptima, con una complejidad casi lineal (dependiendo de la implementación y las restricciones del problema).
    Realizaremos esta búsqueda construyendo un árbol. Este árbol está compuesto por nodos y cada nodo es un caracter que pertenece a un universo definido U. Los nodos son posicionados de acuerdo a su posición en el String que estamos introduciendo al árbol, iniciando con un vacío.
    En código, del árbol estará compuesto por mapas o por arrays. Si utilizamos arrays, la búsqueda de nodos será más rápida, pero cada caracter no utilizado en las bifurcaciones de un nodo será marcado como nulo y estaremos sacrificando memoria. Y si utilizamos mapas, no tendremos nodos nulos, pero la búsqueda será de O(n).

Ej. Suponiendo que tenemos 9 strings:

hola
aab
holas
holass
xz
aa
aax
holax
ho
El Trie de esos 9 strings se ve de esta manera:
</div>
