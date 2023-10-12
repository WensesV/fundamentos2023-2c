#include <stdlib.h>
#include <stdio.h>
#include <math.h> //Agregamos esta libreria para poder utilizar algunas funciones matematicas, como por ejemplo. Raiz cuadrade de un numero


float discriminante(float a, float b , float c){
    float res;
    res = ((b*b)-((4*a)*c));
    return(res);
}

float raiz1(float x, float y, float p){
    float res1;
    res1 = ((-y)+(sqrt(p)))/(2*x);
    return(res1);
}

float raiz2(float x,float y,float p){
    float res2;
    res2 = ((-y)-(sqrt(p)))/(2*x);
    return(res2);
}

float verticex(float x, float y){
    float res3;
    res3 = (-y)/(2*x);
    return(res3);
}

float verticey(float x, float y, float z, float v){
    float res4;
    res4 = (x*(v*v))+(y*v)+(z);
    return(res4);
}

int main()
{
    float a, b, c, d, x1, x2, vx, vy;
    int exit = 1;
    while (exit == 1){
        printf("Calculadora para resolver ecuaciones cuadratica\n");
        printf("Suponiendo que la ecuacion general de una ecuacion cuadratica es: ax^2 + bx + c \n");
        printf("Ingrese el valor de a:\n");
        scanf("%f", &a);
        getchar();
        while (a==0)
        {
            printf("a debe de ser distinto de cero para considerarse una funcion cuadratica:\n");
            scanf("%f", &a);
            getchar();
        }
        printf("Ingrese el valor de b:\n");
        scanf("%f", &b);
        getchar();
        printf("Ingrese el valor de c:\n");
        scanf("%f", &c);
        getchar();
        d = discriminante(a,b,c);
        vx = verticex(a,b);
        vy = verticey(a,b,c,vx);
        if (d == 0){
            x1 = raiz1(a,b,d);
            x2 = x1;
            printf("La unica solucion a la ecuacion es: %f \n", x1);
        }
        if (d > 0){
            x1 = raiz1(a,b,d);
            x2 = raiz2(a,b,d);
            printf("Las soluciones a la ecuacion es: x1 = %f, x2 = %f \n", x1, x2);
        }
        if (d < 0){
            printf("La ecuacion cuadratica no tiene soluciones reales");
        }
        printf("Su ordenada al origen es el valor %f \n", c);
        printf("El vertice de la ecuacion cuadratica esta en el punto: ( %f , %f)", vx, vy);
        printf("Desea calcular otra ecuacion cuadratica? 1 = Reintentar, 0 = Salir\n");
        scanf("%d", &exit);
        getchar();
        while((exit != 0) && (exit != 1)){
            printf("Debe ingresar o 0, o 1. Reintente\n");
            scanf("%d", &exit);
            getchar();
        }
    }
    printf("Gracias por utilizar la calculadora de funciones cuadratica creada por WensesV\n");
    getchar();
    return 0;
}