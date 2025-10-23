#ifndef CANCION_H
#define CANCION_H
#include <iostream>
#include <string>
using namespace std;

class Cancion {
private:
    string nombre;
    int duracion;

public:
    Cancion() {}
    Cancion(string n, int d);
    string getNombre();
    int getDuracion();
    void mostrar();
};

#endif // CANCION_H
