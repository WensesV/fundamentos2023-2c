/*Fila: paintBall

Se tiene un Arma: pistola de balas de pintura, que se recarga por un tubo, donde se
insertan las pelotitas de pintura verde fosforescente. En el orden que van
ingresando las balas, se van a ir disparando(fifo).
Cada bala de pintura tiene un código de dos dígitos que la identifica.
El cargador del arma, se ve en las figuras.
Se necesita

A) un procedimiento “recarga10” balas y

B) Otro “dispara1” del arma (valide que haya elementos).

C) Entre las balas de pintura, una función “Buscar” si la próxima a disparar
en el ARMA tiene el número ingresado por consola (cin)*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> tubo;

void recarga10() {
    int codUlti = (tubo.empty()) ? 1 : tubo.back() + 1;

    for (int i = 0; i < 10; i++) {
        tubo.push_back(codUlti++);
    }
    cout << "Se han recargado 10 balas de pintura en el tubo." << endl;
}

void dispara1() {
    if (!tubo.empty()) {
        int bala = tubo.front();
        tubo.erase(tubo.begin());
        cout << "Se disparo " << bala << endl;
    } else {
        cout << "Tubo vacio, imposible disparar." << endl;
    }
}

bool buscar(int num) {
    if (!tubo.empty()) {
        int proxBala = tubo.front();
        if (proxBala == num) {
            cout << "Se encontro la bala, procederemos a dispararla." << endl;
            dispara1();
            return true;
        }
    } else {
        cout << "El tubo esta vacio. Debes recargar." << endl;
    }
    return false;
}

int main() {
    int codigo;

    recarga10();
    dispara1();

    cout << "Ingrese el codigo de la bala a buscar: ";
    cin >> codigo;

    buscar(codigo);

    return 0;
}
