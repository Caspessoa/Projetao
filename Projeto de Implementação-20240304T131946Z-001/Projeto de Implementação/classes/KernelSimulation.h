#ifndef __KERNELSIMULATION_H_
#define __KERNELSIMULATION_H_

#include "RelogioGlobal.h"
#include "ListaEventos.h"
#include "Evento.h"

class KernelSimulation{
    private:
    ListaEventos &listaEventos;
    RelogioGlobal &relogioGlobal;
    
    public:
    KernelSimulation(): listaEventos(ListaEventos::getInstance()), relogioGlobal(RelogioGlobal::getInstance()) {}
    void agendarEvento(Evento event, int tempo){

    }
    void executar(){}
};

#endif