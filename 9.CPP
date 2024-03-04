ESTUDIANTE CPP
#include "Estudiante.h"
#include <iostream>
#include <string>

using namespace std;

Estudiante::Estudiante() { 

}
Estudiante::~Estudiante() {

}
void Estudiante::get_nombre(string _n)
{
	//Da valores al atributo nombre de la clase
	nombre = _n;
}
string Estudiante::get_nombre()
{
	return nombre;
}

