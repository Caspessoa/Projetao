#ifndef __GLOBALCLOCK_H_
#define __GLOBALCLOCK_H_

// classe singleton para o relogio global
class GlobalClock
{
private:
    int tempo;
    GlobalClock() : tempo(0) {}

public:
    // instancia unica do relogio global
    static GlobalClock &getInstance()
    {
        static GlobalClock instance;
        return instance;
    }

    int obterTempo()
    {
        return this->tempo;
    }

    void avancarTempo()
    {
        ++this->tempo;
    }
};

#endif // __GLOBALCLOCK_H_