#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include "Process.h"

using namespace std;

int main()
{
    priority_queue<Process> processList = fileReader();
    Process a = newProcess(processList);
    a.printProcess();
    Process b = newProcess(processList);
    b.printProcess();
    Process c = newProcess(processList);
    c.printProcess();
    return 0;
}
