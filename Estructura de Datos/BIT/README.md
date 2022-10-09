<div align="center">
  
  ## Binary Index Tree (BIT)
    
</div>

### Introducción

  Binary Index Tree o mejor conociod por sus siglas BIT, igualmente conocido como Fenwick Tree, es una estructura de datos que almacena los resultados de unas operaciones. 
  
  Para poder construiir un BIT, Binary Index Tree, debemos pprimero entender la operacion binaria Complemento 1 y el concepto de bit menos significativo. El bot menos significativo se puede calcular con la siguiente folmula: 
  $$v + (v) and -v $$
  
  Donde $-v = (v)^{c}_2 +1 $
  Donde $(v)^{c}_2$ es el cpomplemento en binario.
  
  Lo mejor que nos ofrese BIT es que para alctualizar un valor en el conjunto, utilizamos el mismo método con el que se construye el BIT.
  
  Para hacer consultas del intérvalo [i..j], vamos de hijo a padre con la operación padre() que describimos anteriormente tanto para i como para j , sumando al hijo el valor que tenemos en padre, repitiendo el proceso hasta que lleguemos a 0. 
  
  La complejidad algoritmica del BIT es O(n).
  
  Lo malo de la estructura BIT es que es bnecesario que sea un grupo.
  
  Para que sea un grupo:
  
 
  * Cada elemento $a$ del conjunto debe tener un inverso $I$ tal que la operación o entre estos dos elementos nos devuelva el elemento neutro $e$. Es decir, $aoI=e$ y $Ioa=e$ . Esta es la propiedad inversa.
  
  * Es necesario que exista un neutro $e$. Un neutro es un numero, al cual se le aplica una operacion y no cambi el resultado inicial.
  
  * Es necesario que sea asociativa $(a * b) * c = a * (b * c) $.
  
  * Debe ser una operacion interna por lo cual cada resultado de un aoperacion debe pertenecer al mismo conjunto. 


  ### Ejemplo 
  La sigueiente imagen suponemos que queremos encontrar la frecuencia acumulada en el índice 13, es decir, la suma de las primeras 13 frecuencias. En notación binaria, 13 es igual a $1101$. 
  
 ![alt text](https://images.ctfassets.net/piwi0eufbb2g/3x4z986CTmMGWH50X7mp9q/78e572d03601658d4ec6b5353974c85c/bitval.gif)
 
 ### Aplicaciones 
 Este algoritmo se puede usar para resolver los siguiente problemas: 
 
 * Gráfico de clasificación de burbujas
 * Inventario
 * Conjunto de pedido
 * DQuery
 
</div>
