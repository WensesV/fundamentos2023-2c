

# Manual de Lenguaje C

Guia de sintaxis para programar en lenguaje C

## Librerias
En lenguaje C, las librerías (también conocidas como bibliotecas) son conjuntos de funciones predefinidas que proporcionan una amplia variedad de capacidades y características para facilitar el desarrollo de programas. Estas librerías están disponibles para los programadores las utilicen en sus programas C.
En este curso utilizamos las librerias **stdio.h** (para la entrada de datos) y **stdlib.h** (proporciona una variedad de funciones y tipos de datos esenciales para la programación). Las mismas deben ser descritas al comienzo del programa

sintaxis

    #include <nombre_de_la_libreria>



Ejemplo

    #include <stdio.h>
    #include <stdlib.h>


## Función Main

Es el algoritmo principal del programa. Todos los programas deben tener una función Main. Es el punto de inicio dónde se ejecutan el programa. La misma al final debe tener un **return 0;**

### Sintaxis de un programa 



    #include <studio.h> //librerias

    int main(){


         // código del programa


         return 0;   // siempre debe estar incluida en la función Main 
    }



## Variables en C

- Una variable es un espacio de memoria con un nombre asociado que se utiliza para almacenar y manipular datos en un programa C.
- Las variables pueden cambiar de valor durante la ejecución del programa.
- Debes declarar una variable antes de usarla, especificando su tipo de datos (como int, float, char, etc.) y un nombre.
- Puedes asignar valores a las variables en cualquier momento y modificar su contenido durante la ejecución del programa.
- Para definir una variable, primero anunciamos el tipo de variable, seguido del nombre de la misma.

Ejemplo:

```bash
  int num1;
  char letra;
```


## Tipos de variables
- Enteros __(int)__
- Flotante __(float)__: Se utilizan para almacenar números con decimales (Números con coma)
- Caracteres __(char)__: se utilizan para almacenar caracteres individuales, como letras, números o símbolos.
- Booleanos __(bool)__: Valores booleanos (Verdadero o falso/True – False)

## Asignar un valor a una variable
Para asignar una variable a una variable simplemente debemos nombrar a la variable, escribir un signo "=" y segidamente le valor a inggresar en la variable
como se puede apreciar en los siguientes ejemplos de variables.


Ejemplos con diferentes tipos de variables: 

    int edad = 30;
    float altura = 1.75;
    char letra = 'W';
    bool esVerdadero = true;

## Constantes en C

- Una constante es un valor que no puede cambiar una vez que se le asigna un valor en el programa.
- Las constantes pueden ser numéricas (enteras o de punto flotante), caracteres o incluso cadenas de caracteres.
- En C, puedes definir constantes utilizando la palabra clave ‘const’.
Ejemplo: 

```bash
  const int numero_entero = 3;
```

## Función printf()

Se utiliza para imprimir texto y valores en la consola o en la salida estándar. Es una de las funciones más utilizadas en C para mostrar información 
al usuario o para depuración. La función printf permite formatear la salida de acuerdo con un patrón específico.

### Sintaxis printf()

    Int num = 7;
    printf("Texto a imprimir con el numero --- %d", numero);

Todo lo que está entre comillas es el texto a mostrar en pantalla, %d representa un valor de una variable y la letra representa el tipo de dato/formato formato(En este caso es d que representa los números enteros) y, después de la coma, la variable llamada 'numero' que sería de la cual sacamos el valor 7.

Entonces dónde va %d, se escribirá el valor de la variable.

Lo que se debería ver en pantalla es:

    Texto a imprimir con el numero --- 7

Los especificadores de formato comunes que puedes utilizar con printf son:

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

## funcion scanf() y getchar() - ingresar datos

- **scanf()**: se utiliza para leer un valor ingresado por el usuario con su teclado y almacenarlo el valor en la variable
- **getchar()**: se utiliza para consumir o generar un salto de línea (o cualquier otro carácter) que queda en el búfer de entrada después de la lectura de scanf. Esto asegura que la entrada esté lista para futuras operaciones de lectura sin problemas.

### Sintaxis para ingresar datos

    scanf("%formato", &variable);
    getchar();

Ejemplo

    #include <stdio.h>

    int main() {
        int numero;
        char caracter;

        printf("Ingresa un número entero: ");
        scanf("%d", &numero);                   //Lee lo ingresado y almacena en la variable numero
        getchar(); // Limpia el búfer de entrada (consume el carácter de salto de línea)

        printf("Ingresa un carácter: ");
        scanf("%d", &caracter)
        getchar();

        printf("Número entero: %d\n", numero);
        printf("Carácter: %c\n", caracter);

        return 0;
    }




