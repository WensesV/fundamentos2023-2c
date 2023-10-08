/*
8. Realizar la Versión 1 y luego codificar un programa en lenguaje C que permita ingresar hasta
de 50 números reales, calcular y almacenar el seno y coseno del valor ingresado.
Posteriormente mostrar por pantalla primero todos los senos negativos y luego todos los
cosenos negativos. En caso de que no hubiera valores negativos de alguno de los dos o de
ambos informarlo.
*/

/*
Version 1
T1 Definir variables.
T2 Ingresar como máximo 50 numeros reales.
T3 calcular y almacenar el seno y coseno del valor ingresado.
T4 Mostrar por pantalla primero todos los seno negativos y todos los cosenos negativos. En caso de que alguno de los dos no sea negatvio o alduno delos dos o de ambos. infromarlo
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h> //Para trabjar con seno y coseno

//El programa puede marcar error como si no estuviera definida la variabla M_PI, pero esta misma esta definida dentro de math.h. Al compilar no deberiamos de tener error.

int main()
{
    float numeros[50];
    float seno[50];
    float coseno[50];
    float n_radian;
    int cant, i;
    // ingreso cant
    printf("Cuantos numeros reales desea ingresar? \n");
    scanf("%d",&cant);
    getchar();
    while ((cant > 50) || (cant < 0)){
        printf("Error, ingrese una cantidad valida\n");
        scanf("%d",&cant);
        getchar();
    }
    //Ingreso de los numeros
    for (i = 0; i < cant; i++){
        printf("Ingrese el numero real (En grados) del numero %d \n", i+1);
        scanf("%f",&numeros[i]);
        getchar();
    }
    //Calculo de seno
    for (i = 0; i < cant; i++){
        n_radian = (numeros[i] * M_PI) / 180.0; //para pasarlosa radianes
        seno[i] = sin(n_radian);
    }
    //calculo de coseno
    for (i = 0; i < cant; i++){
        n_radian = (numeros[i] * M_PI) / 180.0; //para pasarlosa radianes
        coseno[i] = cos(n_radian);
    }
    //Mostrar todos los seno negativos
    printf("Lista de seno negativos \n");
    for (i = 0; i < cant; i++){
        if (seno[i] > 0){
            printf("seno ( %f ) = %f \n", numeros[i], seno[i]);
        }
        
    }
    //Mostrar todos los coseno negativos
    printf("Lista de cosenos negativos \n");
    for (i = 0; i < cant; i++){
        if (seno[i] > 0){
            printf("Cos ( %f ) = %f \n", numeros[i], seno[i]);
        }
    }
    //Dado el enunciado, mostraremos de manera siguiente si uno de los dos es positivo y negativo, o si ambos son positivos
    printf("Datos adicionales \n");
    for (i = 0; i < cant; i++){
        if (((seno[i] > 0) && (coseno[i] < 0)) || ((seno[i] > 0) && (coseno[i] < 0))){
           printf("El numero %f, en su seno y coseno tienen valores diferentes (Uno es positivo y el otro es negativo) \n", numeros[i]);
        }
        if(seno[i] > 0 && coseno[i] > 0){
            printf("Tanto el seno como su coseno del numero %f es positivo \n", numeros[i]);
        }
    }
    //Realizamos esta ultima accion por la vaga redaccion del enunciado. Deja en duda si hay que mostrar todos los procesos a la vez o si hay que hacerlos en partes.
    //De igual manera, en caso de que hubiese que mostrar todas las comaraciones en un solo recorrido de arreglo  simplificariamos el proceso utilizando un solo for en vez de tres, y usariamos las condidiones de los mismos If para mostrar en pantalla
    return 0;
}




