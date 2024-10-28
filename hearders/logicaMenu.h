#ifndef LOGICAMENU_H
#define LOGICAMENU_H
#include "hearders/producto.h"
#include "hearders/tienda.h"
#include "hearders/menu.h"
class logicaMenu{
private:
    producto objP;
    tienda objT;
    menu objM;
    int codigo, unidad;
    string nombre;
    double precio;
public:
    logicaMenu();
    void agregar();
    void buscar();
};

#endif // LOGICAMENU_H
