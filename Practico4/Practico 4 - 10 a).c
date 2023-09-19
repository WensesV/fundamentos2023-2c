//10) a) Dado un numero, determinar si es positivo

/*
Version 1
T1- Ingresar un numero
T2- Determinar si es positivo

Version 2
T1- Definir una varibale
T2- Si x es positivo entonces
        anunciar que el numero ingresado es positivo
    Sino
        Anuncuar que el numero ingresado no es positivo

version Final (Acciones Primitivas)
Definir variable x
Pedir un numero al usuario y asignar un valor a la variable x
Si x>0 entonces
    Mostrar "El numero ingresado es positivo"
Sino
    Mostrar "El numero ingresado no es positivo"
Fin-Del-Si
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    printf("Ingrese un numero\n");
    scanf("%f",&num);
    getchar();
    if (num > 0)
    {
        printf("El numero ingresado es positivo\n");
    }
    system("pause");
    return 0;
}
