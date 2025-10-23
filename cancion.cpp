#include "cancion.h"

Cancion::Cancion(string n, int d) {
    nombre = n;
    duracion = d;
}

string Cancion::getNombre() { return nombre; }
int Cancion::getDuracion() { return duracion; }

void Cancion::mostrar() {
    cout << "   Canción: " << nombre << " (" << duracion << " seg)" << endl;
}
