
/*
A) Definir la siguiente función
int ValidaNros ( int dato, int valor1, int valor2)
donde la función debe retornar un 1 si el valor del parámetro dato se encuentra entre los
valores de los parámetros valor1 y el valor2. En todo otro caso retornar un 0.
*/

#include <stdio.h>
#include <stdlib.h>

int ValidaNros(int dato, int valor1, int valor2){
    int bool = -1;
    if((dato < valor1) || (dato > valor2))
    {
        bool = 1;
    }
    else{
        bool = 0;
    }
    return(bool);
}


/*
B) Modificar la siguiente función main(), completar el código resolviendo los comentarios.
Invocar la función ValidaNros (definida en la parte A). Definir parámetros apropiados e
imprimir cartel adecuado según sea el valor retornado.  */

int main(){
int ed, anio, mes;
printf("\nIngrese una edad entre 16 y 60 anios: ");
scanf("%d", &ed); getchar();
//Realizar un control de la información ingresada - invocar función
while((ValidaNros(ed, 16, 60)) == 1){
    printf("\nError, reintente: ");
    scanf("%d", &ed); getchar();
}
printf ("\nIngrese el año de ingreso a la universidad entre 2002 y 2023: ");
scanf("%d", &anio); getchar();
//Realizar un control de la información ingresada - invocar función
while((ValidaNros(anio, 2002, 2023)) == 1){
    printf("\nError, reintente: ");
    scanf("%d", &anio); getchar();
}

printf ("Ingrese el mes de su cumpleaños: ");
scanf("%d", &mes); getchar();
//Realizar un control de la información ingresada - invocar función
while((ValidaNros(mes, 1, 12)) == 1){
    printf("\nError, ingrese un mes valido: ");
    scanf("%d", &mes); getchar();
}
// Imprimir toda la información ingresada.
printf("\nEdad: %d \nIngreso a la universidad: %d \nMes de cumpleaños: %d", ed, anio, mes);
return(0);
}

