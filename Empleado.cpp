
#include "Empleado.h"

using namespace std;

Empleado::Empleado (){
                   this->nombre = "";
                   this->nif = 0;
                   this->fecha_nac = 0;
}

Empleado::Empleado (string nombre, long nif, long fecha_nac){
                   this->nombre = nombre;
                   this->nif = nif;
                   this->fecha_nac = fecha_nac;
}
string Empleado::getNombre (){
       return this->nombre;
}

void Empleado::setNombre (string nombre){
     this->nombre = nombre;
}

long Empleado::getNIF (){
     return this->nif;
}

void Empleado::setNIF (long nif){
     this->nif = nif;
}

long Empleado::getFechaNacimiento(){
     return this->fecha_nac;
}

void Empleado::setFechaNacimiento(long fn){
     this->fecha_nac = fn;
}
