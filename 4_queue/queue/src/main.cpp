#include "Queue.h"
#include <iostream>


int main()
{
    int n = 5;
    int* arr = new int[n]; 
    Queue<int> q{arr, n};

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    
    std::cout << "REMOVE FROM QUEUE" << std::endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    std::cout << "INSERT AGAIN " << std::endl;
    
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    
    

return 0;
}
