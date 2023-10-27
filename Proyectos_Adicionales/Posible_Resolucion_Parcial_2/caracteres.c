#include <stdlib.h>
#include <stdio.h>

char ingreso(char arr[], int c){
    int k;
    for(k = 0; k < c; k++){
        printf("Ingrese un caracter\n");
        scanf("%c", &arr[k]);
        getchar();
    }
    return(0);
}

int cuenta_chr(char arr2[], int cantidad, char x, char y){
    int cuantos = 0;
    int j;
    for(j = 0; j < cantidad; j++){
        if((arr2[j] >= x) || (arr2[j] <= y)){
            cuantos++;
        }
    }
    return(cuantos);
}

void mostrar(char arr3[], int cont1, int cont2, int paso, char cond1, char cond2){
    int m;
    for(m = cont1; m != cont2 ; m = m){
        if((arr3[m] <=  cond1) && (arr3[m] >=  cond2)){
            printf("%c", arr3[m]);
        }
    }
    return(0);
}

int main(){
    int cant, contMay, contMin, contNum, caso3;
    caso3 = 0;
    char arreglo[300];
    printf("Ingrese la cantidad de caracteres a ingresar \n");
    scanf("%d", &cant);
    getchar();
    while((cant > 1)  || (cant < 300)){
        printf("Error, reintente\n");
        scanf("%d", &cant);
        getchar();
    }
    ingreso(arreglo, cant);
    contMay = cuenta_chr(arreglo, cant, 'A', 'Z');
    contMin = cuenta_chr(arreglo, cant, 'a', 'z');
    contNum = cuenta_chr(arreglo, cant, '0', '9');
    if((contMay + contMin > contNum)){
        printf("Como la suma de los caracteres mayusculas y minusculas es mayor a los caracteres numericos, se mostraran todos los caracteres numericos  del arreglo\n");
        mostrar(arreglo, 0, cant, 1, '0', '9');
        caso3 = 1;
    }
    else{
        if(contMay > contNum){
        printf("Como la suma de los caracteres mayusculas es mayor a los caracteres numericos, se mostraran todos los caracteres numericos  del arreglo\n");
        mostrar(arreglo, 0, cant, 2, 'A', 'Z');
        caso3 = 1;
        }
    }
    if(caso3 == 0){
        printf("Como no se cumplio ninguna condicion de muestra, se mostraran todos los caracteres del final hasta el principio\n");
        mostrar(arreglo, cant, -1, -1, 0, 126);
    }
    return(0);
}