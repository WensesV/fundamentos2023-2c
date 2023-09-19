// 10) e) De un total de 50 numeros calcular e informar el procentaje de numeros que son mayores a 12

/* ----- Version 1 -----
T1- Definir variables
T2- Ingresar 50 numeros
T3- Calcular el porcentaje de los que son mayores a 12
T4- Informar el porcentaje

----- Version 2 -----
T1- Definir variables
T1.1- Una para ir almacenando los numeros
T1.2- Otra para contar los numeros mayores a 12
T1.3- Otra que muestre el porcentaje
Repetir 50 veces
    T2.1- Ingresar un numero
    T2.3- Si es mayor a 12, contarlo
T3- Calcular contador * 100 / 50 y guardar resultado en otra variable
T4- Mostrar en pantalla el resultado

----- Version 3 (Acciones primitivas)-----
Definir la variable num de tipo real
Definir la variable cont de tipo real
Definir la variable res de tipo real
Asignar el valor 0 a cont
Repetir 50
    Pedir un numero al usuario y asignar el valor a la variable num
    Si num > 12
        Sumar cont +1
    Fin-del-Si
Fin-del-Repetir
Multiplicar cont y 50 y asignar el resultado a la variable res
Dividir res y 100, y asignar el resultado a la variable res
Mostrar "El porcentaje de numeros mayores que 12 es:"
Mostrar el valor de la variable res
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float num, cont, res;
    int i;
    cont = 0;
    for (i = 0; i < 50; i++){
        printf("Ingrese un numero\n");
        scanf("%f",&num);
        getchar();
        if (num>12){
            cont++;
        }
    }
    res = (cont * 50) / 100;
    printf("El porcentaje de numeros mayores que 12 es: %f",res);
    system("pause");
    return 0;
}

