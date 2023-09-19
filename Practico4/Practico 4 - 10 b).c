// 10) b) Dados tres numeros cualesquiera. informar por cada numero si es mayor a 10 o si es igual a 10 o si es menor a 10

/*
-----Version 1-----
T1- Recibir los 3 numeros
T2- Comparar si es mayor, igual o menor que 10
T3- Anunciar en pantalla

-----Version 2-----
T1- Definir una variable
Repetir 3 veces
    T2.1- Pedir un numero al usuario
    T2.2- Si el numero es mayor a 10
        T2.3Anunciar que es mayor a 10
    T2.4- Si el numero es igual a 10
        T2.5- Anunciar que es igual a 10
    T2.6- Si el numero es menor a 10
        T2.7- Anunciar que es menor a 10

Observaciones: T2.3, T2.5 y T2.7 podrian considerarse como parte de T3

-----Version 3 (Acciones primitivas)-----
Definir la variable x de tipo entero
Repetir 3
    Pedir un numero al usuario y asignar el valor a la variable x
    Si x > 10 entonces
        Mostrar "el numero ingresado es mayor que 10"
    Fin-Del-Si
    Si x = 10 entonces
        Mostrar "el numero ingresado es igual a 10"
    Fin-Del-Si
    Si x < 10 entonces
        Mostrar "el numero ingresado es menor que 10"
    Fin-Del-Si
Fin-Del-Repetir
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;
    for ( i = 0; i < 3; i++)
    {
        printf("Ingrese un numero\n");
        scanf("%d",&x);
        getchar();
        if (x>10){
            printf("El numero ingresado es mayor que 10\n");
        }
        if (x=10){
            printf("El numero ingresado es igual a 10\n");
        }
        else{
            printf("El numero ingresado es menor que 10\n");
        }
    }

    
    return 0;
}
