// Practico 3 - Ejercicio 4
//Corregir y completar el siguiente programa. En pantalla se debe mostrar la inicial de su
//nombre. Luego, pasarlo y ejecutarlo



/*#inclu <stdio.h>
#include <stdlib.h>
int main()
 char Letra;
 printf("Comenzamos a programar en lenguaje C! \n";
 printf (“Mi nombre comienza con la letra: %d”, letra);
 return 0;
}*/

// Version corregida

#include <stdio.h> // falta escribir "de"
#include <stdlib.h>

int main(){ // faltaba el corchete "}"
    char Letra; 
    printf("Comenzamos a programar en lenguaje C! \n"); // faltaba el parentesis ")"
    printf ("Mi nombre comienza con la letra: %d", Letra); // agregamos 'L' mayusucla
    return 0;
}