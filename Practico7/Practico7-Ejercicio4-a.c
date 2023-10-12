//3 Dado el siguiente codigo




/*
La idea de la función permuta es intercambiar los valores de pact1 y pact2 ¿esto se cumple?
Realizar la tabla de ejecución y justificar su respuesta
*/

#include<stdio.h>

int pact1 = 110, pact2 = 225;

int permuta(){
int temp;
temp = pact1;
pact1 = pact2;
pact2 = temp;
return(0);
}

int main ( ) {
printf("El valor de pact1 es %d y el valor de pact2 es %d \n", pact1, pact2);
permuta();
printf("El valor de pact1 es %d y el valor de pact2 es %d \n", pact1, pact2);
return(0);
}

/*
Justificacion, al terminar de hacer la tabla de ejecucion nos percatamos de que los valores de las variables pact1 y pact2 no modificaron los valors, lo cual, como resultado no se realiza la permutacion.
*/