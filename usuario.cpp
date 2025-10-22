#include "usuario.h"

Usuario::Usuario() {}

void Usuario::iniciarSesion() {
    cout << "Ingrese usuario: ";
    cin >> nombre;
    cout << "Ingrese contraseña: ";
    cin >> contrasena;

    ifstream archivo("usuarios.txt");
    string u, c, t;
    bool encontrado = false;

    while (archivo >> u >> c >> t) {
        if (u == nombre && c == contrasena) {
            encontrado = true;
            tipo = t;

            Menu menu;
            if (tipo == "premium")
                menu.mostrarmenupremiun(nombre);
            else
                menu.mostrarmenunormal(nombre);
            break;
        }
    }

    if (!encontrado)
        cout << "Usuario o contraseña incorrecta."<<endl;

    archivo.close();
}
