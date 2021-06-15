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
    void cnqueue(T element)
    {        
         if(end == (end + 1)%size)
         {
            std::cout << "Queue is full " << std::endl;
         }
         else
         {
            end = (end + 1) % size;
            q[end] = element;
     
         }
    }

    void dequeue()
    {
        if(!isEmpty())
            start++;
        else
        {
            end = -1;
            start = -1;
        }
    }

    bool isFull()
    {
       if (end == size-1 )
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

    void display()
    {
        if(!isFull())
        {
            std::cout << "{ ";
            for(int i{start+1}; i < size; i++)
            {
                std::cout << q[i] << " ";
            }
            std::cout << "}" << std::endl;
        }
        else if(end < start)
        {
            std::cout << "{ ";
            for(int i{start+1}; i < size; i++)
            {
                std::cout << q[i] << " ";
            }
                std::cout << "}" << std::endl;  
            }
    }
private: 

    T* q;
    int size{0};
    int end{0};
    int start{0};
};

#endif
