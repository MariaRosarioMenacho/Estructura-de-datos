#include <iostream>
#define MAX 100
using namespace std;

class Cola
{
private:
    int info[MAX];
    int inicio, fin;

public:
    Cola(void);
    bool Encolar(int Valor);
    bool Desencolar(void);
    bool PrimeroCola(int &Valor);
    bool ColaVacia(void);
    void mostrar(void);
    void VaciarCola(void);
};
