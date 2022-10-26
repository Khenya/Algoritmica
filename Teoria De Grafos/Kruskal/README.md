<div align="center">
  
  ## Kruskal
    
</div>

### Introducción

 El algoritmo Kruskal es un algoritmo de teoria de grafos, es similar al algoritmo UnionFind. Con el cual podemos hallar el árbol de Expansión Mínimo o Máximo. 
 
 Con el Kruskal solo tenemos una opción de camino. 
 
 ### Pasos 
 
 1. Ordenar las aristas por el peso (Máximo o mínimo), haviendo un Sort a las aristas.
 2. Crear un union Find (# de los nodos).
 3. Unir los nodos a partir de las aristas minimas o maximas.
 4. Preguntar si los nodos ya están conectados

 ### Ejemplo
 
 Dado el siguiente grafo, deseamos hallar el árbol de éxpancion mínimo.
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/grafo.jpg?w=500&h=209)
 
 Como fue mencionado previamente el primer paso es ordenar las aristas por el peso, en este caso del menor peso al mayor.
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/tabla1.jpg)
 
 Despues debemos crear el UnionFind 
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal0.jpg?w=500&h=243)
 
 Finalmente preguntar si estan conectados y si no lo estan, debemos conectarlos: 
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal01.jpg?w=768&h=304)
 
 Este ultimo paso lo debemos repetir hasta conectar todos los nodos:
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal2.jpg?w=500&h=242)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal3.jpg?w=768&h=304)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal4.jpg?w=768&h=367)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal5.jpg?w=768&h=304)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal6.jpg?w=768&h=367)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal7.jpg?w=768&h=304)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal8.jpg?w=768&h=367)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal9.jpg?w=768&h=304)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal10.jpg?w=768&h=367)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal11.jpg?w=768&h=304)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal12.jpg?w=768&h=304)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal13.jpg?w=768&h=367)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal14.jpg?w=768&h=304)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal16.jpg?w=768&h=367)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal17.jpg?w=768&h=304)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal18.jpg?w=768&h=304)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal19.jpg?w=500&h=237)
 
 ![alt text](https://jariasf.files.wordpress.com/2012/04/kruskal20.jpg?w=500&h=191)
 ### Bibliografia
 
 1. [Tutorial 1](https://jariasf.wordpress.com/2012/04/19/arbol-de-expansion-minima-algoritmo-de-kruskal/)
 2. [Video 1](https://youtu.be/71UQH7Pr9kU)
 3. [Video 2](https://youtu.be/fAuF0EuZVCk)
 4. [BIT](https://github.com/Khenya/Algoritmica/tree/main/Estructura%20de%20Datos/BIT)
 
 

</div>
