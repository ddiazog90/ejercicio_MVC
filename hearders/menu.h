#ifndef MENU_H
#define MENU_H
#include <iostream>
using namespace std;

class menu{
private:
    int opt=0;
public:
    int menuPrincipal();
    void subMenu1(int&,string&,int&,double&);
    int subMenu2();
    void subMenu3();
};

#endif // MENU_H
