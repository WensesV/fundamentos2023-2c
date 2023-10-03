/*6. Modificar el programa en lenguaje C del ejercicio 7 del Práctico 5 de modo tal de:
a) Solicitar el ingreso de la inicial del nombre, edad y si nació en San Luis de 40 estudiantes.
b) Calcular el promedio de edad de los estudiantes ingresados.
c) Calcular el porcentaje de estudiantes que nacieron en San Luis del total de estudiantes
ingresados.
d) Calcular la cantidad de estudiantes cuya inicial está entre las letras „D‟ y „G‟.
e) Mostrar todos los datos de los estudiantes cuya inicial del nombre sea „S‟.
f) Mostrar todos los datos de los estudiantes que no nacieron en San Luis.
Finalmente, mostrar claramente los valores calculados en b), c) y d). */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //declarar las variables necesarias.
    char letra[40];
    int edad[40];
    char nacimiento[40];
    int i, cant, cont_de;
    float suma, prom_edad, prom_nac;
    cont_de = 0;
    suma = 0.0;

    //Ingreso de la cantidad de alumnos.
    printf("Ingrese la cantidad de estudiantes a ingresar (Máximo 40\n");
    scanf("%d",&cant);
    getchar();
    // Controlar que sea letra mayúscula.
    while ((cant < 0) || (cant >= 40)){
        printf("Cantidad indicada incorrecta, reintente\n");
        scanf("%d",&cant);
        getchar();
    }
    

    //Ingreso de todos los estudiantes.
    for (i = 0; i < cant; i++){
        printf("Ingrese la inicial del nombre de un estudiante\n");
        scanf("%c",&letra[i]);
        getchar();
        // Controlar que sea letra mayúscula.
        while (letra[i] < 64 || letra[i] > 90){
            printf("La inicial debe ser una letra en mayusucla, reintente\n");
            scanf("%c",&letra[i]);
            getchar();
        }
        // Ingresar el año de nacimiento del estudiante.
        printf("Ingrese el año de nacimiento del estudiante\n");
        scanf("%d",&edad[i]);
        getchar();
        // Controlar que la edad en el corriente año, no sea mayor a 75.
        while ((2023 - edad[i]) > (75)){
            printf("Edad incorrecta, reintente\n");
            scanf("%d",&edad[i]);
            getchar();
        }
        // Preguntar si dicho estudiante nacio en San Luis.
        printf("El estudiante nacio en San Luis?Y/N\n");
        scanf("%c",&nacimiento[i]);
        getchar();
        // Controlar la pregunta anterior anterior.
        while ((nacimiento[i] != 'Y') && (nacimiento[i] != 'y') && (nacimiento[i] != 'N') && (nacimiento[i] != 'n')){
            printf("Respuesta incorrecta, reintente con Y/N\n");
            scanf("%c",&nacimiento[i]);
            getchar();
        }
    }

    printf("\n Ingreso Exitoso \n\n\n");

    //b) Calcular el promedio de edad de los estudiantes ingresados

    for (i = 0; i < cant; i++){
        suma = suma + (2023 - edad[i]);
    }
    prom_edad = suma / cant;


    //c) Calcular el porcentaje de estudiantes que nacieron en San Luis del total de estudiantes ingresados
    suma = 0;
    for (i = 0; i < cant; i++){
        if ((nacimiento[i] == 'y') || (nacimiento[i] == 'Y'))
        {
            suma++;
        }
    }
    prom_nac = (suma / cant) * 100;

    //d) Calcular la cantidad de estudiantes cuya inicial está entre las letras D‟ y „G‟.

    for(i = 0; i < cant; i++){
        if(((letra[i] >= 'D') && (letra[i] <= 'G'))){
            cont_de++;
        }
    }
    //e) Mostrar todos los datos de los estudiantes cuya inicial del nombre sea „S‟.

    printf("A continuacion se mostrará todos los datos de los estudiantes cuya inicial del nombre sea 'S' \n \n");
    for (i = 0; i < cant; i++){
        if ((letra[i] == 'S'))
        {
            printf("---Informacion del estudiante %d---\n", i+1);
            printf("Inicial del nombre: %c\n", letra[i]);
            printf("Nacio en San Luis:");
            if(nacimiento[i] == 'y' || nacimiento[i] == 'Y'){
                printf(" Si\n");
            }
            else{
                printf(" No\n");
            }
            printf("Año de nacimiento: %d\n \n ", edad[i]);
        }
        
    }

    //f) Mostrar todos los datos de los estudiantes que no nacieron en San Luis.

    printf("A continuacion se mostrará todos los datos de los estudiantes que no nacieron en San Luis \n");
    for (i = 0; i < cant; i++){
        if ((nacimiento[i] == 'n') || (nacimiento[i] == 'N'))
        {
            printf("---Informacion del estudiante %d---\n", i+1);
            printf("Inicial del nombre: %c\n", letra[i]);
            printf("Nacio en San Luis: No \n");
            printf("Año de nacimiento: %d\n \n ", edad[i]);
        }
        
    }

    printf("El porcentaje de los estudiantes que nacieron en San Luis de los %d estudiantes es de: %f \n\n\n", cant, prom_nac);
    printf("El promedio de edad de los %d estudiantes es de: %f \n", cant, prom_edad);
    printf("La cantidad de estudiantes cuya inicial está entre las letras D y G es de: %d \n\n\n", cont_de);
    return 0;
}