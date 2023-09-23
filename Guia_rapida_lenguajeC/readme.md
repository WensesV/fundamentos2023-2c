
# Manual de Lenguaje C

Guia de sintaxis para programar en lenguaje C

## Variables en C

- Una variable es un espacio de memoria con un nombre asociado que se utiliza para almacenar y manipular datos en un programa C.
- Las variables pueden cambiar de valor durante la ejecución del programa.
- Debes declarar una variable antes de usarla, especificando su tipo de datos (como int, float, char, etc.) y un nombre.
- Puedes asignar valores a las variables en cualquier momento y modificar su contenido durante la ejecución del programa.
- Para definir una variable, primero anunciamos el tipo de variable, seguido del nombre de la misma.

Ejemplo:

```bash
  int num1 = 14;
```

## Constantes en C

- Una constante es un valor que no puede cambiar una vez que se le asigna un valor en el programa.
- Las constantes pueden ser numéricas (enteras o de punto flotante), caracteres o incluso cadenas de caracteres.
- En C, puedes definir constantes utilizando la palabra clave ‘const’.
Ejemplo: 

```bash
  const int numero_entero = 3;
```

## Tipos de variables
- Enteros(int)
- Flotante(float): Se utilizan para almacenar números con decimales (Números con coma)
- Caracteres(char): se utilizan para almacenar caracteres individuales, como letras, números o símbolos.
- Booleanos(bool): Valores booleanos (Verdadero o falso/True – False)

## Asignar un valor a una variable
Para asinar una variable a una variable simplemente debemos nombrar a la variable, escribir un signo "=" y segidamente le valor a inggresar en la variable
como se puede apreciar en los siguientes ejemplos de variables.


Ejemplos con diferentes tipos de variables: 

    int edad = 30;
    float altura = 1.75;
    char letra = 'W';
    bool esVerdadero = true;

## Función printf()

Se utiliza para imprimir texto y valores en la consola o en la salida estándar. Es una de las funciones más utilizadas en C para mostrar información 
al usuario o para depuración. La función printf permite formatear la salida de acuerdo con un patrón específico.

### Sintaxis printf()

    Int num = 7;
    printf("Texto a imprimir con el numero --- %d", numero);

Todo lo que está entre comillas es el texto a mostrar en pantalla, %d es formato que se especifica con una letra (En este caso es d) y, después de la coma, la variable llamada 'numero' que sería de la cual sacamos el valor 7. 
Lo que se debería ver en pantalla es:

    Texto a imprimir con el numero --- 7

Los especificadores de formato comunes que puedes utilizar con printf incluyen:

- %d: Imprime un entero decimal.
- %f: Imprime un número flotante.
- %c: Imprime un carácter.
- %s: Imprime una cadena de caracteres.

Ejemplo 1:

    #include <stdio.h>

    int main() {
        int numero = 42;
        float decimal = 3.141592;
        char letra = 'A';
        char nombre[] = "Juan";

        printf("Número entero: %d\n", numero);
        printf("Número decimal: %.2f\n", decimal);
        printf("Carácter: %c\n", letra);
        printf("Cadena de caracteres: %s\n", nombre);

        return 0;
    }

  Muestra en pantalla:

    Número entero: 42
    Número decimal: 3.14
    Carácter: A
    Cadena de caracteres: Juan


Ejemplo 2 (Con varias variables en una sola línea)

    #include <stdio.h>

    int main() {
        int numero = 42;
        float decimal = 3.141592;
        char letra = 'A';
    
        printf("Número entero: %d, Número decimal: %.2f,    Carácter: %c\n", numero, decimal, letra);
    
        return 0;
    }

Muestra en pantalla

    Número entero: 42, Número decimal: 3.14, Carácter: A

## Operaciones Matematicas/Algebraicas

- Suma (+): Se utiliza para sumar dos valores.

      int resultado = 5 + 3; // resultado contendrá 8

- Resta (-): Se utiliza para restar un valor de otro.

      int resultado = 10 - 4; // resultado contendrá 6

- Multiplicación (*): Se utiliza para multiplicar dos valores.

      int resultado = 6 * 7; // resultado contendrá 42

- División (/): Se utiliza para dividir un valor por otro. Si los valores son enteros, la división será entera (el resultado si es bolueano tendrá un cero después de una coma).

      int resultado = 10 / 3; // resultado contendrá 3 (división entera)

- Módulo (%): Devuelve el residuo o resto de una división entera.(Deben ser si o si enteros)

      int resultado = 10 % 3; // resultado contendrá 1 (residuo de 10 / 3)

