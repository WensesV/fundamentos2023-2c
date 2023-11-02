//Dada la siguiente Versión 2 en Lenguaje de problema:

/*Versión 2
t1.1. Definir objeto CAR que es un arreglo de 4 posiciones de tipo char.
t1.2. Definir objetos ind, cont1 y cont2 de tipo int.
t1.3. Asignar al objeto ind el valor 3.
t1.4. Asignar a los objetos cont1 y cont2 el valor 0.
Mientras el valor de ind sea mayor igual a 0
    t2.1. Ingresar un caracter y guardarlo en el arreglo CAR en la posición que indica ind
    t2.2. Decrementar el valor de ind en 1.
t3.1. Asignar al objeto ind el valor 0.
Mientras el valor de ind sea menor igual a 3
Si CAR en la posición ind es igual a „#‟
    t3.2. Asignar al objeto cont1 el valor cont1 +1.
de lo contrario Si CAR en la posición ind es igual a „&‟
    t3.3. Asignar al objeto cont2 el valor cont2 +1.
    t3.4. Incrementar el valor de ind en 1.
t4.1. Mostrar el valor de cont1 con el cartel adecuado.
t4.2. Mostrar el valor de cont2 con el cartel adecuado.

Se pide:
a. Codificarlo en Lenguaje C.
b. Realizar el DF del programa escrito en lenguaje C.
c. Realizar la tabla de ejecución usando los valores: #*&#.
Importante: cuando se indique “no más de N” o “hasta N” se está expresando la idea de que el
usuario puede ingresar una cantidad de elementos menor a N. */


#include <stdlib.h>
#include <stdio.h>

int main(){
    char CAR[4];
    int ind, cont1, cont2;
    ind = 3;
    cont1 = 0;
    cont2 = 0;
    while (ind >= 0)
    {
        printf("Ingrese un caracter\n");
        scanf("%c", &CAR[ind]);
        getchar();
        ind--;
    }
    ind = 0;
    while(ind <= 3){
        if(CAR[ind] == '#'){
            cont1++;
        }
        if(CAR[ind] == '&'){
            cont2++;
        }
        ind++;
    }
    printf("El valor de la variable cont1 es: %d\n", cont1);
    printf("El valor de la variable cont2 es: %d\n", cont2);
    getchar(); //Agregado para ver el valor final de la funcion.
    return 0;
}

/* ----- Tabla de ejecucion -----
|      Sentencias       |    CAR[0] -  CAR[1]  -  CAR[2]  -  CAR[3]   |  ind  |  cont1  |  cont2  |              Pantalla               |
|ind = 3;               |                                             |   3   |         |         |                                     |
|cont1 = 0;             |                                             |       |    0    |         |                                     |
|cont2 = 0;             |                                             |       |         |    0    |                                     |
|while (ind >= 0)V      |                                             |       |         |         |                                     |
|printf();              |                                             |       |         |         |Ingrese un caracter                  |
|scanf("%c", CAR[ind]); |                                         #   |       |         |         |                                     |
|getchar();             |                                             |       |         |         |                                     |
|ind--;                 |                                             |   2   |         |         |                                     |
|while (ind >= 0)V      |                                             |       |         |         |                                     |
|printf();              |                                             |       |         |         |Ingrese un caracter                  |
|scanf("%c", CAR[ind]); |                            *                |       |         |         |                                     |
|getchar();             |                                             |       |         |         |                                     |
|ind--;                 |                                             |   1   |         |         |                                     |
|while (ind >= 0)V      |                                             |       |         |         |                                     |
|printf();              |                                             |       |         |         |Ingrese un caracter                  |
|scanf("%c", CAR[ind]); |                  &                          |       |         |         |                                     |
|getchar();             |                                             |       |         |         |                                     |
|ind--;                 |                                             |   0   |         |         |                                     |
|printf();              |                                             |       |         |         |Ingrese un caracter                  |
|scanf("%c", CAR[ind]); |        #                                    |       |         |         |                                     |
|getchar();             |                                             |       |         |         |                                     |
|ind--;                 |                                             |  -1   |         |         |                                     |
|while (ind >= 0)F      |                                             |       |         |         |                                     |
|ind = 0;               |                                             |   0   |         |         |                                     |
|while(ind <= 3)V       |                                             |       |         |         |                                     |
|if(CAR[ind] = '#')V    |                                             |       |         |         |                                     |
|cont1++;               |                                             |       |    1    |         |                                     |
|if(CAR[ind] = '&')F    |                                             |       |         |         |                                     |
|ind++;                 |                                             |   1   |         |         |                                     |
|while(ind <= 3)V       |                                             |       |         |         |                                     |
|if(CAR[ind] = '#')F    |                                             |       |         |         |                                     |
|if(CAR[ind] = '&')V    |                                             |       |         |         |                                     |
|cont2++;               |                                             |       |         |    1    |                                     |
|ind++;                 |                                             |   2   |         |         |                                     |
|while(ind <= 3)V       |                                             |       |         |         |                                     |
|if(CAR[ind] = '#')F    |                                             |       |         |         |                                     |
|if(CAR[ind] = '&')F    |                                             |       |         |         |                                     |
|ind++;                 |                                             |   3   |         |         |                                     |
|while(ind <= 3)V       |                                             |       |         |         |                                     |
|if(CAR[ind] = '#')V    |                                             |       |         |         |                                     |
|cont1++;               |                                             |       |    2    |         |                                     |
|if(CAR[ind] = '&')F    |                                             |       |         |         |                                     |
|cont2++;               |                                             |       |         |         |                                     |
|ind++;                 |                                             |   4   |         |         |                                     |
|while(ind <= 3)F       |                                             |       |         |         |                                     |
|printf();              |                                             |       |         |         |El valor de la variable cont1 es: 2  |
|printf();              |                                             |       |         |         |El valor de la variable cont2 es: 1  |
|return 0;              |                                             |       |         |         |                                     |*/
//fin del a ejecucion

