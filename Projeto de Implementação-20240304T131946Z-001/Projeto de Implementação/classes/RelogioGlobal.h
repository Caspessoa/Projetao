#ifndef __RELOGIOGLOBAL_H_
#define __RELOGIOGLOBAL_H_

//classe singleton para o relogio global
class RelogioGlobal{
    private:
    int tempo;
    RelogioGlobal(): tempo(0) {}

    public:
    //instancia unica do relogio global
    static RelogioGlobal& getInstance(){
        static RelogioGlobal instance;
        return instance;
    }

    int obterTempo(){
        return this->tempo; 
    }

    void avancarTempo(){
        ++this->tempo;
    }
};




#endif