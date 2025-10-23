#include "usuario.h"
#include "album.h"

int main() {
    Usuario u;
    u.iniciarSesion();
    Album a;
    a.cargarDesdeArchivo("albunes.txt");
    return 0;
}


