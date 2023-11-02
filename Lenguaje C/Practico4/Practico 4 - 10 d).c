/*
4- c)Calcular el promedio de 20 numeros positivos

-----Version 1-----
T1- Pedirle al usuario 20 numeros (positivos)
T2- Calcular el promedio de los numeros recibidos
T3- Informar el resultado

-----Version 2-----
T1- Definir variables
Repetir 20 veces
    T2.1- Ingresar un numero y guardarlo en variable x
    T2.2- Controlar si el numero es positivo
    T2.2- Sumar x a una variable contador
T3- Calcular contador/20
t4- Mostrar resultado en pantalla

-----Version Final-----
Definir la variable x, cont, res de tipo real
Asignar 0 a la variable x
Asignar 0 a la variable cont
Asignar 0 a la variable res
Repetir 20 veces
    Mostrar "ingrese un numero positivo"
    Pedir "un numero" al usuario y asignar el valor a la variable x
    Mientras x<0
        Mostrar "El numero ingresado debe ser positivo, ingrese nuevamente"
        Pedir "un numero" al usuario y asignar el valor a la variable x
    Fin-Del-Mientras
    Sumar x y Cont
Fin-Del-Repetir
Dividir cont y 20 y asignar el resultado a la variable res
Mostrar "el promedio de los 20 numeros positivos es:"
Mostrar el valor de la variable res
*/

// Lenguaje C

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    float x, cont, res;
    cont=0;
    res=0;
    for ( i = 0; i < 20; i++)
    {
        printf("Ingrese un numero\n");
        scanf("%f",&x);
        getchar();
        while (x<0)
        {
            printf("No ingreso un numero positivo, intente nuevamente\n");
            scanf("%f",&x);
            getchar();
        }
        cont = cont + x;
    }
    res = cont/20;
    printf("El promedio de los 20 numeros es:%f\n",res);
    system("pause");
    return 0;
}
