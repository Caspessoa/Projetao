#ifndef __LISTADEPROCESSOS_H_
#define __LISTADEPROCESSOS_H_

#include "Processo.h"
#include <list>
#include <iterator>

class ListaDeProcessos {
    private:
    std::list<Processo> *processList;
    std::list<Processo>::iterator iterador;
    public:
    ListaDeProcessos() {
        this->processList = new std::list<Processo>;
        this->iterador = this->processList->begin();
    }

    void addProcesso(Processo process){
        //implementação
        std::advance(this->iterador, 1);
    }

    void removeProcesso(Processo process){
        //implementação
        std::advance(this->iterador, -1);
    }

    Processo obterProcessoAtual(){
        return *this->iterador;
    }

    ~ListaDeProcessos() {
        delete this->processList;
    }
};

#endif