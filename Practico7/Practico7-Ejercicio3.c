//3 Dado el siguiente codigo


#include<stdio.h>

int permuta (int pf[]) {
    int temp;
    temp = pf[0];
    pf[0] = pf[1];
    pf[1] = temp;
    return(0);
}


int main(){
    int pact[2];
    pact[0] = 110;
    pact[1] = 225;
    printf("El valor de pact[0] es %d y el valor de pact[1] es %d \n", pact[0], pact[1]);
    permuta(pact[]);
    printf("El valor de pact[0] es %d y el valor de pact[1] es %d \n", pact[0], pact[1]);
    getchar();
    return (0);
}

/*
La idea de la función permuta es intercambiar los valores de pact1 y pact2 ¿esto se cumple?
Realizar la tabla de ejecución y justificar su respuesta.

Justificacion, al terminar de hacer la tabla de ejecucion nos percatamos de que los valores de las variables pact1 y pact2 no modificaron los valors, lo cual, como resultado no se realiza la permutacion.




*/