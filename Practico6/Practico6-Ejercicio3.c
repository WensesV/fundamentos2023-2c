/*3. Dada la siguiente solución expresada en lenguaje de problema:

Versión 1
t1. Definir variables e inicializar variables.
t2. Ingresar y almacenar 10 números enteros.
t3. Contar la cantidad de números positivos y la cantidad de números negativos descartando el 0.
t4. Mostrar los dos resultados calculados en t3.

Versión 2
t1.1. Definir objeto NUM que es un arreglo de 10 posiciones de tipo entero.
t1.2. Definir objetos ind, contp y contn de tipo entero.
t1.3. Asignar al objeto ind el valor 0.
t1.4. Asignar a los objetos contp y contn el valor 0.
Mientras el valor de ind sea menor a 10
    t2.1. Ingresar un número y guardarlo en el arreglo NUM en la posición que indica ind.
    t2.2. Incrementar el valor de ind en 1.
t3.1. Asignar al objeto ind el valor 0.
Mientras el valor de ind sea menor a 10
    Si NUM en la posición ind es mayor a 0
        t3.2. Asignar al objeto contp el valor contp +1.
    Si NUM en la posición ind es menor a 0
        t3.3. Asignar al objeto contn el valor contn +1.
        t3.4. Incrementar el valor de ind en 1.
t4.1. Mostrar el valor de contp.
t4.2. Mostrar el valor de contn

Se pide:
a) Codificar la V2, en Lenguaje C, colocar carteles necesarios para ayudar al usuario.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int NUM[10];
    int ind, contp, contn;
    ind = 0;
    contp, contn = 0;
    while (ind < 10){
        printf("Ingrese un numero\n");
        scanf("%d", &NUM[ind]);
        getchar();
        ind = ind++;
    }
    ind = 0;
    while(ind < 10){
        if (NUM[ind] > 0){
            contp = contp++;
        }
        if (NUM[ind] < 0){
            contn = contn++;
        }
    }
    printf("La cantidad de numeros positivos ingresados es de : %d \n", contp);
    printf("La cantidad de numeros negativos ingresados es de : %d", contn);
    return 0;
}


//b) Indicar cuántas sentencias de Repetición uso y cuántas de selección uso.

Se utilizo dos sentencias de repeticion y dos sentencias de seleccion.


//c) Que sentencias de repetición uso. ¿Podría usar solamente la sentencia de repetición for?
//Justificar.

Respuesta: Se utilizaron dos sentencias de repeticion while, mientras que la primera puede sustituirse por una sentencia de repeticion for, ya que cumple con variable de inicializacion 'ind', una condicon ind < 10, y al final de la ejecucion del codigo interno del while tenemos un incremento de nuestra variable ind.