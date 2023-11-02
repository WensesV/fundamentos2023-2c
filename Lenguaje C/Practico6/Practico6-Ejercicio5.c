//5. Realizar la Versión 1 y Versión 2 en lenguaje de problemas.
/*
Luego, codificar un programa en
lenguaje C que permita ingresar una secuencia de hasta 12 caracteres. Luego, convertir las
letras minúsculas a mayúsculas. Finalmente, contar e informar por pantalla, cuantas veces
aparece la secuencia “SEP”.
*/


/*
Version 1
T1. Definir variables y arreglos a utilizar
T2. Almacenar 12 letras en un arreglo
T3. Si hay letras minusculas pasarlas a mayusculas.
T4. Identificar cuantas veces existe la secuencia "SEP"

Version 2
T1 Definit variables:
    Una de tipo entero llamada i para recorrer el arreglo
    otra de tipo entero lamada contador para cont la cantidad de letras a ingresar
    otra de tipo entero llamada contSEP para contar la secuencia
    y un arreglo de tipo char llamado letras para almacenar todas las letras a ingresar (de dimension 12)
T2 Ingresar un valor a la variable 'cant'.
T2.1 Controlar que 'cant' no sea  menor que 0 o mayor que 12, caso que no sea volver a ingresar.
T3 repetir la cantidad de 'cant'
    T3 Ingresar una letra
    T3.1 Controlar que sea una letra
T4 Recorrer el arreglo nuevamente y, si alguna letra es minuscula transformarla en mayuscula (-32)
T5 Si el arreglo tiene 3 letras o mas
    T5.1 Repetir hasta 'cant-2' veces
        T5.1 recorrer el arreglo y revisar de a tres lugares de letras si aparece la secuencia SEP.
    T5.3 informar cuantas veces aparecio la secuencia 'SEP'
T6 Pero si el arreglo tiene menos de tres letras.
    T6.1 indicar que el arreglo no puede contener la secuencia 'SEP' */


// Version - Lenguaje C

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, cant, contSEP;
    char letras[12];
    contSEP = 0;
    //Cuantas letras ingresamos
    printf("Ingrese la cantidad de letras a ingresar\n");
    scanf("%d", &cant);
    getchar();
    //Control de la variable 'cant'
    while(cant<0 || cant > 12){
        printf("Ingrese la cantidad de letras a ingresar\n");
        scanf("%d", &cant);
        getchar();
    }
    //Ingreso de las letras
    for (i = 0; i < cant; i++)
    {
        printf("Ingrese la letra %d\n", i+1);
        scanf("%c", &letras[i]);
        getchar();
        //Control de que sea una letra
        while((letras[i] < 'A') || (letras[i] > 'Z' && letras[i] < 'a') || (letras[i]> 'z')){
            printf("Por favor, ingrese solamente una letra\n");
            scanf("%c", &letras[i]);
            getchar();
        }
    }
    //Pasar minusculas a mayusculas
    for (i = 0; i < cant; i++){
        if(letras[i] < 'a' && letras[i] > 'z'){
            letras[i] = letras[i] - 32;
        }
    }
    if (cant > 2){
        for (i = 0; i < (cant - 2); i++){
            if ((letras[i] == 'S') && (letras[i+1] == 'E') && (letras[i+2] == 'P')){
                contSEP++;
            }
        }
    }
    else{
    printf("No es posible que aparezca la secuencia 'SEP ya que el arreglo es muy pequeño\n");
    }
    // mostrar en pantalla cuantas veces aparece la secuencia 'SEP'
    printf("La cantidad de veces que aparece la secuencia SEP es de %d ", contSEP);
    return 0;
}