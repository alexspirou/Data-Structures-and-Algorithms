#ifndef  QUEUE_H
#define QUEUE_H
#include <iostream>

template <class T> 
class Queue{

public:

    Queue(T* Q, int sz):q{Q}, size{sz}
    {
        if(size >= 0)
        {
            q = new T[size]; //Create queue with an array
        }
    }

    ~Queue(){delete [] q;}

    //Insert an element
    void enqueue(T element)
    {        
         if(isFull())
         {
            std::cout << "Queue is full " << std::endl;
         }
         else
         {
            end = (end + 1) % size; //1,2,3,4,0,1,2,3,4 
            q[end] = element; 

     
         }
    }

    void dequeue()
    {
        if(isEmpty())
        {
            std::cout << "Queue is empty " << std::endl;
        }
        else
        {
            start = (start +1)%size;

        }
    }

    bool isFull()
    {
       if ((end + 1) %size == start )
       {           
            return true;
       }

        
    }
    bool isEmpty()
    {
        if(end == start )
        {

            return true;
        }
        
    }
private: 

    T* q;
    int size{0};
    int end{0};
    int start{0};
};

#endif
