<div align="center">
  
  ## Bactracking
 
 
    
</div>

### Introducción
 
</ol>
   Backtracking es una tecnica que se utiliza para resolver problemas de manera recursiva, quitando las soluciones que fallan en en satisfacer las condiciones del problema.
   
   Backtracking es una estructura parecida a un árbol, donde se eliminan todas las ramas que no cumplan los requisitos, prebiamente asignados, de cada problema. 
   
   Bactracking al igual que la Fuerza Bruta utilizan la recursividad. Pero existen diferncias muy marcadas puesto que la Fuerza Bruta usa todas las soluciones posibles isn importar que esta solucion tenga sentido o no, mientras que Backtracking elimina todas las ramas que no cumplan los requisitos. 
   
### Ventajas
Algunas de sus ventajas son:

1) Complejidad algoritmica. Al eliminar todas las ramas que no cumplan los reqisitos la complejidad lineal no supera $O(2n)$ 
2) Menos espacio requerido para almacenar gran cantidad de cadenas pequeñas, puesto que las claves no se almacenan explícitamente.
3) Mejor funcionamiento para el algoritmo de búsqueda del prefijo más largo.
4) Al estar conformada por nodos de tal manera que unos estén conectados con otros formando ramas. Lo cual ayuda a que cada rama debe conformar una palabra.
5) Al cada nodo contenga un caracter es posible marcar el final de palabra en cada nodo. Lo cual nos ayuda a ahorrarmemoria, logrando que nuestro algoritmo sea más veloz.

### Aplicaciones
Algunas de las aplicaciones de la estructura de datos Trie son:

* Autocorrector
* Autocompletado de texto
</div>Backtricking es una tecnica que se utiliza para resolver problemas de manera recursiva intentando construir una solución de forma incrementeal, una pieza a la vez, quitando las soluciones que fallan en en satisfacer las condiciones del problema en cualquier momento del tiempo.
