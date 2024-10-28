#include "hearders/producto.h"

producto::producto(int c,string n,int u,double p):codigo(c),nombre(n),unidad(u),precio(p){};
producto::producto():codigo(0),nombre(""),unidad(0),precio(0){};
string producto::informacion(){
    return "Codigo:"+to_string(codigo)
           +"\n Producto:"+nombre
           +"\n Unidades:"+to_string(unidad)
           +"\n"
             ""
             ""
             ""
             " Precio:"+to_string(precio);
}
int producto::getCod(){
    return codigo;
}
