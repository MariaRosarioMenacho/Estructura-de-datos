#include “Humano.h”
#include <iostream>
using namespace; 

void Humano::set_edad(int e) {
      edad=e;
}

int Humano::get_edad(){
      return edad;
}

void Humano::set_nombre(string n){
     nombre=n;
}

string Humano::get_nombre(){
     return nombre;
}

void Humano::set_ocupacion(string o){
     ocupacion=o;
}

string Humano::get_ocupacion(){
    return ocupacion;
}
