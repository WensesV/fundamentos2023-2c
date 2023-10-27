#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
        int numeros[6];
    char letras[3];
    int i;

    //letra = 'x';

    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 4;
    numeros[4] = 5;
    numeros[5] = 6;
    printf("El numero del arrelgo es: %d y otro numero que tiene es %d   \n \n \n \n", numeros[4], numeros[1]);


    for(i=0; i < 3; i++){
        printf("Ingrese una letra mayuscula\n");
        scanf("%c", &letras[i]);
        getchar();
        while(letras[i] < 'A' || letras[i] > 'Z'){
            printf("Error ingrese nuevamente\n");
            scanf("%c", &letras[i]);
            getchar();
        }
    }

    printf("Las letra ingresadas son %c - %c - %c", letras[0], letras[1], letras[2]);




    getchar();
    return 0;
}
