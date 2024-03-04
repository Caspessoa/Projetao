#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include "Process.h"

int Process::processCount = 0;
int Process::processFinished = 0;

Process::Process(vector<int> &data)
{
    processNum = processCount++;
    time = ;
    priority = ;
    nInstructions = ;
    ram = ;
    ioRate = ;
}

void Process::printProcess()
{
    cout << "tempo: " << getTime() << endl;
    cout << "prioridade: " << getPriority() << endl;
    cout << "instrucoes: " << getNInstructions() << endl;
    cout << "ram: " << getRam() << endl;
    cout << "iorate: " << getIoRate() << endl;
    cout << endl;
}

void Process::fileReader()
{
    string fileName, line, data;
    cout << "Digite o nome do arquivo CSV: ";
    cin >> fileName;
    ifstream file(fileName);
    getline(file, line); // pega o cabeçalho
    while (!file.eof())
    {
        stringstream ss(line);
        int time, priority, nInstructions, ram, ioRate;
        char comma;
        ss >> time >> comma >> priority >> comma >> nInstructions >> comma >> ram >> comma >> ioRate;
        processList.push(Process(time, priority, nInstructions, ram, ioRate));
    }
}

void Process::createProcess(string &data)
{
}