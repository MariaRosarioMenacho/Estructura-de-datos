// Ejestudiante.cpp : Este archivo contiene la función "main". La ejecución del programa
#incLude "Estudiante. h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
//Declarar un objeto de la clase estudiante
Estudiante alumno;
string nombre;
cout << "Ingrese el nombre:";
getline(cin, nombre);
alumno.set_nombre(nombre); //Llamando al metodo set_nombre de la clase Estudiante
cout << "El nombre del estudiante es: " << alumno.get_nombre();
cout << " El nombre es: " << nombre; //Muestra la variable local
return 0;
}
