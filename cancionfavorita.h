#ifndef CANCIONFAVORITA_H
#define CANCIONFAVORITA_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class CancionFavorita {
private:
    string nombreCancion;
    string artista;

public:
    CancionFavorita();
    CancionFavorita(string nombre, string art);
    void guardarEnArchivo();
    void eliminarDeArchivo();
};


#endif // CANCIONFAVORITA_H
