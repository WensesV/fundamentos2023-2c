/*
e) Definir y realizar el código de una función SUMA que permita sumar los valores de un
único arreglo, la función no debe imprimir nada.
*/

#include <stdio.h>
#include <stdlib.h>


int suma_arreglo(int arrsuma[], int inicio, int fin, int pasos){
    int j, sumatoria;
    for (j = inicio; j < fin; j = j + pasos){
        sumatoria = sumatoria + arrsuma[j];
    }
    return(sumatoria);
}

int imprimir(int arreglo[], int indice_i, int indice_f, int pass){
    int k;
    printf("Contenido del arreglo\n");
    for (k = indice_i; k < indice_f; k = k + pass)
    {
        printf("%d \n", arreglo[k]);
    }
    return(0);
}

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
printf("Ingrese un valor en el rango [%d,%d]", Desde, Hasta);
scanf("%d", &arr[i]);
getchar();}
while(ValidaNros(arr[i], Desde, Hasta) == 0){
printf("Ingrese nuevamente un valor");
scanf("%d", &arr[i]);
getchar();}
return(0);
}

int main() {
int i, cuantos, ressuma;
int Cur_A[30]; int Cur_B[45]; int Cur_C[35];
// Ingreso de datos en el arreglo Cur_A
Ingreso (Cur_A, 0, 30, 1, 10, 20);
// Ingreso de datos en el arreglo Cur_B
for (i=44; i >=0 ; i-- ){
    printf("Ingrese un valor en el rango [40,50]");
    scanf("%d", &Cur_B[i]); getchar();
while(ValidaNros(Cur_B[i], 30, 50) == 0){
    printf("Ingrese nuevamente un valor");
    scanf("%d", &Cur_B[i]); getchar();}}
// Ingreso de cuantos valores quiere ingresar
printf("Ingrese cuantos valores va a ingresar");
scanf("%d", &cuantos); getchar();
while(ValidaNros(cuantos, 1, 35) == 0){
    printf("Ingrese nuevamente un valor");
    scanf("%d", &cuantos); getchar();}
// Ingreso de datos en el arreglo Cur_C
Ingreso(Cur_C, 0, cuantos, 2, 70,80);
//Impresiones del ejercicio d)
printf("Imprimir todos los datos ingresados en el arreglo Cur_B.\n");
imprimir(Cur_B, 0, 44, 1);
printf("Imprimir todos los datos ingresados en el arreglo Cur_A desde la posición 6 a la última posición.\n");
imprimir(Cur_A, 5, 10, 1);
printf("Imprimir los datos ingresados en el arreglo Cur_C en las posiciones pares.\n");
imprimir(Cur_C, 0, cuantos - 1, 2);
printf("Imprimir los datos ingresados en el arreglo Cur_B en las posiciones 10,20,30 y 40.\n");
imprimir(Cur_B, 9, 40, 10);
//Modificar la función main, para mostrar con los carteles adecuados el resultado de la suma de cada uno de los 3 arreglos.
ressuma = suma_arreglo(Cur_A, 0, 30, 1);
printf("La suma del arreglo Cur_A es: %d \n", ressuma);
ressuma = suma_arreglo(Cur_B, 0, 45, 2);
printf("La suma del arreglo Cur_B es: %d \n", ressuma);
ressuma = suma_arreglo(Cur_C, 0, cuantos, 2);
printf("La suma del arreglo Cur_C es: %d \n", ressuma);
return(0);
}

