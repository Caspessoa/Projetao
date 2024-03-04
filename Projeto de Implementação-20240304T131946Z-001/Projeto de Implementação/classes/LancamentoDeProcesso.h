#ifndef __LANCAMENTODEPROCESSO_H_
#define __LANCAMENTODEPROCESSO_H_

#include "Evento.h"

class LancamentoDeProcesso : public Evento{
private:
    /* data */
public:
    LancamentoDeProcesso(): Evento() {}

    void executar() override;
};

#endif