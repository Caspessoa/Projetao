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

priority_queue<Process> fileReader()
{
    priority_queue<Process> processList;
    string fileName, line;
    cout << "Digite o nome do arquivo CSV: ";
    cin >> fileName;
    ifstream file(fileName);
    if (!file.is_open())
    {
        cerr << "Erro ao abrir o arquivo " << fileName << endl;
        return processList; // Retorna uma lista de prioridade vazia em caso de erro
    }

    getline(file, line); // Ignora a primeira linha (cabeçalho)
    while (getline(file, line))
    {
        stringstream ss(line);
        int time, priority, nInstructions, ram, ioRate;
        char comma;
        ss >> time >> comma >> priority >> comma >> nInstructions >> comma >> ram >> comma >> ioRate;
        processList.push(Process(time, priority, nInstructions, ram, ioRate));
    }

    file.close();
    return processList;
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