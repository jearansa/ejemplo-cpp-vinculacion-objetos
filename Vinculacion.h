
#ifndef VINCULACION_H
#define VINCULACION_H 1

#include "Empleado.h"
#include "Empresa.h"

class Vinculacion{
      // Observar el uso de objetos para los atributos de las clases "Empresa"
      // y "Empleado"; Esto nos "obliga" a que las clases Empleado y Empresa tengan
      // un constructor sin parámetros, que será usado en los constructores de
      // la clase "Vinculacion" de forma "automática" por C++ (y oculta al
      // usuario)
      // Existe otra forma de hacerlo: http://www.learncpp.com/cpp-tutorial/8-5a-constructor-member-initializer-lists/
      // pero no sería válida para, por ejemplo, trabajar con vectores.

      private: Empleado empl;
      private: Empresa empr;
      private: long iniContr;
      private: long finContr;

      public: Vinculacion ();
      public: Vinculacion(Empleado, Empresa, long, long);
      public: Empleado getEmpleado();
      public: void setEmpleado (Empleado);
      public: Empresa getEmpresa ();
      public: void setEmpresa (Empresa);
      public: long getInicioContrato ();
      public: void setInicioContrato (long);
      public: long getFinContrato();
      public: void setFinContrato(long);
};

#endif