## Operaciones Matematicas/Algebraicas

- **Suma (+)**: Se utiliza para sumar dos valores.

      int resultado = 5 + 3; // resultado contendrá 8

- **Resta (-)**: Se utiliza para restar un valor de otro.

      int resultado = 10 - 4; // resultado contendrá 6

- **Multiplicación (*)**: Se utiliza para multiplicar dos valores.

      int resultado = 6 * 7; // resultado contendrá 42

- **División (/)**: Se utiliza para dividir un valor por otro. Si los valores son enteros, la división será entera (el resultado si es bolueano tendrá un cero después de una coma).

      int resultado = 10 / 3; // resultado contendrá 3 (división entera)

- **Módulo (%)**: Devuelve el residuo o resto de una división entera.(Deben ser si o si enteros)

      int resultado = 10 % 3; // resultado contendrá 1 (residuo de 10 / 3)

- **Operadores de incremento (++) y decremento (--)**: Se utilizan para aumentar o disminuir el valor de una variable en 1.

      int contador = 5;
      contador++; // Incrementa el valor de contador a 6
      contador--; // Decrementa el valor de contador a 5 nuevamente

- **Parentesis ()**: Se pueden utilizar en combinación para realizar operaciones más complejas. También puedes usar paréntesis para controlar el orden de evaluación de las operaciones, al igual que en álgebra.

      int resultado = (4 + 2) * 3; // resultado contendrá 18 (4 + 2) se evalúa primero, luego se multiplica por 3

## Expresiones Lógicas
Una expresión lógica es una combinación de operadores lógicos y operandos que produce un valor booleano (verdadero o falso) como resultado. Estas expresiones 
se utilizan en estructuras de control condicionales. como if, while, for, entre otras, para tomar decisiones basadas en condiciones.

- **Operadores Relacionales**: Los operadores relacionales se utilizan para comparar dos valores y producir un resultado booleano (true/false).

        == (igual a): Comprueba si dos valores son iguales.
        != (diferente de): Comprueba si dos valores son diferentes.
        < (menor que): Comprueba si el valor de la izquierda es menor que el valor de la derecha.
        > (mayor que): Comprueba si el valor de la izquierda es mayor que el valor de la derecha.
        <= (menor o igual que): Comprueba si el valor de la izquierda es menor o igual al valor de la derecha.
        >= (mayor o igual que): Comprueba si el valor de la izquierda es mayor o igual al valor de la derecha.

- **Operadores Lógicos**: Se utilizan para combinar o modificar expresiones lógicas

          && (y lógico): Devuelve verdadero si ambas expresiones son verdaderas.
          || (o lógico): Devuelve verdadero si al menos una de las expresiones es verdadera.
          ! (no lógico): Invierte el valor de una expresión, convirtiendo verdadero en falso y viceversa.


## Condicional IF/IF-ELSE

Se utilizan para tomar decisiones en un programa. Te permiten ejecutar ciertas partes de código si una condición dada es verdadera (true) y
ejecutar otras partes de código si la condición es falsa (false).

### Sintaxis IF:

    If(expresion_logica){
        // Codigo a ejecutar;
    }

### Sintaxis IF/ELSE:

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

### Sintaxis WHILE:

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

- **Inicialización**: Aquí se establece una variable de control y se le asigna un valor inicial. Esta parte se ejecuta solo una vez al principio. Normalmente se empieza a contar desde el 0.

- **Condición**: Es una expresión lógica que se evalúa antes de cada iteración del bucle. Si la condición es verdadera, el bucle continúa ejecutándose; si es falsa, el bucle se detiene. Generalmente si sabemos cuantas veces vamos a repetir, se utiliza x < nro_de_repeticiones.

- **Incremento o decremento**: Esto es lo que se hace al final de cada ejecucion del bucle para actualizar la variable de control. Generalmente, se utiliza para aumentar (i++) o disminuir(i--) el valor de la variable de control. 

### Sintaxis FOR

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
## Arreglos
Es una estructura de datos que permite almacenar una colección de elementos del mismo tipo de datos bajo un solo nombre. Cada elemento en un arreglo se almacena en una ubicación de memoria consecutiva y se accede a ellos mediante un índice.

Sintaxis

        tipo_de_datos nombre[dimension];

