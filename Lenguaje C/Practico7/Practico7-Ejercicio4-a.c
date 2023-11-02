/*
//3 Dado el siguiente codigo

#include<stdio.h>
int permuta (int pf1, int pf2) {
int temp;
temp = pf1;
pf1 = pf2;
pf2 = temp;
return(0);
}
int main ( ) {
int pact1 = 110, pact2 = 225;
printf (“El valor de pact1 es %d y el valor de pact2 es %d \n”, pact1, pact2);
permuta (pact1, pact2);
printf (“El valor de pact1 es %d y el valor de pact2 es %d \n”, pact1, pact2);
return (0);
}

La idea de la función permuta es intercambiar los valores de pact1 y pact2 ¿esto se cumple?
Realizar la tabla de ejecución y justificar su respuesta
*/

#include <stdio.h>
#include <stdlib.h>

int pact1 = 110, pact2 = 225;

int permuta(){
int temp;
temp = pact1;
pact1 = pact2;
pact2 = temp;
return(0);
}

int main() {
printf("El valor de pact1 es %d y el valor de pact2 es %d \n", pact1, pact2);
permuta();
printf("El valor de pact1 es %d y el valor de pact2 es %d \n", pact1, pact2);
return(0);
}

/*
Justificacion, al terminar de hacer la tabla de ejecucion nos percatamos de que los valores de las variables pact1 y pact2 no modificaron los valors, lo cual, como resultado no se realiza la permutacion.
*/