// 9. Dadas las siguientes sentencias y el valor asignado a cada una de las variables

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x= 66; char y= 73; char j= x+3;
    printf ("Original: %c %c %c %c \n Modificada: %c %c %c %c \n ", x, y, j, j+9, x+32, y+32,
    j+32, j+9+32 );
    getchar(); //No es necesario incluir esta linea. Esta agregada para que al compilarlo en Visual Studio Code nos muestre la pantalla final y se cierre con un enter.
    return 0;
}

// ¿Qué se muestra en la pantalla luego de ejecutar el printf?
/*
Original: B I E N
 Modificada: b i e n
*/

