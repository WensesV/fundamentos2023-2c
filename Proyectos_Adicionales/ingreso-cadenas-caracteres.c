#include<stdlib.h>
#include<stdio.h>

int main()
{
    char string[20];
    int i;
    printf("ingrese una cadena de caracteres (Todo lo que ingrese por teclado se ingresara en un arreglo\n Maximo 20 caracteres\n");
    scanf("%s", &string[0]);
    getchar();
    printf("La cada que se ingreso es la siguiente: \n %s", string);
    printf("Impreso letra por letra: \n");
    for (i = 0; (string[i] != '\0') || i == 20; i++){
        printf("%c - ", string[i]);
    }
    return(0);
}

