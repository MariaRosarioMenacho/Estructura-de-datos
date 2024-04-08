#include "pila.h"
#include <iostream>
using namespace std;

Pila::Pila() {
    top = -1; // Inicializar la pila como vacía
}

bool Pila::isEmpty() {
    return top == -1; // La pila está vacía si top es -1
}

bool Pila::isFull() {
    return top == MAX_SIZE - 1; // La pila está llena si top es igual al tamaño máximo menos 1
}

void Pila::push(int dato) {
    if (isFull()) {
        // La pila está llena, no se puede insertar más elementos
        cout << "Error: la pila está llena." << endl;
    } else {
        // Incrementar top y agregar el nuevo elemento en esa posición
        top++;
        elementos[top] = dato;
    }
}

int Pila::pop() {
    if (isEmpty()) {
        // La pila está vacía, no se puede eliminar ningún elemento
        cout << "Error: la pila está vacía." <<endl;
        return -1; // Devolver un valor predeterminado
    } else {
        // Devolver el elemento superior y decrementar top
        int dato = elementos[top];
        top--;
        return dato;
    }
}
