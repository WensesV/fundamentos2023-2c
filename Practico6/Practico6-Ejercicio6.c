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
    char letra[40];
    //declarar las variables necesarias
    int edad[40];
    char nacimiento[40];
    int i, cont_d_e, cont_s;
    float suma, prom_edad;
    //Ingreso de todos los estudiantes
    for (i = 0; i < i; i++){
        printf("Ingrese la inicial del nombre de un estudiante\n");
        scanf("%c",&letra[i]);
        getchar();
        // Controlar que sea letra mayúscula.
        while (letra < 64 || letra > 90){
            printf("La inicial debe ser una letra en mayusucla, reintente\n");
            scanf("%c",&letra[i]);
            getchar();
        }
        // Ingresar el año de nacimiento del estudiante.
        printf("Ingrese el año de nacimiento del estudiante\n");
        scanf("%d",&edad[i]);
        getchar();
        // Controlar que la edad en el corriente año, no sea mayor a 75.
        while (edad < (2023-75)){
            printf("Edad incorrecta, reintente\n");
            scanf("%d",&edad[i]);
            getchar();
        }
        // Preguntar si dicho estudiante nacio en San Luis.
        printf("El estudiante nacio en San Luis?Y/N\n");
        scanf("%c",&nacimiento[i]);
        getchar();
        // Controlar la pregunta anterior anterior.
        while (nacimiento != 'Y' && nacimiento != 'y' && nacimiento != 'N' && nacimiento != 'n'){
            printf("Respuesta incorrecta, reintente con Y/N\n");
            scanf("%c",&nacimiento[i]);
            getchar();
        }
    }
    //c) Calcular el porcentaje de estudiantes que nacieron en San Luis del total de estudiantes ingresados.
    for (i = 0; i < 40; i++){
        suma = suma + edad[i];
    }
    prom_edad = suma / 40;
    






    // Mostrar con carteles adecuados, todos los datos solicitados. Y la edad del estudiante.
    printf("---Informacion del estudiante---\n");
    printf("Inicial del nombre: %c\n", letra);
    printf("Nacio en San Luis:");
    if(nacimiento == 'y' || nacimiento == 'Y'){
        printf(" Si\n");
    }
    else{
        printf(" No\n");
    }
    printf("Año de nacimiento: %d\n", edad);
    getchar();
    return 0;
}