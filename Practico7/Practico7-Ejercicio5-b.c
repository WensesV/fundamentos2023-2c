/*
b) Podría utilizar en algún lado de este código (main y/o función Ingreso) reutilizar la
función ValidaNros. En caso afirmativo realizar las modificaciones necesarias para
usar dicha función.
*/

#include <stdio.h>
#include <stdlib.h>

int ValidaNros(int dato, int valor1, int valor2){
    int bool;
    if ((dato < valor1) || (dato > valor2))
    {
        bool = 1;
    }
    else{
        bool = 0;
    }
    
    return(bool);
}

int Ingreso(int arr[], int Li, int Ls, int Paso, int Desde, int
Hasta){
int i;
for (i =Li; i < Ls; i=i+ Paso ){
printf("Ingrese un valor en el rango [%d,%d]\n", Desde, Hasta);
scanf("%d", &arr[i]);
getchar();}
while(ValidaNros(arr[i], Desde, Hasta) == 0){
printf("Ingrese nuevamente un valor\n");
scanf("%d", &arr[i]);
getchar();}
return(0);
}

int main() {
int i, cuantos;
int Cur_A[30]; int Cur_B[45]; int Cur_C[35];
// Ingreso de datos en el arreglo Cur_A
Ingreso (Cur_A, 0, 30, 1, 10, 20);
// Ingreso de datos en el arreglo Cur_B
for (i=44; i >=0 ; i--){
    printf("Ingrese un valor en el rango [40,50]\n");
    scanf("%d", &Cur_B[i]); getchar();}
while(ValidaNros(Cur_B[i], 30, 50) == 0){
    printf("Ingrese nuevamente un valor\n");
    scanf("%d", &Cur_B[i]); getchar();}
// Ingreso de cuantos valores quiere ingresar
printf("Ingrese cuantos valores va a ingresar\n");
scanf("%d", &cuantos); getchar();
while(ValidaNros(cuantos, 1, 35) == 0){
    printf("Ingrese nuevamente un valor\n");
    scanf("%d", &cuantos); getchar();}
// Ingreso de datos en el arreglo Cur_C
Ingreso(Cur_C, 0, cuantos, 2, 70,80);
return(0);
}
