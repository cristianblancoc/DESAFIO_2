#include <iostream>
#include <fstream>
#include <string>
#include "menu.h"
using namespace std;

int main() {
    string usuario, contrasena;
    cout << "Ingrese usuario: ";
    cin >> usuario;
    cout << "Ingrese contraseña: ";
    cin >> contrasena;

    ifstream archivo("usuarios.txt");
    string u, c, tipo;
    bool encontrado = false;

    while (archivo >> u >> c >> tipo) {
        if (u == usuario && c == contrasena) {
            encontrado = true;
            Menu menu;
            if (tipo == "premium")
                menu.mostrarmenupremiun(usuario);
            else
                menu.mostrarmenunormal(usuario);
        }
    }

    if (!encontrado)
        cout << "Usuario o contraseña incorrecta.\n";

    archivo.close();
    return 0;
}
