#ifndef __CPU_H_
#define __CPU_H_

class CPU
{
private:
    bool status;
    int velocidade; // milhões de instruções por segundo

public:
    CPU(int MIPS) : velocidade(MIPS), status(true) {} // true pronto, false em espera
    void executarProcesso() {}
    void definirStatus(bool state)
    {
        this->status = state;
    }
};

#endif // __CPU_H_