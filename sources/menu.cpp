#include "hearders/menu.h"

int menu::menuPrincipal(){
    cout<<"BODEGA"<<endl;
    cout<<"Registrar producto   [1]"<<endl;
    cout<<"Buscar por codigo    [2]"<<endl;
    cout<<"Salir                [0]"<<endl;
    cin>>opt;
    return opt;
}
void menu::subMenu1(int &codigo,string &nombre,
                    int &und, double &precio){
    cout<<"Registro de producto"<<endl;
    cout<<"Codigo del producto:";
    cin>>codigo;
    cout<<"Nombre del producto:";
    cin>>nombre;
    cout<<"Unidades:";
    cin>>und;
    cout<<"Precio:";
    cin>>precio;
}
int menu::subMenu2(){
    int codigo=0;
    cout<<"Ingrese el codigo del producto a buscar:";
    cin>>codigo;
    return codigo;
}
void menu::subMenu3(){
    cout<<"Fin del programa"<<endl;
    cout<<"Los registros han sido almacenados"<<endl;
}
