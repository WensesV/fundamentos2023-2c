/*
6. Para cada uno de los items del ejercicio 3 se pide:

a) Codificarlos en lenguaje C, mostrando por pantalla el contenido de todas las variables.
b) Realizar el DF de cada uno de los programas escritos en lenguaje C.
c) Pasarlo y ejecutarlo en CodeBlocks.
d) Modificar el código a) para que el usuario ingrese los valores a las variables.
e) Modificar el código b), implementar el mismo código con la sentencia for. */

//Ejercicio 3-a)

// a) Codificarlos en lenguaje C, mostrando por pantalla el contenido de todas las variables.
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VE, ve;
    VE= 0; ve = 0;
    while (VE < 10) {
        printf("Ciclo WHILE\n");
        ve = ve+VE*10;
        VE=VE+2;
        printf("contenido de la variable VE: --- %d \n", VE);
        printf("contenido de la variable ve: --- %d \n", ve);
    }
    printf("Fin del ciclo WHILE\n");
    VE=0;
    printf("contenido final de la variable VE: --- %d \n", VE);
    printf("contenido final de la variable ve: --- %d \n", ve);
    return 0;

}

//b), implementar el mismo código con la sentencia for. 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VE, ve;
    ve = 0;
    for (VE = 0; i < 10; VE=VE+2){
        ve = ve+VE*10;
    }
    VE=0;
    return 0;
}
*/

//Version a)+e)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VE, ve;
    ve = 0;
    for (VE = 0; VE < 10; VE=VE+2){
        printf("Ciclo FOR\n");
        ve = ve+VE*10;
        printf("contenido de la variable VE: --- %d \n", VE);
        printf("contenido de la variable ve: --- %d \n", ve);
    }
    printf("Fin del ciclo WHILE\n");
    VE=0;
    printf("contenido final de la variable VE: --- %d \n", VE);
    printf("contenido final de la variable ve: --- %d \n", ve);
    return 0;
}