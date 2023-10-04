#include <stdio.h>
#include <stdlib.h>

int main(){

    /*int numero; //enteros
    char letra; // charater - caracter
    float real; // numeros fltoantes, reales. 
    int i;

    //%d  
    //%c
    //%f */

    int numeros[6];
    char letras[5];
    int i, cant, contw;
    contw = 0;

    //letra = 'x';

    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 4;
    numeros[4] = 5;
    numeros[5] = 6;
    printf("El numero del arrelgo es: %d y otro numero que tiene es %d   \n \n \n \n", numeros[4], numeros[1]);

    printf("Cuantas letras va a ingresar? (maximo 5) \n");
    scanf("%d", &cant);
    getchar();
    while((cant < 1) || (cant > 5)){
        printf("Error numero incorrecto reintente\n");
        scanf("%d", &cant);
        getchar();
    }


    for(i=0; i < cant; i++){
        printf("Ingrese una letra mayuscula\n");
        scanf("%c", &letras[i]);
        getchar();
        while((letras[i] < 'A') || (letras[i] > 'Z')){
            printf("Error ingrese nuevamente\n");
            scanf("%c", &letras[i]);
            getchar();
        }
        
    }

    for (i = 0; i < cant; i++)
    {
        if(letras[i] == 'W'){
            contw++;
        }
    }

    printf("Los valores del arreglo son \n");

    for(i = 0; i < cant; i++){
        printf(" %c \n", letras[i]);
    }

    printf("La cantidad de veces que aparece la letra W es de: %d", contw);




    getchar();
    return 0;
}