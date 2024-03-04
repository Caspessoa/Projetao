#ifndef __LISTAEVENTOS_H_
#define __LISTAEVENTOS_H_

#include "ListaEventos.h"
#include "Evento.h"
#include <list>
#include <iterator>

//classe singleton para a lista de eventos
class ListaEventos {
    private:
    std::list<Evento> *eventList;
    std::list<Evento>::iterator iterador;
    ListaEventos() {
        this->eventList = new std::list<Evento>;
        this->iterador = this->eventList->begin();
    }
    
    public:
    //instancia unica da lista de eventos
    static ListaEventos& getInstance(){
        static ListaEventos instance;
        return instance;
    }

    //retorna o endereço do primeiro elemento da lista
    Evento obterProximoEvento(){
        std::advance(this->iterador, 1);
        return *this->iterador;
    }

    void addEvento(Evento event){
        //implementação
    }

    void removerEvento(Evento event){
        this->eventList->remove(event);
    }

    ~ListaEventos() {
        delete this->eventList;
    }

};

#endif