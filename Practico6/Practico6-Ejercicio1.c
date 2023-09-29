
/*
1. Analizar los siguientes casos y proponer soluciones de cómo guardar la información para
posteriormente realizar lo que se pide. En todos los casos indicar
- Nombre y tipo de la estructura de datos
- Dimensión de la estructura seleccionada (Justificar la dimensión)
- Ejemplo gráfico de la información a almacenar

Nota: No se pide realizar códigos

a) Necesito ingresar 7 números, luego sumar los números ingresados. Y finalmente imprimir
los sumandos y el resultado en la misma línea.

Respuesta:

Solucion:
-Crear un arreglo de dimension 8 para almacenar los 7 numeros y la suma de ellos.
-Hacer una repeticion para almacenar los 7 y al mismo tiempo ir sumando los numeros en la posicion [7] del arreglo.
-Mostrar en pantalla los numeros sumados y la suma de los mismos.


- Nombre: numeros de tipo entero
- Dimension 8. Justificacion: 7 lugares para los 7 numeros a ingresar y el ultimo para guardar el valor de la suma de los numeros.
-
|   nombre   |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |   Tipo  |
|   numeros  |     |     |     |     |     |     |     |     |     |  entero |

b) Necesito ingresar 15 números reales y luego sumar esos números. Y finalmente imprimir
los sumandos y el resultado en la misma línea.

Respuesta:

-Crear un arreglo de dimension 16 para almacenar los 15 numeros y la suma de ellos.
-Hacer una repeticion para almacenar los 7 y al mismo tiempo ir sumando los numeros en la posicion [7] del arreglo.
-Mostrar en pantalla los numeros sumados y la suma de los mismos.


- Nombre: numeros de tipo entero
- Dimension 8. Justificacion: 7 lugares para los 7 numeros a ingresar y el ultimo para guardar el valor de la suma de los numeros.
-
|   nombre   |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |  11  |  12  |  13  |  14  |  15  |   Tipo  |
|   numeros  |     |     |     |     |     |     |     |     |     |     |      |      |      |      |      |      |  entero |




c) Ingresar las letras de su primer nombre y luego imprimir “mi nombre es: …….”

Respuesta:

-Crear un arreglo de dimension 20 (o a convenir) de tipo caracter llamado nombre_persona para almacenar las letras del nombre.
-Repetir la cantidad de veces necesaria para ingresar letra por letra.
-Mostrar en pantalla la inicial del nombre (nombre_persona[0]).

|       nombre      |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |  11  |  12  |  13  |  14  |  15  |   Tipo  |
|   nombre_persona  |     |     |     |     |     |     |     |     |     |     |      |      |      |      |      |      |   char  |

d) Ingresar día, mes y año de nacimiento de 20 personas. Luego el usuario ingresa un
número y el programa debe imprimir la fecha de nacimiento de la persona ingresada en el
orden indicado por el número ingresado por el usuario. Definir dos formas distintas de
almacenar la información.

-Crear un arreglo de tipo entero con dimension 60 llamado nacimiento[]. en el mismo de a tres lugares guardara dia, mes y año.
-Repetir en un for con paso 3 para almacenar las fechas de todas las personas.
-Luego pedir el numero de persona, multiplicarlo por tres y mostrar los valores de arreglo de forma nacimiento[i], nacimiento[i+1], nacimiento[i+2].


|               |     Persona 1   |     Persona 2   |     Persona 3   |      Persona 4    |      Persona (n)   |     ...        |
|     nombre    |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |  11  |  12  |  13  |  14  |  15  |   Tipo  |
|   nacimiento  | dia | mes | año | dia | mes | año | dia | mes | año | dia |  mes |  año |  dia |  mes |  año |  ... |    int  |
*/