
#include <cstdlib>
#include <iostream>
#include "Vinculacion.h"

using namespace std;

int main (){

    Empleado e1 ("Pepe", 1234, 19501111);
    Empresa e2 ("Tara", 4321);

    Vinculacion v0; // Recuerda que v0 est� construido con "Vinculacion ()"
    Vinculacion v1 (e1, e2, 20201003, 20221003);

    // Todas los objetos del vector se han construido autom�ticamente
    // por medio del constructor "Vinculacion()"
    Vinculacion v2 [15];
    // Lo siguiente es ahora una operaci�n segura a nivel de tipos:
    v2[7].getEmpresa().getCIF ();

    // Atenci�n, aqu� no estamos "asignando" referencias, C++ est� copiando
    // internamente los objetos, como en el paso de par�metros por valor:
    v2 [0] = v1;

    cout << endl << "El nombre de la empresa es " << v1.getEmpresa().getNombre() << endl << endl;

    // Ahora han desaparecido los efectos laterales; al estar trabajando con objetos,
    // C++ autom�ticamente los copia, por medio del constructor de copia, y
    // los cambios sobre uno de ellos no afectan al resto de lugares donde
    // aparezca ese objeto:

    e2.setNombre ("Lara");

    cout << "El nombre de la empresa e2 ahora es " << e2.getNombre() << endl << endl;
    cout << "Sin embargo, a través del objeto v1 tenemos que la empresa es " << v1.getEmpresa().getNombre() << endl << endl;
    cout << "Y a través del vector también es " << v2[0].getEmpresa().getNombre() << endl << endl;

    // El hecho de que internamente se use el constructor de copia, y de que
    // nosotros no lo hayamos definido, implica que en algunos casos el mismo
    // podr�a tener un comportamiento an�malo, y no realizar las copias de forma
    // adecuada; puedes encontrar una explicaci�n detallada en
    // http://www.cplusplus.com/articles/y8hv0pDG/

    system ("PAUSE");
    return 0;
}
