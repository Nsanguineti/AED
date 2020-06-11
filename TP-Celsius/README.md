### Nahuel Sanguineti - K1051 - 164.421-0
---
# TP opcional - Funciones y comparación de valores en punto flotante - Celsius
## Objetivo

* Demostrar el manejo de funciones y punto flotante.
---
## Análisis del problema
### Transcripción del problema 

* Diseñar un programa que, al ingresar una magnitud en Farehnheit, calcule su equivalente en Celsius.
* Se encuentran 2 sub-problemas que requieren solución: 
  * *En primer lugar, el valor de la fracción 5/9 versus la división entera de la expresión 5/9 en C++.*
  * *En segundo lugar, la representación no precisa de los tipos flotantes.*
  
## Restricciones

* Las pruebas deben realizarse con 'assert'.
* Los prototipos deben ser: 
  * *double Celsius(double);*
  * *bool AreNear(double, double, double = 0.001);*
 
## Hipótesis del trabajo

* Diseñamos una función que, al ingresar un grado de tipo real en magnitud Farehnheit, calcule el equivalente real en magnitud Celsius.
* Debido a que las representacion de números reales en c++ no es del todo precisa, crearemos y usaremos una función del tipo booleano, para trabajar dentro de un margen de error ínfimo gracias a la imprecisión de los cálculos hechos.
* Las pruebas se llevarán a cabo con 'assert'.
---
## Diseño de la solución

### Léxico 

celsius: ℝ → 𝔹/celsius(f)=5/9.(f-32)

![AreNear](https://github.com/Nsanguineti/AED/blob/master/TP-Celsius/Función%20AreNear.png)






