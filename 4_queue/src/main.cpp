#include "Queue.h"
#include <iostream>


int main()
{
    int n = 5;
    int* arr = new int[n]; 
    Queue<int> q{arr, n};

    q.cnqueue(1);
    q.cnqueue(2);
    q.cnqueue(3);
    q.cnqueue(4);
    q.cnqueue(5);
    
    q.display();
    q.dequeue();
    q.display();


    std::cout << "OKE" << std::endl;


return 0;
}
