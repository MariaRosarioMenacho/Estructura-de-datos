#include <iostream>
#include <string>
using namespace std;
class Nodo {
public:
    int dato;
    string nombre;
    Nodo* sig;
    // Constructor de Nodo
    Nodo() {
        dato = 0;
        nombre = "";
        sig = NULL;
    }
};
class Pila {
private:
    Nodo* tope;

public:
    Pila() {
        tope = NULL;
    }

    void push();
    void pop();
    void show();
    void top();
    void size();
};

