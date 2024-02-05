
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c, d=0, x1, x2;
    cout<<"Ingrese el valor de a"<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b"<<endl;
    cin>>b;
    cout<<"Ingrese el valor de c"<<endl;
    cin>>c;
    
    double d=b*b-4*a*c;
    if(d<0)
    {
        cout<<"La ec no tiene solucion real"endl;
    }
    double x1=(-b+sqrt(d))/(2*a);
    double x2=(-b-sqrt(d))/(2*a);
    if(d==0)
    {
      cout<<"la solucion es:"<<x1<<endl;
    } else {
        cout<<"la soluciones son: "<<x1<<"  "<<x2<<endl;
    }

    return 0;
}
