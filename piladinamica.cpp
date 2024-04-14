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
