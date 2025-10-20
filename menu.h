#ifndef MENU_H
#define MENU_H
#include<string>
using namespace std;
class Menu
{
    string usuarionormal;
    string usuariopremiun;

public:
    Menu();
    void mostrarmenunormal(string usuarionormal);
    void mostrarmenupremiun(string usuariopremiun);

};

#endif // MENU_H
