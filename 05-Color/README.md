### Nahuel Sanguineti - K1052 - 164.421-0
---
# TP #05-Color
## Objetivo

  * Demostrar capacidad de construcción de tipos compuestos basados en tipos existentes atómicos.
---
# Análisis del Problema
### Transcripción del problema
 
  * Diseñar un tipo Color basado en el modelo RGB, con tres canales de 8 bits. Todo color está compuestos por 3 componentes: intensidad de red(rojo), de green(verde) y de blue(azul). Cada intensidad está en el rango [0,255]. Definir los valores para rojo, azul, verde, cyan, magenta, amrillo, negro y blanco. Dos colores se pueden mezclar, lo cual produce un nuevo color que tiene el promedio de intensidad para cada componente.
  
### Restricciones

  * Las operaciones de proyección para red, green y blue se implementan con acceso directo a los componentes, no es necesario definir getters especiales. Por l amisma razón, los setters no son necesarios.
  * Utilizar el tipo *uint8_t* de *cstdint*, si no es posible, usar *unsigned char*.
  * Los colores primarios, secundarios, negro y blanco deben implementarse como ocho variables declaradas fuera de main y de toda función, con el calificador *const* para que no puedan modificarse.
  * Implementar la operación *IsIgual* que retorna *true* si un color es iugal a otro,si no, *false*.
---
### Hipótesis de trabajo

  * Se definirán los colores *red, green & blue* que estarán compuestos por tres canales de 8 bits cada uno, siguiendo el modelo de color RGB.
  * Se definirán todos los colores fuera de cualquier función con la constante `const` para que los mismos no puedan ser modificados por nadie. 
  * Se definirán los prototipos de las funciones y las funciones para poder hacer funcionar el programa.
  ---
### Crédito extra para la resolución

  * La operación `Mezclar` mezcla en partes iguales; desarrollar una variante de la operación que permita indicar las proporciones de las partes.
  * Desarrollar las operaciones `sumar` y `restar` que dados dos colores suma o resta la intensidad de cada canal, siempre dando resultados en el rango [0,255]. Utilizá estas operaciones para inciliar los colores secundarios, blanco y negro.
  * Desarrollar la operación `GetComplementario` que dado un color obtiene el complemento u opuesto. Por ejemplo, el complemento de rojo es cyan.
  * Desarrollar la operación `GetHtmlHex` que genera un string con la representación hexadecimal para HTML de un color.
  * Desarrollar la operación `GetHtmlRgb` que genera un string con la representación rgb para HTML de un color.
  * Codificar la funcion `CrearSvgConTextoEscritoEnAltoContraste` que dado un nombre archivo sin extensión, un texto y un color de letra, genera un archivo SVG con el texto en un color y fondo en su complementario.
  * Responder en *readme.md* porqué se debe usar `uint8_t`, es correcto usar `unsigned char` y no `char`.
  ---
### Uso de `uint8_t`

  * El uso de `uint8_t` permite usar el ancho de cada unidad direccionable con 8 bits de valor y sin bits de relleno, permitiendo de esta manera que el valor máximo del dato será de 255.
  
### Usar `unsigned char` y no `char`

  * De la misma manera que `uint8_t`, `unsigned char` tiene un valor de representación de [0,255], siendo éste el valor de representación de los colores en formato RGB.
  
  
