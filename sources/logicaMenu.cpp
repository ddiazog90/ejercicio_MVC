#include "hearders/logicaMenu.h"

logicaMenu::logicaMenu(){
    int opt=1;
    do{
        opt=objM.menuPrincipal();
        switch(opt){
        case 1:
            agregar();
            break;
        case 2:
            buscar();
            break;
        case 0:
            objM.subMenu3();
            break;
        }
    }while(opt!=0);
}
void logicaMenu::agregar(){
    objM.subMenu1(codigo,nombre,unidad,precio);
    producto p(codigo,nombre,unidad,precio);
    objT.registrar(p);
}
void logicaMenu::buscar(){
    codigo=objM.subMenu2();
    objP=objT.buscar(codigo);
    cout<<objP.informacion()<<endl;
}
