#include "pila.h"
#include <iostream>
using namespace std;

void Pila::push() {
    int valor;
    string valor2;
    Nodo* aux = new Nodo;
    cout << "Ingresa el id del proceso: ";
    cin >> valor;
    cout << "Ingresa el nombre del proceso: ";
    cin.ignore();
    getline(cin, valor2);
    aux->dato = valor;
    aux->nombre = valor2;
    aux->sig = NULL;

    if (aux != NULL) {
        if (tope == NULL) {
            tope = aux;
        }
        else {
            aux->sig = tope;
            tope = aux;
        }
        cout << "Nuevo proceso insertado en la pila!\n";
    }
}

void Pila::pop() {
    if (tope == NULL) {
        cout << "\nLa pila esta vacia!\n\n";
        return;
    }

    Nodo* temp = tope;
    tope = tope->sig;
    cout << "\nEl proceso eliminado es: " << temp->dato << " - " << temp->nombre << "\n" << endl;
    delete temp;
}

void Pila::show() {
    Nodo* aux1 = tope;
    if (tope == NULL) {
        cout << "\nLa pila esta vacia!\n\n";
        return;
    }

    cout << "Procesos:\n" << endl;
    while (aux1 != NULL) {
        cout << aux1->dato << " - " << aux1->nombre << "\n" << endl;
        aux1 = aux1->sig;
    }
}

void Pila::top() {
    if (tope == NULL) {
        cout << "\nLa pila esta vacia!\n\n";
        return;
    }

    cout << "Proceso TOP:\n" << endl;
    cout << tope->dato << " - " << tope->nombre << "\n" << endl;
}

void Pila::size() {
    if (tope == NULL) {
        cout << "\nLa pila esta vacia!\n\n";
        return;
    }

    int contador = 0;
    Nodo* aux1 = tope;
    while (aux1 != NULL) {
        contador++;
        aux1 = aux1->sig;
    }

    cout << "El tamano de la pila es: '" << contador << "'\n" << endl;
}

