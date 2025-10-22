#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include "menu.h"
#include <iostream>
#include <fstream>
using namespace std;

class Usuario {
private:
    string nombre;
    string contrasena;
    string tipo;

public:
    Usuario();
    void iniciarSesion();
};

#endif // USUARIO_H
