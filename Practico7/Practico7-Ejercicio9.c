/* Ejercicio 9)- 

En un lavadero de autos se realizan no más de 250 lavados diarios. Se desea llevar el
registro de los lavados diarios.
Hay 4 lugares (Boxes) disponibles para lavar. Se lavan autos a $2000 c/u, camionetas a
$2600 y Motos a $1000. Realizar un programa que permita ingresar por cada lavado, el
lugar usado y el precio, en un único arreglo.
Luego:

a) Dado un lugar (Box) de lavado, ingresado por el usuario en la función main, calcular
cuánto dinero se recaudó, durante todo el día, en dicho lugar y mostrar en la función main
con el cartel adecuado.

b) Calcular y mostrar para cada lugar (Box) el porcentaje de lavados realizados en ese
lugar sobre el total de lavados realizados en el día.

Definir las siguientes funciones:
● Ingreso (ingresa la información necesaria).
● RecaudaciónPorBox (calcula el total de dinero recaudado en un box).
● PorcentajeDeLavados (calcula y muestra el porcentaje de la cantidad de lavados para
UN Box sobre el total de lavados). Invocar tantas veces como sea necesario.

Se pide:
o Realizar la Versión 1 de la función main
o Codificar en Lenguaje C (SIN UTILIZAR VARIABLES GLOBALES).
o Pasar su código a CodeBlocks y ejecutar.

----- Datos Auxiliares -----



----- Version 1 -----

T1 Definir variables y un arreglo de dimension 500
T2 Preguntar cuantas lavados se van a almacenar
Repetir las veces indicadas
    T2.1 Preguntar el lugar (Box) donde se va a lavar el vehiculo
    T2.2 Preguntar el tipo de vehiculo (Autos = $2000, Camionetas = $2600, Motos = $1000).
    Almacenar lo pedido en una estructura de datos y la cantidad en una variable.
T3 Dado un lugar (Box), calcular lo recaudado en el dia y mostrar por pantalla. Si desea volver a calcular. Volver a hacerlo.
T4 Calcular y mostrar el porcentaje de lavados realizados en cada lugar (Box).

----- Lenguaje C -----*/
#include <stdio.h>
#include <stdlib.h>

int ingreso(int arreglo[], int max) {
    int c, k;
    int m = 1;
    // Ingreso de cantidad
    printf("Ingrese la cantidad de lavados a ingresar en un dia (Maximo %d):\n", max);
    scanf("%d", &c);
    getchar();
    // Control
    while (c < 1 || c > max) {
        printf("Cantidad de lavados fuera de rango. Ingrese nuevamente:\n");
        scanf("%d", &c);
        getchar();
    }

    // Ingreso de todos los datos de los lavados
    for (k = 0; k < (c * 2); k = (k + 2)) {
        // Ingreso del lugar (Box)
        printf("\n \nLavado numero = %d\n", m);
        printf("Ingrese el numero de Box donde se lavo el vehiculo (1-4):\n");
        scanf("%d", &arreglo[k]);
        getchar();
        // Control
        while (arreglo[k] < 1 || arreglo[k] > 4) {
            printf("Ingreso un Box que no existe. Reintente (1-4):\n");
            scanf("%d", &arreglo[k]);
            getchar();
        }
        // Ingreso del tipo de vehiculo
        printf("Ingrese el tipo de vehiculo (Auto = 1, Camioneta = 2, Moto = 3):\n");
        scanf("%d", &arreglo[k+1]);
        getchar();
        // Control
        while (arreglo[k+1] != 1 && arreglo[k+1] != 2 && arreglo[k+1] != 3) {
            printf("Ingreso un tipo de vehiculo que no existe. Reintente (1-3):\n");
            scanf("%d", &arreglo[k+1]);
            getchar();
        }
        //Cambio de vehiculo a precios
        switch(arreglo[k+1]){
        case 1:
            arreglo[k+1] = 2000;
            break;

        case 2:
            arreglo[k+1] = 2600;
            break;

        case 3:
            arreglo[k+1] = 1000;
            break;
        }
        m++;
    }
    return c;
}

void recaudacionPorBox(int arreglo1[], int cond1, int cant1) {
    int recaudacion = 0;
    int j;
    for (j = 0; j < (cant1 * 2); j = (j + 2)) {
        if (arreglo1[j] == cond1) {
            recaudacion = recaudacion + (arreglo1[j + 1]);
        }
    }
    printf("La recaudacion en el box %d es de $%d\n", cond1, recaudacion);
}


void porcentajeDeLavados(int arreglo2[], int cond2, int cant2) {
    float porcentaje = 0.0;
    int l;
    float suma = 0.0;
    for (l = 0; l < cant2 * 2; l += 2) {
        if (arreglo2[l] == cond2){
            suma++;
        }
    }
    porcentaje = suma/(cant2) * 100.0;
    printf("El porcentaje de lavados realizados en el box %d es de %f\n", cond2, porcentaje);
}


int main() {
    int lavadero[500];
    int i, cant, rec, bool = 1;
    // Llenado del arreglo
    cant = ingreso(lavadero, 250);
    // Ingreso del box
    while (bool == 1) {
        printf("Ingrese el numero del box para calcular cuanto se recaudo en el dia (1-4):\n");
        scanf("%d", &rec);
        getchar();
        // Control
        while (rec < 1 || rec > 4) {
            printf("Box incorrecto, reintentar (1-4):\n");
            scanf("%d", &rec);
            getchar();
        }
        recaudacionPorBox(lavadero, rec, cant);
        // Desea continuar?
        printf("¿Desea consultar por la recaudacion de otro box?\n1 = Si, 0 = No\n");
        scanf("%d", &bool);
        getchar();
        // Control
        while (bool != 0 && bool != 1) {
            printf("Respuesta incorrecta, reintentar (1 = Si, 0 = No):\n");
            scanf("%d", &bool);
            getchar();
        }
        if (bool == 0) {
            bool = -1; // Salida del while
        }
    }
    // Muestra de los porcentajes de los lavados respecto a cantidad en x lugar
    for (i = 1; i <= 4; i++) {
        porcentajeDeLavados(lavadero, i, cant);
    }
    return 0;
}