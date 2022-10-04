<div align="center">
  
  ## Binary Index Tree (BIT)
    
</div>

### Introducción

  Binary Index Tree o mejor conociod por sus siglas BIT, igualmente conocido como Fenwick Tree, es una estructura de datos que almacena los resultados de unas operaciones. 
        Para poder construir un BIT, Binary Indexed Tree, debemos primero entender la operacion binaria Complemento 1 y también el concepto de bit menos significativo. EL Bit menos significativo es $v$. 
        Encontrar el bit menos significativo por medio de código es esencial. La nueva operación -n() nos ayudará. La manera en que encontraremos el bit menos significativo de un número binario será aplicando la operación 'and' al número binario a 2 y al resultado de -n(a 2 ). Es decir, bms(a 2 ) = a 2 AND -n(a 2 ).
        Lo bueno de esta estructura es que para actualizar un valor en el conjunto, utilizamos el mismo método con el que construimos el BIT.         Para hacer consultas del intérvalo [i..j], vamos de hijo a padre con la operación padre() que describimos anteriormente tanto para i como para j , sumando al hijo el valor que tenemos en padre, repitiendo el proceso hasta que lleguemos a 0.         Teniendo bms(a 2 ) ahora lo utilizaremos para determinar el intérvalo cuyo resultado se guardará en una posición a. El intérvalo para un nodo a será [padre(a)..a] de tal manera que padre(a) sea el resultado de restar bms(a 2 ) a 'a 2 '. Entonces: padre(a) = a 2 - bms(a 2 ). Algo a denotar es que los nodos padres siempre serán potencias de a, es decir, [1,2,4,8,16..], con la excepción de 0, que es el padre primario. Sin embargo, aunque de esta manera sea de hijo a padre, una vez que se implementa en código es de padre a hijo, de tal manera que primero almacenemos el valor correspondiente al padre en todos sus hijos y, luego, añadiremos el valor de los nodos hijos aplicando la operación al valor ya añadido y al del nodo hijo que está siendo introducido.         Cabe remarcar que esta estructura de datos se utiliza con grupos. Decimos que un conjunto de números es un grupo si es que es un monoide y además tiene un elemento inverso. Entonces, un conjunto S que es un grupo cumple con las siguientes características:
Para que sea un monoide:

Para todo par de números (a,b) que pertenecen a S, el resultado de la operación 'o' entre ellos debe también pertenecer a S. Es decir, aob=c y 'c' pertenece a S. Esta es el la propiedad de operación interna.
Para toda operación 'o' que se realice con los números (a,b,c) que pertenecen a S, el orden de realización no debe afectar el resultado. Es decir, ao(boc) = (aob)oc. Esta es la propiedad asociativa.
Un elemento 'e' debe pertenecer a S tal que la operación entre este elemento y cualquier otro número 'a' del conjunto, nos devuelva el elemento 'a'. Es decir, aoe=a. Esta es la propiedad neutra.
Para que sea un grupo:
Cada elemento 'a' del conjunto debe tener un inverso 'I' tal que la operación o entre estos dos elementos nos devuelva el elemento neutro 'e'. Es decir, aoI=e y Ioa=e. Esta es la propiedad inversa.
Ejemplo


### Controles


</div>
