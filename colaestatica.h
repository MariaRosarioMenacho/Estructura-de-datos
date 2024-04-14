#include "cola.h"
#include <iostream>
using namespace std;
Cola::Cola(void)
{
    inicio = 0;
    fin = 0;
}

bool Cola::ColaVacia(void)
{
    return inicio == fin;
}

bool Cola::Encolar(int Valor)
{
    if (fin == MAX)
    {
        cout << "Error: La cola está llena." << endl;
        return false;
    }
    else
    {
        info[fin] = Valor;
        fin++;
        return true;
    }
}

bool Cola::PrimeroCola(int &Valor)
{
    if (ColaVacia())
    {
        cout << "Error: La cola está vacía." << endl;
        return false;
    }
    else
    {
        Valor = info[inicio];
        return true;
    }
}

bool Cola::Desencolar(void)
{
    if (ColaVacia())
    {
        cout << "Error: La cola está vacía." << endl;
        return false;
    }
    else
    {
        inicio++;
        return true;
    }
}

void Cola::mostrar()
{
    if (ColaVacia())
    {
        cout << "La cola está vacía." << endl;
    }
    else
    {
        cout << "Contenido de la cola:" << endl;
        for (int i = inicio; i < fin; i++)
            cout << "[" << info[i] << "] ";
        cout << endl;
    }
}

void Cola::VaciarCola(void)
{
    inicio = 0;
    fin = 0;
    cout << "La cola ha sido vaciada." << endl;
}
