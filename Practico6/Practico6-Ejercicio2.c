
//Analizar el siguiente código en Lenguaje C y colocar en cada comentarios  qué realiza el
//programa.

#include <stdio.h>
#include <stdlib.h>

int main()
{
char DATOS[20] ; // Define un arreglo con el nombre de 'DATOS' y dimension 20
int i, cant;
printf("Ingrese la cantidad de letras de su nombre: ");
scanf("%d",&cant); getchar(); // Lee la cantidad de letras que va a ingresar el usuario
while (cant<3 || cant>20){ // Controla que la cantidad de letras a ingresar sea mayor que 3 o menor que 20
    printf("Ingrese nuevamente la cantidad de letras 3 y 20: ");
    scanf("%d", &cant);getchar();
}
for (i=0; i<cant; i=i+1){ // Este FOR sirve para realizar el ingreso de forma individual de las letras al arreglo
    printf("\n Ingrese una letra:");
    scanf("%c",&DATOS[i]);getchar(); // Almacena una letra en la posicion 'i' del arreglo DATOS[].
    // realizar un control al dato ingresado
    while ((DATOS[i] < 'A') || (DATOS[i] > 'Z' && DATOS[i] < 'a') || (DATOS[i]> 'z') )
    {
        printf("\n Debe ingresar una letra, por favor reintente:");
        scanf("%c",&DATOS[i]);getchar();
    }
    
}
printf("\n\nMi nombre es: ");
for (i=0; i<cant; i=i+1) // Comentar el objetivo de esta repetición
    printf("%c",DATOS[i]); //Imprime en pantalla el contenido del arrelgo letra por letra.
return 0;
}

/*● ¿Soluciona alguno de los puntos del ejercicio 1?
● Realizar el diagrama de flujo del código dado.
● Ejecutar (tabla de ejecución) para un valor de cant igual a 4 */