<div align="center">
  
  ## Prim
    
</div>

### Introducción

El algoritmo de Prim es un algoritmo de árbol de expansión mínimo que toma un gráfico como entrada y encuentra el subconjunto de los bordes de ese gráfico que

* Formar un árbol que incluya todos los vértices
* Tiene la suma mínima de pesos entre todos los árboles que se pueden formar a partir del gráfico

La mayor diferencia con el algoritmo Kruskal es que podemos iniciar de cualquier nodo.

### Pasos

1. Inicialice el árbol de expansión mínimo con un vértice elegido al azar.
2. Encuentre todos los bordes que conectan el árbol a nuevos vértices, encuentre el mínimo y agréguelo al árbol
3. Siga repitiendo el paso 2 hasta que obtengamos un árbol de expansión mínimo

 ### Ejemplo 
 Dado el siguiente grafo, queremos hallar el árblo de expancion mínimo.
 
 ![image](https://user-images.githubusercontent.com/101911555/199827152-6ace5672-f6f6-4e50-84dc-71888f49004f.png)
Como fue mencionado antes, escogemos cualquier nodo, en este caso el nodo c.
 
 ![image](https://user-images.githubusercontent.com/101911555/199827388-cbdff15b-6715-483b-9c95-191c6cbe923f.png)

![image](https://user-images.githubusercontent.com/101911555/199827399-6706063e-2a03-4873-b471-a12056977b12.png)

![image](https://user-images.githubusercontent.com/101911555/199827418-274f3359-df06-4c29-89b0-c5ae9bb1e1f6.png)

![image](https://user-images.githubusercontent.com/101911555/199827435-f4e82ab9-3850-47b7-8cbb-39ec406b1104.png)

![image](https://user-images.githubusercontent.com/101911555/199827444-9b431a06-d79c-4770-b2cb-98fe062e30f5.png)



 ### Alplicaciones de Prim
 
 1. Tendido de cables de cableado eléctrico.
2. En red diseñado
3. Para hacer protocolos en ciclos de red

#### Complejidad Algoritmica

La complejidad temporal del algoritmo de Prim es O(E log V)

 ### Bibliografia
 
 1. [Tutorial 1](https://www.programiz.com/dsa/prim-algorithm)
 2. [Video 1](https://youtu.be/cplfcGZmX7I)
 3. [Video 2](https://youtu.be/ZtZaR7EcI5Y)
 
