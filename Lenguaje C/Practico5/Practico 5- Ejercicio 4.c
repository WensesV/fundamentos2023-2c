// Practico 3 - Ejercicio 4
//Corregir y completar el siguiente programa. En pantalla se debe mostrar la inicial de su
//nombre. Luego, pasarlo y ejecutarlo



/*#inclu <stdio.h> // falta escribir "de"
#include <stdlib.h>
#include <stdlib.h>
int main()  // faltaba el corchete "}"
 char Letra;
 // Añadimos un ingreso del nombre o letra segun la preferencia para "Letra"
 printf("Comenzamos a programar en lenguaje C! \n";     // faltaba el parentesis ")"
 printf (“Mi nombre comienza con la letra: %d”, letra);     // agregamos 'L' mayusucla - cambiamos %d por %c
 return 0;
}*/

// Version corregida

#include <stdio.h> 

int main(){
        char Letra;
    printf("Comenzamos a programar en lenguaje C! \n");
    printf("Escriba su nombre: ");
    scanf("%c",&Letra);
    getchar();
    printf ("Mi nombre comienza con la letra: %c", Letra); 
    return 0;
}