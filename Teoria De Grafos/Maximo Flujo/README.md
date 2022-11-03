<div align="center">
  
  ## Busqueda Binaria 
 
    
</div>

### Introduccion

Este artículo presenta un nuevo enfoque para calcular el flujo máximo en un gráfico. Los artículos anteriores se habían concentrado en encontrar el flujo máximo mediante la búsqueda de rutas de aumento. Los algoritmos de Ford-Fulkerson y Edmonds-Karp pertenecen a esa clase. El enfoque presentado en este artículo se llama push-relabel , que es una clase separada de algoritmos. Veremos un algoritmo descrito por primera vez por Andrew V. Goldberg y Robert E. Tarjan , que no es muy difícil de codificar y, para gráficos densos, es mucho más rápido que los algoritmos de ruta de aumento. Si aún no lo ha hecho, le aconsejo que revise los artículos sobre teoría de grafos y flujo máximo .utilizando rutas de aumento para una mejor comprensión de los conceptos básicos de los dos temas.


 ### Ejemplo
 
 Sea $G = (V,E)$ un gráfico dirigido con el conjunto de vértices $V$ y el conjunto de aristas $E$.
 El tamaño del conjunto $V$ es $n$ y el tamaño del conjunto $E$ es $m$ . $G$ tiene dos
 vértices distinguidos, una fuente $s$ y un sumidero $t$. Cada arista $(u,v) ε E$ tiene una capacidad c(u,v) . Para todas las aristas (u,v) ∉****E , definimos c(u,v) = 0 . Un flujo f en G es una función de valor real que satisface las siguientes restricciones:

* Capacidad **:** f(v,w) ≤ c(v,w) ∨ (v,w) ∊ V × V
* Antisimetría **:** f(v,w) = – f(w,v) ∨ (v,w) ∊ V × V
* Conservación de caudal **:** ∑ u ∊ V f(u,v) = 0 ∨ v ∊ V – {s,t}

El valor de un flujo f es el flujo neto hacia el sumidero, es decir | f | = ∑ tu ∊ V F( u , t) . La figura 1 a continuación muestra una red de flujo con los bordes marcados con sus capacidades. Usando esta red ilustraremos los pasos en el algoritmo.
 
 ![image](https://user-images.githubusercontent.com/101911555/199829217-ac901cd5-23cf-4eeb-8f6b-76d56afdbbd5.png)

### Complejidad 

Tiempo Complejidad de  $O (EV 2 )$.

 ### Bibliografia
 
 1. [video 1](https://youtu.be/M6cm8UeeziI)
 2. [video 2](https://youtu.be/UMT4Nyl8JAA)
 3. [video 3](https://youtu.be/RppuJYwlcI8)
 4. [video 4](https://youtu.be/GiN3jRdgxU4)
 5. [video 5](https://youtu.be/RTOZNwBnFTc)
 6. [tutorial 1](https://www.topcoder.com/thrive/articles/A%20New%20Approach%20to%20the%20Maximum%20Flow%20Problem)
 7. [tutorial 2](https://www.geeksforgeeks.org/dinics-algorithm-maximum-flow/)
 </div>
