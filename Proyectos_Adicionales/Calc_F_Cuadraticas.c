#include <stdlib.h>
#include <stdio.h>
#include <math.h> //Agregamos esta libreria para poder utilizar algunas funciones matematicas


float discriminante(float a, float b , float c){
    float res;
    res = ((b*b)-((4*a)*c));
    return(res);
}

float raiz1(float x, float y, float p){
    float res1;
    res1 = ((-y)+p)/(2*x);
    return(res1);
}

float raiz2(x,y,p){
    float res2;
    res2 = ((-y)-p)/(2*x);
    return(res2);
}

int main()
{
    float a, b, c, d, x1, x2;
    int exit = 1;
    while (exit == 1) 
    {
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

        printf("Ingrese el valor de a:\n");
        scanf("%f", &b);
        getchar();

        d = discriminante(a,b,c); 

        if (d == 0)
        {
            x1 = raiz1(a,b,d);
            x2 = x1;
            printf("La unica solucion a la ecuacion es: %f \n", x1);
        }
        if (d > 0)
        {
            x1 = raiz1(a,b,d);
            x2 = raiz2(a,b,d);
            printf("Las soluciones a la ecuacion es: x1 = %f, x2 = %f \n", x1, x2);
        } 
        if (d < 0)
        {
            printf("La ecuacion cuadratica no tiene soluciones reales");
        }

        printf("Su ordenada al origen es el valor %f \n", c);
        
    }
    
    return 0;
}
