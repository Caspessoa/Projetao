#ifndef __PROCESS_H_
#define __PROCESS_H_

using namespace std;

class Process
{
private:
    static int processCount, processFinished;
    int processNum, time, priority, nInstructions, ram, ioRate;

public:
    Process(vector<int> &data) {}

    // Métodos getters para acessar os atributos privados
    int getTime() { return time; }
    int getPriority() { return priority; }
    int getNInstructions() { return nInstructions; }
    int getRam() { return ram; }
    int getIoRate() { return ioRate; }
    void printProcess();
    void fileReader();
    void fileReader(string fileName);
};

#endif // __PROCESS_H_
