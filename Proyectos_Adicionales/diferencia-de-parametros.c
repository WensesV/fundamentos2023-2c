#include<stdlib.h>
#include<stdio.h>


int cuadrado(int x, int y){
    printf("funcion cuadrado \n");
    int suma;
    x = x*x;
    y = y*y;
    suma = x + y;
    return(suma);
}

int siguiente(int arr[]){
    printf("funcion siguiente \n");
    arr[0] = arr[0] + 1;
    arr[1] = arr[1] + 1;
    return(0);
}

int main(){
    int a, b, r;
    r = 0;
    int arreglo[2];
    printf("Ingrese el valor de la variable a: \n");
    scanf("%d", &a); getchar();
    printf("Ingrese el valor de la variable b: \n");
    scanf("%d", &b); getchar();

    printf("Valor de las variables a = %d , b = %d \n", a, b);

    r = cuadrado(a, b);

    printf("Valor de las variables a = %d , b = %d \n", a, b);
    printf("retorno %d \n", r);


    printf("Ingrese el valor de 1 del arreglo: \n");
    scanf("%d", &arreglo[0]); getchar();
    printf("Ingrese el valor de 2 del arreglo: \n");
    scanf("%d", &arreglo[1]); getchar();

    printf("Valor de el arreglo = %d ,  = %d \n", arreglo[0], arreglo[1]);

    siguiente(arreglo);

    printf("Valor de el arreglo = %d ,  = %d \n", arreglo[0], arreglo[1]);

    getchar();
    return(0);
}