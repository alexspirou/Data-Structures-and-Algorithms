#include "DEQueue.h"
#include <iostream>


int main()
{
    int n = 5;
    int* arr = new int[n]; 
    DEQueue<int> q{arr, n};

    q.endEnqueue(1);
    q.endEnqueue(2);
    q.endEnqueue(3);
    q.endEnqueue(4);
    q.endEnqueue(5);

    q.startDequeue();
    q.startEnqueue(1000);

    q.display();

return 0;
}
