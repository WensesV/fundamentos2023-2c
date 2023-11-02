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

const int tam = 3;

struct formis{
    string figura;
    string sabor;
};

void cargarGalletitas(formis galletitas[], int& top, const formis& galleta){
    if(top < tam - 1){
        galletitas[++top] = galleta;
        cout << "Se agrego una galletita formis a la fila" << endl;
    } else {
        cout << "Pila llena! No se pueden meter mas galletitas!" << endl;
    }
}

void buscarFigura(const formis galletitas[], int top, const string& figuraBusc){
    bool encontrada = false;
    for(int i = top; i >= 0; i--){
        if(galletitas[i].figura == figuraBusc){
            cout << "Se encontró una galleta con figura de " << figuraBusc << endl;
            encontrada = true;
            break;
        }
    }
    if(!encontrada){
        cout << "No se encontró una galleta con figura de " << figuraBusc << endl;
    }
}

void mostrarNoChocolate(const formis galletitas[], int top) {
    for(int i = top; i >= 0; i--){
        if(galletitas[i].sabor != "chocolate"){
            cout << "Galletita: " << galletitas[i].figura << ", Sabor: " << galletitas[i].sabor << endl;
        }
    }
}

int main(){
    formis galletitas[tam];
    int top = -1;
    formis galletita1 = {"pez", "limon"};
    formis galletita2 = {"gato", "naranja"};
    formis galletita3 = {"perro", "chocolate"};
    cargarGalletitas(galletitas, top, galletita1);
    cargarGalletitas(galletitas, top, galletita2);
    cargarGalletitas(galletitas, top, galletita3);
    string figuraBuscada = "perro";
    buscarFigura(galletitas, top, figuraBuscada);
    cout << "Galletas que no son de chocolate:" << endl;
    mostrarNoChocolate(galletitas, top);
    return 0;
}
