/*
6. Para cada uno de los items del ejercicio 3 se pide:

a) Codificarlos en lenguaje C, mostrando por pantalla el contenido de todas las variables.
b) Realizar el DF de cada uno de los programas escritos en lenguaje C.
c) Pasarlo y ejecutarlo en CodeBlocks.
d) Modificar el código a) para que el usuario ingrese los valores a las variables.
e) Modificar el código b), implementar el mismo código con la sentencia for. */

//Ejercicio 3-a)

// a) Codificarlos en lenguaje C, mostrando por pantalla el contenido de todas las variables.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int ve; char ca; float fl; //linea 5
//    ve = 15%7; ca='M'; // % = modulo
//    fl = 15/7;
    // d) Modificar el código a) para que el usuario ingrese los valores a las variables.
    printf("Ingrese un numero entero distinto de 0 para la variable 've'\n"); //ingreso de la variable ve
    scanf("%d",&ve);
    getchar();
    while (ve == 0){
        printf("El numero ingresado debe de ser distinto de 0, por favor reintente\n"); //ingreso de la variable ve
        scanf("%d",&ve);
        getchar();
    }
    printf("Ingrese un caracter para la variable 'ca'\n"); //ingreso de la variable ca
    scanf("%c",&ca);
    getchar();
    printf("Ingrese numero real 2 para la variable 'fl'\n"); //ingreso de la variable fl
    scanf("%f",&fl);
    getchar();
    while (ve != 2){
        printf("El numero ingresado debe de ser el 2, por favor reintente\n"); //ingreso de la variable ve
        scanf("%d",&ve);
        getchar();
    }
    if (ve !=0 && fl == 2.0) {
        ca = (ca+1)+32;
        fl = ca + 8.0/5;
    }
    // a) Codificarlos en lenguaje C, mostrando por pantalla el contenido de todas las variables.
    printf("contenido de la variable ve: --- %d \n", ve);
    printf("contenido de la variable ca: --- %c \n", ca);
    printf("contenido de la variable fl: --- %d \n", fl);
    getchar(); //No es necesario incluir esta linea. Esta agregada para que al compilarlo en Visual Studio Code nos muestre la pantalla final y se cierre con un enter.
    return 0;
}