// 10 f)Calcular la cantida de personas de sexo femenino de 100 personas.
//La informacion que se debe ingresar de las personas es inicial del nombre sexo y edad.



/*
----- Version 1 -----
T1. Definir variables
T2. De 100 personas, almacenar el La inical del nombre, sexo y edad
T3. Informar cuantas son de sexo femenino


----- Version 2 -----
T1. Definir variables
T1.1 Una para almacenar las iniciales
T1.2 Una para almacenar el sexo
T1.3 una para almacenar la edad
T1.4 una para contar las personas de sexo femenino
T2. Repetir 100 veces
    T2.1 Pedir la inicial del nombre
    T2.2 Pedir el sexo de la persona
    T2.3 controlar que igrese 'f', 'F', 'M' o 'm'
    T2.4 Si el sexo es feminino entonces
            T2.5 anotar en el contador
    T2.6 Pedir la edad de la persona
T3. Informar la cantidad de personas de sexo femenino con la variable contador


----- Version 3 (Acciones primitivas) -----
Definir la variable in de tipo caracter
Definir la variable sexo de tipo caracter
Definir la variable edad de tipo entero
definit la variable contador de tipo entero
Asignar 0 a la variable contador
Repetir 100 veces
    Pedir una inicial al usuario y asignar el valor a la variable in
    Pedir una inicial ('F', 'f', 'M', 'm') y asignar el valor a la variable sexo
    Mientras [(sexo != F) y (sexo != f) y (sexo != M) y (sexo != m)]
        Mostrar "Dato incorrecto, reintente"
        Pedir una inicial ('F', 'f', 'M', 'm') y asignar el valor a la variable sexo
    Fin-Del-Mientras
    Si Sexo = 'F' o Sexo = 'f' entonces
        Sumar 1 y contador y asignar el resultado a la variable contador
    Fin-Del-Si
    Pedir la edad al usuario y asignar el valor a la variable edad
Fin-Del-Repetir
Mostrar "La cantidad de personas de sexo femenino es:"
Mostrar el valor de la variable contador
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{   char in;
    char sexo;
    int i;
    int edad;
    int cont;
    cont = 0;
    for (i = 0; i < 10; i++)
    {   //Ingreso incial
        printf("Ingrese una inicial del nombre de la persona %d\n", i+1);
        scanf("%c",&in);
        getchar();
        //Ingreso sexo
        printf("Ingrese una inicial del sexo de la persona (F o M) %d\n", i+1);
        scanf("%c",&sexo);
        getchar();
        //Control
        while (sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M')
        {
            printf("Dato mal ingresado ingrese nuevamente (F o M) %d\n", i+1);
            scanf("%c",&sexo);
            getchar();
        }
        //Contador si es femenino
        if (sexo == 'f' || sexo == 'F')
        {
            cont = cont+1;
        }
        // Ingreso edad
        printf("Ingrese la edad de la persona %d\n", i+1);
        scanf("%d",&edad);
        getchar();
        // control
        while (edad < 0 || edad > 132)
        {
            printf("Dato mal ingresado ingrese una edad real para la persona %d\n", i+1);
            scanf("%d",&edad);
            getchar();
        }
    }
    //Salida por pantalla
    prinft("La cantidad de personas de sexo femenino en %d es de %d.", i, cont);
    getchar();
    return 0;
}


