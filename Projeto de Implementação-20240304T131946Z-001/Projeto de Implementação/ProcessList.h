#ifndef PROCESSLIST_H
#define PROCESSLIST_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include "Process.h"

using namespace std;

class ProcessList
{
private:
    priority_queue<Process> processList;

public:
    ProcessList(string fileName);
    ~ProcessList();
};

ProcessList::ProcessList(string fileName)
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

ProcessList::~ProcessList()
{
}

priority_queue<Process> fileReader();

#endif // PROCESSLIST_H
