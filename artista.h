#ifndef ARTISTA_H
#define ARTISTA_H

#include <string>
using namespace std;

class Artista {
private:
    string nombre;

public:
    Artista();
    Artista(string n);
    string getNombre();
    void setNombre(string n);
};

#endif // ARTISTA_H
