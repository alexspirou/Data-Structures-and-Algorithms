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
         if(!isFull() && front < size)
         {
             front ++;
             q[front] = element;
         }
         else
         {
            std::cout << "Queue is full " << std::endl;
         }
    }

    void dequeue()
    {
        if(!isEmpty())
        {
            rear ++;
        }
    }

    bool isFull()
    {
       bool m_bFlag = (front == rear && front != -1)? 1 : 0;
        return m_bFlag;
    }
    bool isEmpty()
    {
        bool m_bFlag = (front == -1 && rear == -1 )? 1: 0;
        return m_bFlag;
    }

    void display()
    {
        std::cout << "{ ";
        for(int i{rear+1}; i <= front; i++)
        {
            std::cout << q[i] << " ";
        }
        std::cout << " }" << std::endl;
    }
private: 

    T* q;
    int size{0};
    int rear{-1};
    int front{-1};
};

#endif
