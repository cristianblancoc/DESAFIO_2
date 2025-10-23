#include "cancionfavorita.h"

CancionFavorita::CancionFavorita() {}

CancionFavorita::CancionFavorita(string nombre, string art) {
    nombreCancion = nombre;
    artista = art;
}

void CancionFavorita::guardarEnArchivo() {
    ofstream archivo("favoritos.txt", ios::app);
    if (archivo.is_open()) {
        archivo << "Cancion: " << nombreCancion << "  Artista: " << artista << endl;
        archivo.close();
        cout << " Canción guardada en favoritos." << endl;
    } else {
        cout << " No se pudo abrir el archivo de favoritos." << endl;
    }
}

void CancionFavorita::eliminarDeArchivo() {
    ifstream entrada("favoritos.txt");
    ofstream salida("temp.txt");

    if (!entrada.is_open() || !salida.is_open()) {
        cout << " No se pudo abrir el archivo." << endl;
        return;
    }

    string linea;
    string borrar = "Canción: " + nombreCancion + " - Artista: " + artista;
    bool encontrada = false;

    while (getline(entrada, linea)) {
        if (linea != borrar)
            salida << linea << endl;
        else
            encontrada = true;
    }

    entrada.close();
    salida.close();

    remove("favoritos.txt");
    rename("temp.txt", "favoritos.txt");

    if (encontrada)
        cout << "  Canción eliminada de favoritos." << endl;
    else
        cout << "  La canción no estaba en la lista de favoritos." << endl;
}
