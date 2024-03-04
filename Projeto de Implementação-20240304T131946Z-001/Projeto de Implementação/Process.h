#ifndef PROCESS_H
#define PROCESS_H

using namespace std;

class Process
{
private:
    int time, priority, nInstructions, ram, ioRate;

public:
    Process(int t, int p, int ni, int r, int io) : time(t), priority(p), nInstructions(ni), ram(r), ioRate(io) {}

    // Métodos getters para acessar os atributos privados
    int getTime() { return time; }
    int getPriority() { return priority; }
    int getNInstructions() { return nInstructions; }
    int getRam() { return ram; }
    int getIoRate() { return ioRate; }
    void printProcess();

    bool
    operator<(const Process &other) const
    {
        // Compara os processos pela prioridade
        return priority < other.priority;
    }
};

#endif // PROCESS_H
