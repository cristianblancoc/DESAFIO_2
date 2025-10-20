TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        album.cpp \
        artista.cpp \
        cancion.cpp \
        cancionfavorita.cpp \
        creditos.cpp \
        main.cpp \
        menu.cpp \
        reproducion.cpp \
        usuario.cpp \
        usuariopremiun.cpp

HEADERS += \
    album.h \
    artista.h \
    cancion.h \
    cancionfavorita.h \
    creditos.h \
    menu.h \
    reproducion.h \
    usuario.h \
    usuariopremiun.h
