
#include "Empresa.h"

using namespace std;

Empresa::Empresa(){
                   this->nombre = "";
                   this->cif = 0;
}

Empresa::Empresa (string nombre, long ci){
                   this->nombre = nombre;
                   this->cif = cif;
}

string Empresa::getNombre (){
       return this->nombre;
}

void Empresa::setNombre (string nombre){
     this->nombre = nombre;
}

long Empresa::getCIF (){
     return this->cif;
}

void Empresa::setCIF (long cif){
     this->cif = cif;
}