- Operadores de incremento (++) y decremento (--): Se utilizan para aumentar o disminuir el valor de una variable en 1.

      int contador = 5;
      contador++; // Incrementa el valor de contador a 6
      contador--; // Decrementa el valor de contador a 5 nuevamente

- Parentesis (): Se pueden utilizar en combinación para realizar operaciones más complejas. También puedes usar paréntesis para controlar el orden de evaluación de las operaciones, al igual que en álgebra.

      int resultado = (4 + 2) * 3; // resultado contendrá 18 (4 + 2) se evalúa primero, luego se multiplica por 3

## Expresiones Lógicas
Una expresión lógica es una combinación de operadores lógicos y operandos que produce un valor booleano (verdadero o falso) como resultado. Estas expresiones 
se utilizan en estructuras de control condicionales. como if, while, for, entre otras, para tomar decisiones basadas en condiciones.

- Operadores Relacionales: Los operadores relacionales se utilizan para comparar dos valores y producir un resultado booleano (true/false).

        == (igual a): Comprueba si dos valores son iguales.
        != (diferente de): Comprueba si dos valores son diferentes.
        < (menor que): Comprueba si el valor de la izquierda es menor que el valor de la derecha.
        > (mayor que): Comprueba si el valor de la izquierda es mayor que el valor de la derecha.
        <= (menor o igual que): Comprueba si el valor de la izquierda es menor o igual al valor de la derecha.
        >= (mayor o igual que): Comprueba si el valor de la izquierda es mayor o igual al valor de la derecha.

- Operadores Lógicos: Se utilizan para combinar o modificar expresiones lógicas

          && (y lógico): Devuelve verdadero si ambas expresiones son verdaderas.
          || (o lógico): Devuelve verdadero si al menos una de las expresiones es verdadera.
          ! (no lógico): Invierte el valor de una expresión, convirtiendo verdadero en falso y viceversa.


## Condicional IF/IF-ELSE

Se utilizan para tomar decisiones en un programa. Te permiten ejecutar ciertas partes de código si una condición dada es verdadera (true) y 
ejecutar otras partes de código si la condición es falsa (false).

Sintaxis IF

    If(expresion_logica){
        // Codigo a ejecutar;
    }

Sintaxis IF/ELSE

    If(expresion_logica){ 		//Si se cumple
    	// Codigo a ejecutar	//realizo esto
    }
    Else{		//Si no se cumple
    	//Codigo a ejecutar	//realizo esto otro
    }

Ejemplo 1

    int numero = 7;
    if (numero % 2 == 0) {
        printf("El número es par.\n");
    } else {
        printf("El número es impar.\n");
    }

## Bucle WHILE

Se utiliza para repetir un bloque de código mientras una expresión lógica dada sea verdadera (true).

Sintaxis WHILE

    while (expresion_logica) {
        // Código a repetir mientras la expresión lógica sea    verdadera
    }

Ejemplo 1

    #include <stdio.h>
    int main() {
        int i = 1; // Inicializamos una variable contador
        while (i <= 5) { // Mientras i sea menor o igual a 5
            printf("%d\n", i); // Imprimimos el valor de i
            i++; // Incrementamos el valor de i en 1
        }
        return 0;
    }

## Repetición FOR

Es una estructura de control que se utiliza para repetir un bloque de código, un número específico de veces. El bucle de repetición ‘for’ es 
especialmente útil cuando se conoce la cantidad exacta de veces que deseas que se ejecute un bloque de código. la misma lleva una variable que nos sirve de guia para contar las repeticiones
y seguir la ejecicion de las mismas hasta que deje de complirse cierta condicion.

La repeticion for consta de 3 partes fundamentales

- Inicialización: Aquí se establece una variable de control y se le asigna un valor inicial. Esta parte se ejecuta solo una vez al principio. Normalmente se empieza a contar desde el 0.

- Condición: Es una expresión lógica que se evalúa antes de cada iteración del bucle. Si la condición es verdadera, el bucle continúa ejecutándose; si es falsa, el bucle se detiene. Generalmente si sabemos cuantas veces vamos a repetir, se utiliza x < nro_de_repeticiones.

- Incremento o decremento: Esto es lo que se hace al final de cada ejecucion del bucle para actualizar la variable de control. Generalmente, se utiliza para aumentar (i++) o disminuir(i--) el valor de la variable de control. 

Sintaxis FOR

    for (inicialización; condición; incremento/decremento) {
        // Código a repetir
    }

Ejemplo 1

    #include <stdio.h>
    int main() {
        for (int i = 1; i <= 5; i++) {
            printf("%d\n", i);
        }
        return 0;
    }

Muestra por pantalla

    1
    2
    3
    4
    5
