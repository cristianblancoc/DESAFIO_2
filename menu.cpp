#include "menu.h"
#include "cancionfavorita.h"
#include <iostream>
#include <string>
using namespace std;

Menu::Menu() {}

void Menu::mostrarmenunormal(string usuarionormal)
{
      int opcion;
    cout << "_____MENU_____"<<endl;
    cout << "1. escojer musica"<<endl;
    cout << "2. pasar musica"<<endl;
    cout << "3. pausar musica  "<<endl;
    cin>>opcion;
    if (opcion == 1)
        cout << " Escogiendo musica..." << endl;
    else if (opcion == 2)
        cout << " Pasando a la siguiente cancion..." << endl;
    else if (opcion == 3)
        cout << " Música en pausa." << endl;
    else
        cout << "Opción no válida." << endl;
}

void Menu::mostrarmenupremiun(string usuariopremiun)
{
    int opcion;
    cout << "Bienvenido, " << usuariopremiun << endl;
    cout << "_____MENU PREMIUM_____" << endl;
    cout << "1. Escoger musica" << endl;
    cout << "2. Pasar musica" << endl;
    cout << "3. Pausar musica" << endl;
    cout << "4. Agregar a favoritos" << endl;
    cout << "5. Quitar de favoritos" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    if (opcion == 1)
        cout << " Escogiendo música..." << endl;
    else if (opcion == 2)
        cout << " Pasando a la siguiente canción..." << endl;
    else if (opcion == 3)
        cout << " Música en pausa." << endl;
    else if (opcion == 4){
        string nombre, artista;
         cin.ignore();
        cout << "Ingrese el nombre de la canción: "<<endl;
        getline(cin, nombre);
        cout << "Ingrese el artista: ";
        getline(cin, artista);

        CancionFavorita fav(nombre, artista);
        fav.guardarEnArchivo();

        cout << " Canción agregada a favoritos." << endl;
    }
    else if (opcion == 5){
        string nombre, artista;
         cin.ignore();
     cout << "Ingrese el nombre de la canción que desea eliminar: "<<endl;;
    getline(cin, nombre);
    cout << "Ingrese el artista: ";
    getline(cin, artista);

    CancionFavorita fav(nombre, artista);
    fav.eliminarDeArchivo();
     cout << " Canción eliminada de favoritos." << endl;
    }

    else
        cout << "Opción no válida." << endl;
}
