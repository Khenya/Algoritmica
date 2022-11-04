<div align="center">
  
  ## Geometria Computacional
    
</div>

### Introducción
La geometría computacional es una rama de las ciencias de la computación dedicada al estudio de algoritmos que pueden ser expresados en términos de la geometría. Algunos de los problemas puramente geométricos surgen del propio estudio de dichos algoritmos, y este tipo de problemas también se considera parte de la geometría computacional.

Se trata, como dicen algunos autores, de la conjunción de la Geometría Clásica con la Informática. Partiendo de la abstracción de problemas de otras áreas (tales como diseño asistido, robótica, CAD/CAM, bases de datos o incluso biología molecular), la GC trata de desarrollar herramientas y técnicas para resolver problemas de naturaleza, principalmente, geométrica, con especial énfasis en el diseño eficiente de algoritmos y estructura de datos.

Fue bautizada en 1975 por Michael Shamos al acuñar este término por primera vez en el título de su tesis doctoral, dirigida por Franco Preparata. El libro de ambos, [Preparata], por cierto, es para muchos de los que nos dedicamos a esto uno de nuestros manuales de cabecera. No obstante, hay publicados trabajos enmarcados dentro del área muy anteriores, sólo que no se les había catalogado aún.

Para explicar de forma más gráfica cómo respira la GC, vamos a ver cómo es el camino que va desde la matemática continua abstracta al diseño de un algoritmo capaz de resolver el problema con nuestra máquina: el ordenador. Para ello, vamos a plantear un problema: el cálculo de la envolvente convexa de un conjunto finito de puntos en el plano.

 ### Vectores
 
 Los vectores son la base de muchos métodos para resolver problemas de geometría. Formalmente, un vector está definido por una dirección y una magnitud. En el caso de la geometría de dos dimensiones, un vector se puede representar como un par de números, $x$ e $y$, que dan tanto una dirección como una magnitud. Por ejemplo, el segmento de línea de (1,3) a (5,1) se puede representar mediante el vector (4,-2). Sin embargo, es importante comprender que el vector define solo la dirección y la magnitud del segmento en este caso, y no define las ubicaciones inicial o final del vector.
 
 ### Suma de vectores
 
 Hay una serie de operaciones matemáticas que se pueden realizar en los vectores. El más simple de estos es la suma: puede sumar dos vectores y el resultado es un nuevo vector. Si tiene dos vectores $(x_1 , y_1 )$ y $(x_2 , y_2 )$, entonces la suma de los dos vectores es simplemente $(x_1 +x_2 , y_1 +y_2 )$. La siguiente imagen muestra la suma de cuatro vectores. Tenga en cuenta que no importa en qué orden los agregue, al igual que la suma regular. A lo largo de estos artículos, usaremos los signos más y menos para indicar sumas y restas de vectores, donde cada uno es simplemente la suma o resta por partes de los componentes del vector.
 
 ### Producto escalar
 
 La suma de vectores es relativamente intuitiva; un par de operaciones vectoriales menos obvias son los productos punto y cruz. El producto punto de dos vectores es simplemente la suma de los productos de los elementos correspondientes. Por ejemplo, el producto escalar de $(x_1 , y_1 )$ y $(x_2 , y_2 )$ es $x_1 *x_2 + y_1 *y_2$. Tenga en cuenta que esto no es un vector, sino que es simplemente un número único (llamado escalar). La razón por la que esto es útil es que el producto escalar, $A ⋅ B = |A||B|Cos(θ)$, donde θ es el ángulo entre A y B. |A| se llama la norma del vector, y en un problema de geometría 2-D es simplemente la longitud del vector, sqrt(x_2 +y_2 ). Por lo tanto, podemos calcular $Cos(θ) = (A ⋅ B)/(|A||B|)$. Usando la función acos, podemos encontrar θ. Es útil recordar que $Cos(90) = 0 y Cos(0) = 1$, ya que esto te dice que un producto escalar de 0 indica dos líneas perpendiculares, y que el producto escalar es mayor cuando las líneas son paralelas. Una nota final sobre los productos escalares es que no se limitan a la geometría 2D. Podemos tomar productos escalares de vectores con cualquier número de elementos, y la igualdad anterior sigue siendo válida.

