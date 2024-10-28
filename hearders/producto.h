#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace std;

class producto{
private:
    int codigo;
    string nombre;
    int unidad;
    double precio;
public:
    producto(int,string,int,double);
    producto();
    string informacion();
    int getCod();
};

#endif // PRODUCTO_H
