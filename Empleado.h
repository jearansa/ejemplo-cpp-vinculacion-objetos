
#ifndef EMPLEADO_H
#define EMPLEADO_H 1

#include <string>

using namespace std;

class Empleado {
      private: string nombre;
      private: long nif;
      // La fecha de nacimiento la almacenamos como un "long" en forma "aaaammdd";
      private: long fecha_nac;

       // Hemos de declarar un constructor sin parámetros,
      // que será el que se invoca desde los constructores de "Vinculacion"
      // de forma oculta al usuario:
      public: Empleado ();
      public: Empleado (string, long, long);
      public: string getNombre();
      public: void setNombre (string);
      public: long getNIF ();
      public: void setNIF (long);
      public: long getFechaNacimiento();
      public: void setFechaNacimiento(long);
};

#endif
