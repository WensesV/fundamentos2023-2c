#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x= 66; char y= 73; char j= x+3;
    printf ("Original: %c %c %c %c \n Modificada: %c %c %c %c \n ", x, y, j, j+9, x+32, y+32,
    j+32, j+9+32 );
    return 0;
}
