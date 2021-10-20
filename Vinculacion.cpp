
#include "Vinculacion.h"

Vinculacion::Vinculacion(){
                           // Esta inicialización es redundante; ya la ha hecho C++
                           // en la "cabecera", llamando al constructor sin parámetros
                           this->empl = Empleado();
                           this->empr = Empresa();
                           this->iniContr = 0;
                           this->finContr = 0;
}

Vinculacion::Vinculacion(Empleado e1, Empresa e2, long fi, long ff){
                                  // Una cuestión importante;
                                  // ¿Cómo hemos pasado los parámetros e1 y e2?
                                  // ¿A qué direcciones de memoria apuntarán
                                  // ahora "this->empl" y "this->empr"?
                                  this->empl = e1;
                                  this->empr = e2;
                                  this->iniContr = fi;
                                  this->finContr = ff;
}

Empleado Vinculacion::getEmpleado(){
         return this->empl;
}

void Vinculacion::setEmpleado (Empleado e1){
     this->empl = e1;
}

Empresa Vinculacion::getEmpresa (){
         return this->empr;
}

void Vinculacion::setEmpresa (Empresa e1){
     this->empr = e1;
}

long Vinculacion::getInicioContrato (){
     return this->iniContr;
}

void Vinculacion::setInicioContrato (long ic){
     this->iniContr = ic;
}

long Vinculacion::getFinContrato(){
     return this->finContr;
}

void Vinculacion::setFinContrato(long fc){
     this->finContr = fc;
}
