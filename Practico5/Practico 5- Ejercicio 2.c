// Ejercicio 2 - Dadas el siguiente programa codificado en el Lenguaje C: 

#include<stdio.h>
int main ( ) {
    const char C = 'q';
    int Ci;
    char varc=113;
    Ci = varc-32;
    printf("El caracter es %c y su valor en la tabla ASCII es %d\n", varc, varc );
    printf("%c ----- %c", varc, varc-32 );
    getchar(); //No es necesario incluir esta linea. Esta agregada para que al compilarlo en Visual Studio Code nos muestre la pantalla final y se cierre con un enter.
    return (0);
}

/*
2.1.Indicar de qué tipo son las variables Ci y varc.
2.2.¿Son los mismos objetos varc y C? ¿Tienen igual o diferente valor?
2.3.¿Qué se muestra en la pantalla luego de ejecutar todos los printf?
2.4.Realizar la tabla de ejecución (tener en cuenta la tabla del ejercicio 1.6).

Respuestas:
2.1. Ci es una variable de tipo entero
     varv es una variable de tipo caracter
2.2. No son los mismos objetos, uno es un numero entero y el otro es un caracter/letra. Tienen el mismo valor ya que 'q' en la tabla ASCII tiene valor de 113, el cual es el mismo valor numerico de la variable C. 
2.3. Pantalla
    El caracter es q y su valor en la tabla ASCII es 113
    q ----- Q

2.4. Tabla de ejecucion
|   Sentencias   |   C   |    Ci   |   varc   |                     Pantalla                       |
|const char C='q'|(char)q|         |          |                                                    |
|int Ci          |       |  (int)  |          |                                                    |
|char varc=113   |       |         |   113    |                                                    |
|Ci = varc-32    |       |    81   |          |                                                    |
|prinf()         |       |         |          |El caracter es q y su valor en la tabla ASCII es 113|
|prinf()         |       |         |          |q ----- Q                                           |
*/