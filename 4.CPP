#include <iostream>
using namespace std;
float potencia(float base, float exponente); 
int factorial (int fact);
float serie(float x, int n);

int main()
{
int opcion, n;
float base, exponente, x;
    do
    {
    cout<<endl<<"MENU"<<endl;
    cout<<"1. Potencia"<<endl;
    cout<<"2. Factorial"<<endl;
    cout<<"3. Serie"<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"Ingresa una opcion: "<<endl;
    cin>>opcion;
      switch (opcion)
      {
        case 1: cout<<"ingrese la base:";
        do{
            cin>>base;
          }while (base<=0);
          cout<<"ingrese el exponente:"<<endl;
          do{
              cin>>exponente;
            }while (exponente<=0);
            cout<<"la potencia es:"<<potencia(base,exponente);
        break;
        
        case 2: cout<<"ingrese el numero hasta el limite";
        do{
        cin>>n;
        }while(n<0);
        cout<<"el factorial es: "<<factorial(n);
        break;
        
        case 3: cout<<"ingrese el valor de x: "<<endl;
        cin>>x;
        cout<<"ingrese el valor de n: "<<endl;
        cin>>n;
        cout<<"la serie es: "<<serie(x,n)<<endl;
        break;
        
        case 0: cout<<"el programa ha terminado"<<endl;
        break;
        default: cout<<"ingrese una opcion valida"<<endl;
      }
    } while (opcion!=0);
return 0;
}

float potencia(float base, float exponente)
{
    float r=1;
    for(int i=1; i<=exponente; i++)
        r*=base;
    return r;
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
    float suma=0, m;
    for(int i=2; i<=n; i=i+2)
        suma=suma+potencia(x,i)/factorial(i);
    return suma+3+x;
}
