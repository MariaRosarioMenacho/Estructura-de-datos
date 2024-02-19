#include <iostream>
using namespace std;
void potencia(float base, float exponente, float &resultado); 
int factorial (int fact);
float serie(float x, int n);

int main()
{
int opcion, n;
float base, exponente, result, x;
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
            potencia(base,exponente,result);
            cout<<"la potencia es:"<<result;
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

void potencia(float base, float exponente, float &r)
{
    r=1;
    for(int i=1; i<=exponente; i++)
        r*=base;
    //no se retorna por el void
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
    {
        potencia(x,i,m);
        suma=suma+m/factorial(i);
    }
    return suma+3+x;
}
