#include<stdio.h>

int main(){
    const int C = 4;
    char vrC = 'p';
    float vrF;
    int vrE = 15;
    vrF = vrE/C; // realiza la division y la asigna a un numero entero. Una de las dos variables involucradas en la division debe de ser de tipo real para obtener un valor real.
    vrE = vrE%C; // nos devuelve el modulo // Caso de modulos deben de ser las dos variables de tipo entero
    printf("Los valores finales son: \n");
    printf("%f --- %f\n", vrE, vrF);
    printf("El caracter es %c y su valor en la tabla ASCII es %d\n", vrC, vrC);
    getchar();
    return(0);
}

/*
Se pide:
1.1¿¡.¿Que tipo de objeto es C? ¿Cual es la diferencia con variables?
1.2.¿De que tipo son las variables vrE, vrC y vrF?
1.3.¿De que tipo es el resultado de la division?
1.4.Indicar los valores finales de vrE y vrF.
    ¿vrF tiene el valor que se espera? En caso de que no sea asi, ¿Como lo solucionaria?
1.5.¿Que se muestra en pantalla luego de ejecutar todos los printf
*/

/*Respuestas:
1.1. el objeto C es de tipo constante, a comparacion de una variable durante el transcurso del codigo no puede cambiar su valor.
1.2.    vrE es de tipo entero
        vrC es de tipo Caracter
        vrF es de tipo real
1.3. El resultado de la division es de tipo real.
1.4. -El valor final de la variable vrF es: 3.000000
     -El valor final de la variable vrE es: 3

     Se espera un numero real y nos devuelve un numero entero, para solucinarlo algunas de las variables, tante el divisor como el dividendo deberia de ser de tipo real
1.5.Muestra en pantalla

Los valores finales son:
3 --- 3.000000
El caracter es p y su valor en la tabla ASCII es 112

1.6. Completar la tabla y realizar la ejecucion

|   Sentencias  |   C   |   vrC   |   vrE    |   vrF   |   Pantalla   |
 const int C = 4    4






*/