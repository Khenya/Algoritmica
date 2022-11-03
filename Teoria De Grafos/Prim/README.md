<div align="center">
  
  ## Prim
    
</div>

### Introducción
El algoritmo de Prim es un algoritmo de árbol de expansión mínimo que toma un gráfico como entrada y encuentra el subconjunto de los bordes de ese gráfico que:
* Formar un árbol que incluya todos los vértices.
* Tiene la suma mínima de pesos entre todos los árboles que se pueden formar a partir del gráfico.

La más grande diferencia con el algoritmo KrusKal es que podemos iniciar del nodo que deseemos.

 ### Pasos 
 
 1. Seleccionar cualquier nodos.
 3. Mandar los nodos vecinos no visitados a una cola de prioridad por peso.
 4. Seleccionar el nodo cola.
 5. Repetir el paso 2 y 3.

 ### Ejemplo
 
 Dado el siguiente grafo, deseamos hallar el árbol de éxpancion mínimo.
 
 ![alt text](https://cdn.programiz.com/sites/tutorial2program/files/pa_1.png)
 
 Como fue mencionado previamente el primer paso es oseleccionar cualquier nodo, en este caso el nodo c.
 
 ![alt text](https://cdn.programiz.com/sites/tutorial2program/files/pa_2.png)
 
 ![image](https://user-images.githubusercontent.com/101911555/199822741-c1dc81c1-184d-42f4-8a39-7ba3f4225cfe.png)
 
![image](https://user-images.githubusercontent.com/101911555/199822804-072b3d43-3256-4ad0-8af6-a1df44b8d339.png)
 
 Este ultimo paso lo debemos repetir hasta conectar todos los nodos:
 
 ![alt text](https://cdn.programiz.com/sites/tutorial2program/files/pa_5.png)
 
 ![alt text](https://cdn.programiz.com/sites/tutorial2program/files/pa_6.png)
 ### Complejidad Algoritmica
 La complejidad temporal del algoritmo de Prim es $O(E log V)$.
 
 ### Alplicaciones de Prim
 
 1. Tendido de cables de cableado eléctrico.
2. En red diseñado
3. Para hacer protocolos en ciclos de red

 ### Bibliografia
 
 1. [Tutorial 1](https://www.programiz.com/dsa/prim-algorithm)
 2. [Video 1](https://youtu.be/cplfcGZmX7I)
 3. [Video 2](https://youtu.be/ZtZaR7EcI5Y)
 