### Producto cruz

Una operación aún más útil es el producto cruz. El producto cruzado de dos vectores 2-D es $x_1 *y_2 - y_1 *x_2$ Técnicamente, el producto vectorial es en realidad un vector, tiene la magnitud indicada anteriormente y está dirigido en la dirección +z. Como por ahora solo estamos trabajando con geometría 2-D, ignoraremos este hecho y lo usaremos como un escalar. Similar al producto escalar, $A x B = |A||B|Sin(θ)$. Sin embargo, θ tiene un significado ligeramente diferente en este caso: |θ| es el ángulo entre los dos vectores, pero θ es negativo o positivo según la regla de la mano derecha. En geometría 2D, esto significa que si A está a menos de 180 grados en el sentido de las agujas del reloj desde B, el valor es positivo. Otro hecho útil relacionado con el producto vectorial es que el valor absoluto de $|A||B|Sin(θ)$ es igual al área del paralelogramo con dos de sus lados formados por A y B. Además, el triángulo formado por A , B y la línea roja en el diagrama tiene la mitad del área del paralelogramo.

### Area de polígono

Otra tarea común es encontrar el área de un polígono, dados los puntos alrededor de su perímetro. Considere el siguiente polígono no convexo, con 5 puntos. Para encontrar su área vamos a empezar triangulando. Es decir, lo vamos a dividir en varios triángulos. En este polígono, los triángulos son ABC, ACD y ADE. Pero espera, protestas, ¡no todos esos triángulos son parte del polígono! Vamos a aprovechar el área firmada que nos da el producto cruz, lo que hará que todo salga bien. Primero, tomaremos el producto cruz de AB x AC para encontrar el área de ABC. Esto nos dará un valor negativo, por la forma en que están orientados A, B y C. Sin embargo, aún vamos a agregar esto a nuestra suma, como un número negativo. De manera similar, tomaremos el producto vectorial AC x AD para encontrar el área del triángulo ACD, y obtendremos de nuevo un número negativo. Finalmente, tomaremos el producto vectorial AD x AE y como estos tres puntos están orientados en dirección opuesta, obtendremos un número positivo. Sumando estos tres números (dos negativos y un positivo) terminaremos con un número negativo, por lo que tomaremos el valor absoluto, y ese será el área del polígono.
 
 ![image](https://user-images.githubusercontent.com/101911555/199825915-980bb645-e9c1-4c30-aa3b-635fc0a1fdea.png)

 La razón por la que esto funciona es que el número positivo y el negativo se anulan exactamente en la cantidad correcta. El área de ABC y ACD terminó contribuyendo positivamente al área final, mientras que el área de ADE contribuyó negativamente. Mirando el polígono original, es obvio que el área del polígono es el área de ABCD (que es lo mismo que ABC + ABD) menos el área de ADE. Una nota final, si el área total con la que terminamos es negativa, significa que los puntos del polígono se nos dieron en el sentido de las agujas del reloj. Ahora, solo para hacer esto un poco más concreto, escribamos un poco de código para encontrar el área de un polígono, dadas las coordenadas como una matriz 2-D, p.

 ### Bibliografia
 
 1. [Tutorial 1](https://www.topcoder.com/thrive/articles/Geometry%20Concepts%20part%201:%20Basic%20Concepts)
 2. [Video 1](https://youtu.be/Vu84lmMzP2o)
 3. [Video 2](https://youtu.be/UUCKvHTP4Gg)
 4. [Video 3](https://youtu.be/fTqPVjy0rzU)
 
