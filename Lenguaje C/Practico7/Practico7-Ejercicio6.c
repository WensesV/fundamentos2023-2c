#include <stdio.h>

int ingresoOp1(char B[],int tam){
    int i, cant;
    printf("Cuantos Caracteres necesita ingresar? Maximo %d\n", tam);
    scanf("%d", cant); getchar();
    while (cant < 0 || cant > tam){
        printf("Error, reintente\n");
        scanf("%d", cant); getchar();
    }
    
    for (i=0; i< tam ; i++){
        printf("Ingrese un caracter");
        scanf("%c",&B[i]);
        getchar();
    }
    return(cant);
} // FIN DE FUNCIÓN ingresoOp1


int ingresoOp2(char B[],int tam){
    printf("Ingresela cadena decaracteres");
    scanf("%s",B);
    return(0);
    } // FIN DE FUNCIÓN ingresoOp2
    
int TamB(char B[]){
    int j;TamB != '\0'; i++)
    {
        /* code */
    }
    
}


int main(){
    charAR[200];
    int cant_A, cant_B;
    ingresoOp1(AR,200);
    ingresoOp2(AR,200);








    return(0);
}
