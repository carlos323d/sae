//Puntero a eventos por herencia;

#include <iostream>
using namespace std;
class Eventos {
public:
   virtual void Ejecutar () = 0;
};
class Evento1 : public Eventos {
public:
    void Ejecutar () override {
       cout<<"Evento1 Ejecutado";
    }
};
class Evento2: public Eventos{
public:
    void Ejecutar()override{
        cout<<"Evento2 Ejecutado";
    }
};
void EnviarEventos(Eventos *vento){
    vento->Ejecutar();
}
int main()
{   Evento1 p1;
    Evento2 p2;
    void (*PunteroAEventos)(Eventos*)=&EnviarEventos;
    PunteroAEventos(&p1);
    PunteroAEventos(&p2);
    return 0;
}