/*
Se tiene una PILA “galletas”, compuesta por un arreglo de TAM 3. struct formis: que guarda
figura(pez/gato/perro), y sabor(limon/naranja/chocolate)
USAR PROCEDIMIENTOS para
a. A) CARGAR 3 galletas formis diferentes
b. B) Buscar un numero una figura de animal formis, avisar si la
encuentra o si no.
c. C) MOSTRAR todas las formis, que no sean de chocolate.
*/



#include <iostream>
#include <string>
using namespace std;

const int tamanio = 3;

struct formis {
    string figura;
    string sabor;
};

void cargarGalletitas(formis galletitas[], int& tope, const formis& galleta) {
    if (tope < tamanio - 1) {
        galletitas[++tope] = galleta;
        cout << "Se cargó exitosamente una galleta Formis en la pila." << endl;
    } else {
        cout << "Ups, la pila está llena. No se pueden cargar más galletas." << endl;
    }
}

void buscarFigura(const formis galletitas[], int tope, const string& figuraBuscada) {
    bool encontrada = false;

    for (int i = tope; i >= 0; i--) {
        if (galletitas[i].figura == figuraBuscada) {
            cout << "Se encontró una galleta con figura de " << figuraBuscada << endl;
            encontrada = true;
            break;
        }
    }

    if (!encontrada) {
        cout << "No se encontró una galleta con figura de " << figuraBuscada << endl;
    }
}

void mostrarNoChocolate(const formis galletitas[], int tope) {
    for (int i = tope; i >= 0; i--) {
        if (galletitas[i].sabor != "chocolate") {
            cout << "Galletita: " << galletitas[i].figura << ", Sabor: " << galletitas[i].sabor << endl;
        }
    }
}

int main() {
    formis galletitas[tamanio];
    int tope = -1;

    formis galletita1 = {"pez", "limon"};
    formis galletita2 = {"gato", "naranja"};
    formis galletita3 = {"perro", "chocolate"};

    cargarGalletitas(galletitas, tope, galletita1);
    cargarGalletitas(galletitas, tope, galletita2);
    cargarGalletitas(galletitas, tope, galletita3);

    string figuraBuscada = "perro";
    buscarFigura(galletitas, tope, figuraBuscada);

    cout << "Galletas que no son de chocolate:" << std::endl;
    mostrarNoChocolate(galletitas, tope);

    return 0;
}
