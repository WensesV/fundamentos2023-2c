// Practico 5 - Ejercicio 7
//Completar el siguiente programa, codificando en lenguaje C los comentarios realizados. 


/*

#include <stdio.h>
int main(){
char letra; //declarar las variables necesarias
printf("Ingrese la inicial del nombre de un estudiante ");
scanf (“%c”, &letra);
getchar();
// Controlar que sea letra mayúscula.
// Ingresar el año de nacimiento del estudiante.
// Controlar que la edad en el corriente año, no sea mayor a 75.
// Preguntar si dicho estudiante nacio en San Luis.
// Controlar la respuesta anterior.
// Mostrar con carteles adecuados, todos los datos solicitados. Y la edad del estudiante.
return 0;
}

*/



// Codigo completo

#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra; 
    //declarar las variables necesarias
    int edad;
    char nacimiento;
    printf("Ingrese la inicial del nombre de un estudiante\n");
    scanf("%c",&letra);
    getchar();
    // Controlar que sea letra mayúscula.
    while (letra < 64 || letra > 90){
        printf("La inicial debe ser en mayusucla, reintente\n");
        scanf("%c",&letra);
        getchar();
    }
    // Ingresar el año de nacimiento del estudiante.
    printf("Ingrese el año de nacimiento del estudiante\n");
    scanf("%d",&edad);
    getchar();
    // Controlar que la edad en el corriente año, no sea mayor a 75.
    while (edad < (2023-75)){
        printf("Edad incorrecta, reintente\n");
        scanf("%d",&edad);
        getchar();
    }
    // Preguntar si dicho estudiante nacio en San Luis.
    printf("El estudiante nacio en San Luis?Y/N\n");
    scanf("%c",&nacimiento);
    getchar();
    // Controlar la respuesta anterior.
    while (nacimiento != 'Y' && nacimiento != 'y' && nacimiento != 'N' && nacimiento != 'n'){
        printf("Respuesta incorrecta, reintente con Y/N\n");
        scanf("%c",&nacimiento);
        getchar();
    }
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
