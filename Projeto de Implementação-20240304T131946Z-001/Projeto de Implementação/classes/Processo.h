#ifndef __PROCESSO_H_
#define __PROCESSO_H_

class Processo{
private:
    int time, priority, ram, ioRate;
public:
    Processo();
    Processo(int time, int priority, int ram, int ioRate): time(time), priority(priority), ram(ram), ioRate(ioRate) {}
    void executar(){}


    //caso tenha sido inicializado sem parâmetros ...

    void timeDefine(){}
    void priorityDefine(){}
    void ramDefine(){}
    void ioRateDefine(){}
};

#endif