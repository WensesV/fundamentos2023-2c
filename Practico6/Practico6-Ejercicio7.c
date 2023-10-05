/*
7. La profesora de la materia “Algebra 1” desea realizar algunas estadísticas sobre sus alumnos
que han rendido en las distintas instancias el primer parcial de su materia.
Se pide realizar la Versión 1 y luego codificar un programa en lenguaje C que permita ingresar
y almacenar en una única estructura el número de DNI, la cantidad de asistencias [0,15], si
es o no recursante, la nota [1,10] obtenida en cada una de las tres instancias evaluadas para
el primer parcial: 1° instancia, 2° instancia y 3° instancia. Si el alumno estuvo Ausente se
colocará un (-1). Si aprobó con una nota igual o superior a 7 en alguna instancia se colocará
un cero en las siguientes instancias. La cantidad de estudiantes es de no más de 120.
Posteriormente el programa debe informar:

a) Porcentaje de estudiantes con menos de 5 asistencias.
b) El promedio de recursantes, sobre el total de estudiantes.
c) Cantidad de aprobados en la 1 instancia con más de 7 asistencias.
d) Cantidad de Ausentes en la 1° instancia. 
e) Mostrar por pantalla el número de DNI y la cantidad de asistencia de todos los
estudiantes que aprobaron el 1er parcial.*/

/*

----Datos Auxiliares----

DNI

Cantidad de asistencias

Si es o no Recursante

Nota 1, 2 y 3. (Si estuvo ausente se colocara un -1)

cantidad de estudiantes es no mas de 120.

----- Version 1 -----
T1 Definir variables
T2 Pedir la cantidad de alumnos ingresar (Maximo 120)
Repetir las veces necesarias
    T3.1 Ingresar el DNI
    T3.2 Ingresar si es recursante o no
    T3.3 Ingresar la cantidad de asistencias
    T3.4 Ingresar las notas de las 3 instancias
T4 Mostrar el porcentaje de estudiantes con menos de 5 asistencias.
T5 Mostrar el promedio de alumnos recrusantes, sobre el total de estudiantes.
T6 Mostrar la cantidad de aprobados en la instancia 1 con mas de 7 asistencias.
T7 Mostrar la cantidad de ausentes en la primera instancia.
T8 Mostrar el numero de DNI y la cantidad de asistencia de todos los estudiantes que aprobaron el primer parcial. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //T1 Definir variables
    int alumnos[120*6];
    int i, k, cant;
    int j = 1;

    printf("Cuantos estudiantes desea ingresar? %d\n", j);
    scanf("%d",&cant);
    getchar();
    while ((cant > 120) || (cant < 1)){
        printf("Error, ingrese un DNI valido para el alumno %d\n", j);
        scanf("%d",&cant);
        getchar();
    }
    //Ingreso de la informacion de cada estudiante
    for (i = 0; i < cant*6; i = i+6){
        //Ingreso DNI
        printf("Ingrese el DNI del estudiante %d\n", j);
        scanf("%d",&alumnos[i]);
        getchar();
        while ((alumnos[i] > 99999999) || ((alumnos[i]) < 10000000)){
            printf("Error, ingrese un DNI valido para el alumno %d\n", j);
            scanf("%d",&alumnos[i]);
            getchar();
        }
        // Recursante si o no
        printf("El alumno %d es recursante? S/N \n", j);
        scanf("%c",&alumnos[i+1]);
        getchar();
        while ((alumnos[i+1] != 'S') && (alumnos[i+1] != 's') && (alumnos[i+1] != 'N') && (alumnos[i+1] != 'n') ){
            printf("Error, ingrese solo una 'S' o una 'N'\n", j);
            scanf("%c",&alumnos[i+1]);
            getchar();
        }
        // Cantidad de asistencias
        printf("Ingrese la cantidad de asistencias del estudiante %d\n", j);
        scanf("%d",&alumnos[i+2]);
        getchar();
        while ((alumnos[i+2] > 0) || ((alumnos[i+2]) < 15))
        {
            printf("Error, el maximo de asistencias es de 15\n", j);
            scanf("%d",&alumnos[i+2]);
            getchar();
        }
        //Ingreso de notas 1
        for (k = 0; k < 3; k++)
        {   //ingreso asistencia a la evaluacion
            printf("El alumno %d estuvo presente en la instancia %d de evaluacion? S/N \n", k+1);
            scanf("%d",&alumnos[i+3]);
            getchar();
            //Control de respuesta
            while ((alumnos[i+3] != 'S') && (alumnos[i+3] != 's') && (alumnos[i+3] != 'N') && (alumnos[i+3] != 'n') )
            {
                printf("Error, ingrese solo una 'S' o una 'N'\n");
                scanf("%c",&alumnos[i+1]);
                getchar();
            }
            if ((alumnos[i+3] == 's') || (alumnos[i+3] == 'S'))
            {   //Si estuvo presente ingresa la nota
                printf("Ingrese el resultado de la evaluacion %d \n", k+1);
                scanf("%d",&alumnos[i+(3+k)]);
                getchar();
                // Control de la nota
                while ((alumnos[i+(3+k)] < 0) || (alumnos[i+(3+k)] > 10))
                {
                    printf("Nota mal ingresada, por favor, reintente\n");
                    scanf("%d",&alumnos[i+(3+k)]);
                    getchar();
                }
            }
            else{ //Si estuvo ausente ingresa el -1
                alumnos[i+(3+k)] = -1;
            }
        }
    }
    return 0;
}





