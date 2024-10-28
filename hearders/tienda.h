#ifndef TIENDA_H
#define TIENDA_H
#include "hearders/producto.h"
#include <vector>

class tienda{
private:
    vector<producto> productos;
public:
    bool registrar(producto);
    producto buscar(int);
};

#endif // TIENDA_H
