#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Tamaño máximo de la pila

class Pila {
private:
    int elementos[MAX_SIZE];
    int top; // Índice del elemento superior de la pila

public:
    Pila(); // Constructor
    bool isEmpty(); // Verificar si la pila está vacía
    bool isFull(); // Verificar si la pila está llena
    void push(int dato); // Insertar un elemento en la pila
    int pop(); // Eliminar y devolver el elemento superior de la pila
};
