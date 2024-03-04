#ifndef __KERNELSIMULATION_H_
#define __KERNELSIMULATION_H_

#include "GlobalClock.h"
#include "EventList.h"
#include "Event.h"

class KernelSimulation
{
private:
    EventList &eventList;
    GlobalClock &globalClock;

public:
    KernelSimulation() : eventList(EventList::getInstance()), globalClock(GlobalClock::getInstance()) {}
    void agendarEvento(Event event, int tempo)
    {
    }
    void executar() {}
};

#endif