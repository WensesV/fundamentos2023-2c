//10) c)Dados cuatro numeros positivos, determinar cual de ellos es el menor e informarlos

/*
----- Version 1 -----
T1- Ingresar 4 numeros positivos
T2- Determinar cual es el menor
T3- Informar cual es el numero menor

----- Version 2 -----
T1- Definir variables, una para contar el numero menor, y otra para ir ingresando numeros
Repetir 4 veces
    T2.1- Ingresar un numero
    T2.2- Controlar si es positivo
    T2.3-Comparar si es el numero menor
T3- Mostrar en pantalla cual es el numero menor

----- Version 3 (Acciones primitivas) -----

Definir la variable num de tipo entero
Definit la variable min de tipo entero
Pedir un numero al usuario y asignar el valor a la variable num
    Mientras num < 1
        Mostrar "Error, el numero debe de ser positivo. Reintente"
        Pedir un numero al usuario y asignar el valor a la variable num
    Fin-Del-Mientras
min = num
Repetir 3
    Pedir un numero al usuario y asignar el valor a la variable num
    Mientras num < 1
        Mostrar "Error, el numero debe de ser positivo. Reintente"
        Pedir un numero al usuario y asignar el valor a la variable num
    Fin-Del-Mientras
    Si min > num
        min = num
    Fin-Del-Si
Fin-Del-Repetir
Mostrar "El menor numero ingresado es:"
Mostrar el valor de la variable min
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    float num;
    float min;
    min = 0;
    printf("Ingrese un numero positivo\n");
    scanf("%f",&num);
    getchar();
    while (num<0){
        printf("Error, el numero debe de ser positivo. Reintente\n");
        scanf("%f",&num);
        getchar();
    }
    min = num;
    for ( i = 0; i < 3; i++)
    {
        printf("Ingrese un numero positivo\n");
        scanf("%f",&num);
        getchar();
        while (num<0){
            printf("Error, el numero debe de ser positivo. Reintente\n");
            scanf("%f",&num);
            getchar();
        }
        if (min>num){
            min = num;
        }
        
    }
    printf("El menor numero ingresado es: %f\n", min);
    system("pause");
    return 0;
}

