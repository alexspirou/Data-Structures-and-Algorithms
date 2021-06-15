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

    q.dequeue();
    q.cnqueue(6);
    q.display();

    q.dequeue();
    q.cnqueue(7); 
    q.display();

    q.dequeue();
    q.cnqueue(8); 
    q.display();

    q.dequeue();
    q.cnqueue(9); 
    q.display();

    q.dequeue();
    q.cnqueue(10); 
    q.display();
    
    std::cout << "OKE" << std::endl;


return 0;
}
