
#ifndef EMPRESA_H
#define EMPRESA_H 1

#include <string>

using namespace std;

class Empresa {
      private: string nombre;
      private: long cif;

      // Hemos de declarar un constructor sin parámetros,
      // que será el que se invoca desde los constructores de "Vinculacion"
      // de forma oculta al usuario:
      public: Empresa ();
      public: Empresa (string, long);
      public: string getNombre();
      public: void setNombre (string);
      public: long getCIF ();
      public: void setCIF (long);
};

#endif
