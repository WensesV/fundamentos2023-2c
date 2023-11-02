/*Dadas dos matrices de 4x4, matrizA y matrizB, y una tercera matriz resultado donde
almacenaremos la suma de las dos matrices.

a. Arme la funcion cargarAleatoria, recibe una matriz y la carga con random entre 1 a 10.

b. Armar una a función multiMatrix recibe las dos matrices de entrada y la matriz de
resultado, y realiza el producto elemento por elemento, en matrizC. 

Definir las constantes para indicar las dimensiones de las matrices. La función multiMatrix toma
las matrices, y calcula el producto de las matrices, almacenando el resultado en la
matrizC resultado. Se utiliza el algoritmo tradicional de multiplicación de matrices.
c. Otro procedimiento imprimirMatrix se utiliza para imprimir una matriz en la consola.
En la función main, debes crear las matrices de ejemplo matrizA y matrizB, cargarlas con
aleatorios de 1 a 10, y luego acto seguido, imprimimos las tres matrices en la consola con la
función imprimirMatrix

*/

#include <iostream>
#include <ctime>

using namespace std;

void cargarAleatoria(int matriz[][4]){
    srand(time(0));
    for (int fila = 0; fila < 4; fila++) {
        for (int colum = 0; colum < 4; colum++) {
            matriz[fila][colum] = rand() % 10 + 1;
        }
    }
    cout << "Se realizó una carga aleatoria de la matriz" << endl;
}

void multiMatrix(int Matriz_A[][4], int Matriz_B[][4], int Matriz_C[][4]){
    for (int fila = 0; fila < 4; fila++) {
        for (int colum = 0; colum < 4; colum++) {
            Matriz_C[fila][colum] = Matriz_A[fila][colum] * Matriz_B[fila][colum];
        }
    }
    cout << "Se realizó una multiplicación de matrices" << endl;
}

void imprimirMatrix(int matriz[][4]){
    for (int fila = 0; fila < 4; fila++) {
        for (int colum = 0; colum < 4; colum++) {
            cout << matriz[fila][colum] << " ";
        }
        cout << endl;
    }
}

int main(){
    int matrizA[4][4];
    int matrizB[4][4];
    int matrizC[4][4];
    cargarAleatoria(matrizA);
    cargarAleatoria(matrizB);
    multiMatrix(matrizA, matrizB, matrizC);
    cout << "Valores de la Matriz A" << endl;
    imprimirMatrix(matrizA);
    cout << "Valores de la Matriz B" << endl;
    imprimirMatrix(matrizB);
    cout << "Valores de la Matriz C" << endl;
    imprimirMatrix(matrizC);
    cout << "Fin de la ejecucion con exito" << endl;
    return 0;
}