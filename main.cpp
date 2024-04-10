//creacion de un puntero a clase y funcion

#include <iostream>
using namespace std;
class class1{
public:
    void saludar(){
        cout<<"este es un puntero a clase";
    }
};

void funcion(){
    cout<<"esto es un puntero a funion";
}


int main()
{
    class1 objeto;
    class1 *punteroClase = &objeto;

    punteroClase->saludar();
    void (*punteroAfuncion)() = &funcion;
    punteroAfuncion();


    return 0;
}