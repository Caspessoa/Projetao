#ifndef __EVENTO_H_
#define __EVENTO_H_

#include "Evento.h"
#include "ListaEventos.h"

//classe abstrata para eventos
class Evento{
    private:
    ListaEventos &listaEventos;
    int timeStamp;  //tempo em que o evento ocorrerá --> utilizar os construtores específicos p mudar esse atributo

    public:
    Evento(): listaEventos(ListaEventos::getInstance()){}

    virtual void executar() = 0;
};


#endif