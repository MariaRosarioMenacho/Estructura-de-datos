/*  */
#include <iostream>
using namespace std;
void potencia(float base, float exponente, float &resultado); //& indica que es por referencia
int factorial(int fact);
float serie(float x, int n);

int main()
{
    int opcion, n;
    float base , exponente, x, result;
    do{
        cout<<"menu:"<<endl;
        cout<<"1. potencia"<<endl;
        cout<<"2. factorial"<<endl;
        cout<<"3. serie"<<endl;
        cout<<"0. salir"<<endl;
        cout<<"selcciona una opcion";
        cin>>opcion;
        switch(opcion!=0)
        {
            case 1: cout<<"ingrese base: ";
                    cin>>base;
                    cout<<"ingrese exponente: ";
                    cin>>exponente;
                    cout<<"la potencia es: "<<potencia(base, exponente);
            break;
            
            case 2: cout<<"ingrese el numero limite: "<<endl;
                    cin>>n;
                    cout<<"el factorial es:"<<factorial(n);
            break;
                    
            case 3:
                    cout<<"ingrese el valor de x: ";
                    cin>>x;
                    cout<<"ingrese el valor de n: ";
                    cin>>n;
                    cout<<"la series es: "<<serie(x,n);
            break;
            case 0: cout<<"el programa ha terminado";
            break;
            
            default: cout<<"ingrese una opcion valida";
        }
    } while (opcion!=0)
    void potencia(float base, float exponente, float result)
    
 
void potencia(float base, float exponente, float &r)
{
    float r=1;
    for(int i=1; i<=exponente; i++)
        r*=base;
    // no se reuiere return r porque el resultado esta en r, estamos usando void 
}

int factorial(int fact)
{
    int resultado=1;
    for(int i=2; i<=fact; i++)
        resultado*=i;
    return resultado;
}

float serie(float x, int n)
{
    float suma=0;
    for(int i=2; i<=n; i=i+2)
    {
        potencia(x,i,m);
        suma=suma+m/fcatorial(i);
    }
    return suma+3+x;
}
