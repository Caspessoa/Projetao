#ifndef __EVENTO_H_
#define __EVENTO_H_

#include "Event.h"
#include "EventList.h"

// classe abstrata para eventos
class Event
{
private:
    EventList &eventList;
    int timeStamp; // tempo em que o evento ocorrerá --> utilizar os construtores específicos p mudar esse atributo

public:
    Event() : eventList(EventList::getInstance()) {}

    virtual void executar() = 0;
};

#endif // __EVENTO_H_