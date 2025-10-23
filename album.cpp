#include "album.h"
#include <iostream>
#include <fstream>  // Para fstream
using namespace std;

Album::Album() {}
Album::Album(string nombre, Artista artista)
{
    this->nombre = nombre;
    this->artista = artista;
}

void Album::mostrarAlbum()
{
    cout << "Album: " << nombre << " | Artista: " << artista.getNombre() << endl;
}

void Album::cargarDesdeArchivo(string nombreArchivo)
{
    ifstream archivo(nombreArchivo);

    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    string linea;
    string nombreArtista, nombreAlbum;

    while (getline(archivo, linea)) {
        if (linea.find("Artista:") != string::npos) {
            nombreArtista = linea.substr(9); // salta "Artista: "
        }
        else if (linea.find("Album:") != string::npos) {
            nombreAlbum = linea.substr(7); // salta "Album: "
            Artista artista(nombreArtista);
            Album album(nombreAlbum, artista);
            album.mostrarAlbum();
        }
    }

    archivo.close();
}
