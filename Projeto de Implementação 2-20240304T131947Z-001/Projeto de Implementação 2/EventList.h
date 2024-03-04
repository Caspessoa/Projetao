#ifndef __EVENTLIST_H_
#define __EVENTLIST_H_

#include "EventList.h"
#include "Event.h"
#include <list>
#include <iterator>

// classe singleton para a lista de eventos
class EventList
{
private:
    std::list<Event> *eventList;
    std::list<Event>::iterator iterador;
    EventList()
    {
        this->eventList = new std::list<Event>;
        this->iterador = this->eventList->begin();
    }

public:
    // instancia unica da lista de eventos
    static EventList &getInstance()
    {
        static EventList instance;
        return instance;
    }

    // retorna o endereço do primeiro elemento da lista
    Event getNextEvent()
    {
        std::advance(this->iterador, 1);
        return *this->iterador;
    }

    void addEvent(Event event)
    {
        // implementação
    }

    void removeEvent(Event event)
    {
        this->eventList->remove(event);
    }

    ~EventList()
    {
        delete this->eventList;
    }
};

#endif // __EVENTLIST_H_