Ejemplo

        int numeros[5]; // Declaración de un arreglo de enteros con capacidad para 5 elementos

 La cantidad de elementos que tiene un arreglo es declarada como la **dimension** del mismo. Para acceder a los elementos de un arreglo debemos utilizar una variable de indice para saber cual de los elementos vamos a ingresar/leer en del arreglo.

 A tener en cuenta, supongamos que nosotros declaramos un arreglo de dimension 4. El mismo empieza con el indice desde el 0, y termina en el 3 dandonos asi 4 elementos a guardar. Es decir, que si nosotros queremos guardar informacion para el elemento 1 deberiamos escribir arreglo[0], para el segundo elemento arreglo[1] para el tercero arreglo[2] y para el elemento 4, arreglo[3].

## Asignar un valor a un arreglo

Al igual que al asignar un valor a una variable. Para asignar un valor o elemento a un arreglo en x posicion. Deberemos utilzar un signo "=". Del lado izquierdo deberemos enunciar el arreglo con el indice (posicion) a asignar, y de lado derecho lo que vayamos a asignar al arreglo.

Sintaxis

        nombre_del_arreglo[indice] = valor_a_asignar;

Ejemplo

        #include <stdio.h>

        int main(){
            int arreglo[5];
            arreglo[0] = 1;
            arreglo[1] = 23;
            arreglo[2] = 42;
            arreglo[3] = 52;
            arreglo[4] = 758;
            ...
        return(0);
        }

## Mostrar por pantalla elementos en arreglo con printf()

Del mismo modo que mostrabamos valores en pantalla de los arreglos, utilizaremos el mismo metodo pero con un indice (posicion) del arreglom para mostrar dicho elemento

sintaxis

        printf("El contenido del arreglo es: #formato \n", nombre_del_arreglo[indice]);

ejemplo (agregar en el ejemplo anterior (asignar arreglo)) "..."

        printf("El arreglo en la posicion 1 tiene el numero: %d \n", arreglo[1]);
        printf("El arreglo en la posicion 4 tiene el numero: %d \n", arreglo[4]);

## scanf() y getchar() para arreglos

Utilizaremos un metodo identico al de asignar valores por teclado como haciamos con scanf + getchar y variables, lo unico que debemos tener en cuenta es la posicion (indice) en la que se guarda lo ingresado en el arreglo.

Sintaxis

        tipo nombre_del_arreglo[dimension];
        scanf("%formato", &nombre_del_arreglo[indice]);
        getchar();

Ejemplo

        #include <stdio.h>

        int main(){
            int arreglo[3];
            printf("Primera posicion\n");
            scanf("%d", &arreglo[0]);
            getchar();
            printf("Segunda posicion\n");
            scanf("%d", &arreglo[1]);
            getchar();
            printf("Tercera posicion\n");
            scanf("%d", &arreglo[2]);
            getchar();
        return(0);
        }


## ingreso de arreglos con una variable como indice

Supongamos que tenemos un arreglo de dimension 5 similar a un ejercicio anterior, pero queremos hacerlo ingresadno valores por teclado, a continuacion le mostraremos como se haria sin una variable de indice.


        #include <stdio.h>

        int main(){
            int arreglo[5];
            printf("Posicion 0\n");
            scanf("%d", &arreglo[0]);
            getchar();

            printf("Posicion 1\n");
            scanf("%d", &arreglo[1]);
            getchar();

            printf("Posicion 2\n");
            scanf("%d", &arreglo[2]);
            getchar();

            printf("Posicion 3\n");
            scanf("%d", &arreglo[3]);
            getchar();

            printf("Posicion 4\n");
            scanf("%d", &arreglo[4]);
            getchar();
        return(0);
        }


Podemos reducir las lineas de codigo utilizando una repeticion for y una variable que vaya tomando los valores desde el 0 hasta el 4 en si ejecucion. La variable i dentro de una repeticion for es capas de asumir estos valores durante la ejecicion del mismo y es la que utilizaremos de indice para poder rellenar todos los espacios del arreglo

        #include <stdio.h>

        int main(){
            int arreglo[5];
            int i;
            for(i=0; i<5 ; i++){
                printf("Posicion %d\n", i);
                scanf("%d", &arreglo[i]);
                getchar();
            }
            printf("A continuacion mostraremos el contenido del arreglo\n");
            for(i = 0 ; i < 5 ; i++)
                printf("%d \n", arreglo[i])
            return(0);
        }

A tener en cuenta

- Asi como podemos rellenar el arrelo de 0 a 4, tambien podemos hacerlo en el orden inverso(de 4 a 0), o rellenar el arreglo de uno en uno o de dos en dos, etc. Cambiando los parametros del For.




