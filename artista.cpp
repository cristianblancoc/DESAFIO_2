#include "artista.h"
using namespace std;

Artista::Artista() {}
Artista::Artista(string n) { nombre = n; }
string Artista::getNombre() { return nombre; }
void Artista::setNombre(string n) { nombre = n; }
