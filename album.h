#ifndef ALBUM_H
#define ALBUM_H
#include <string>
#include "artista.h"
using namespace std;

class Album {
private:
    string nombre;
    Artista artista;

public:
    Album();
    Album(string nombre, Artista artista);
    void mostrarAlbum();
    void cargarDesdeArchivo(string nombreArchivo); // lee los álbumes
};

#endif // ALBUM_H
