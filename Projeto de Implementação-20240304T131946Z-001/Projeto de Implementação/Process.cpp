#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include "Process.h"

void Process::printProcess()
{
    cout << "tempo: " << getTime() << endl;
    cout << "prioridade: " << getPriority() << endl;
    cout << "instrucoes: " << getNInstructions() << endl;
    cout << "ram: " << getRam() << endl;
    cout << "iorate: " << getIoRate() << endl;
    cout << endl;
}

Process newProcess(priority_queue<Process> &processList)
{
    if (processList.empty())
    {
        cerr << "Lista de prioridade de processos está vazia." << endl;
        return Process(0, 0, 0, 0, 0); // Retorna um processo vazio em caso de lista vazia
    }

    // Recupera os dados do processo prioritário da lista
    Process p = processList.top();
    // Remove o processo da lista (se desejar mantê-lo na lista, remova esta linha)
    processList.pop();
    return p;
}