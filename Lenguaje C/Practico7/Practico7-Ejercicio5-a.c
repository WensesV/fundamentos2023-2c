/*a) Ver la función definida en la Pag 58. Contestar las siguientes preguntas:
o ¿De qué tipo es la función? ¿Qué significa?
o ¿Cuántos parámetros formales tiene y de qué tipo son?
o Porque el primer parámetro tiene corchete que abre y cierra?
o ¿Qué me permite realizar esta función?
o Analizar el código de la página 59. ¿Qué realiza ese código?
o Porque para ingresar datos en el arreglo Cur_B no se utilizó la función Ingreso?*/

#include <stdio.h>
#include <stdlib.h>

int main() {
int i, cuantos;
int Cur_A[30]; int Cur_B[45]; int Cur_C[35];
// Ingreso de datos en el arreglo Cur_A
for (i =0; i < 30; i++ ){
    printf("Ingrese un valor en el rango [10,20]");
    scanf("%d", &Cur_A[i]);
    getchar();
while (Cur_A[i]< 10 || Cur_A[i]> 20){
    printf("Ingrese nuevamente un valor");
    scanf("%d", &Cur_A[i]);
    getchar();}
}
// Ingreso de datos en el arreglo Cur_B
for (i=44; i > -1 ; i-- ){
    printf("Ingrese un valor en el rango [40,50]");
    scanf("%d", &Cur_B[i]);
    getchar();
while (Cur_B[i]< 40 || Cur_B[i]>50){
    printf("Ingrese nuevamente un valor");
    scanf("%d", &Cur_B[i]);
    getchar();}}
// Ingreso de cuantos valores quiere ingresar
printf("Ingrese cuantos valores va a ingresar");
scanf("%d", &cuantos);
getchar();
while (cuantos < 1 || cuantos > 35 ){
    printf("Ingrese nuevamente un valor");
    scanf("%d", &cuantos);
    getchar();}
// Ingreso de datos en el arreglo Cur_C
for (i =0; i < cuantos; i=i+2 ){
    printf("Ingrese un valor en el rango [70,80]");
    scanf("%d", &Cur_C[i]);
    getchar();
while (Cur_C[i]< 70 || Cur_C[i]> 80){
    printf("Ingrese nuevamente un valor");
    scanf("%d", &Cur_C[i]);
    getchar();}
}
return(0);
}

/*
o ¿De qué tipo es la función? ¿Qué significa?
    Respuesta: La funcion es de tipo entero,
o ¿Cuántos parámetros formales tiene y de qué tipo son?
    Respuesta: Tiene 6 parametros formales de tipo entero
o Porque el primer parámetro tiene corchete que abre y cierra?
    Respuesta:Porque es un arreglo
o ¿Qué me permite realizar esta función?
    Respuesta: El ingreso controlado de numeros a un arreglo de tipo entero
o Analizar el código de la página 59. ¿Qué realiza ese código?
    Respuesta: Ingresa numeros a 3 arreglos diferentes
o Porque para ingresar datos en el arreglo Cur_B no se utilizó la función Ingreso?
    Respuesta: Porque los valores de la condicion de verdad del For necesitaria estar de forma opuesta para poder realizar el ingreso de forma inversa, en vez de esperar el numero menor a "i", deberia esperar un valor mayor al esperado.
*/