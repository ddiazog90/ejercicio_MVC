#include "hearders/tienda.h"

bool tienda::registrar(producto p){
    productos.push_back(p);
    return true;
};
producto tienda::buscar(int cod){
    producto *objP=nullptr;
    for(auto &p:productos){
        if(p.getCod()==cod){
            objP=&p;
        }
    }
    return *objP;
};
