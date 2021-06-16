#ifndef  DEQUEUE_H
#define DEQUEUE_H
#include <iostream>

template <class T> 
class DEQueue{

public:

    DEQueue(T* Q, int sz):q{Q}, size{sz}
    {
        if(size >= 0)
        {
            q = new T[size]; //Create queue with an array
        }
    }

    ~DEQueue(){delete [] q;}

    //Insert an element
    void endEnqueue(T element)
    { 
        if(!isFull())
        {       
            end ++;
            q[end] = element;
        }
    }

    void endDequeue()
    {
        end--;
    }
    void startEnqueue(T element)
    { 
        if(start!= -1)
        {       
          
            q[start] = element;
            start --;
        }
    }

    void startDequeue()
    {
        start++;
    }
    bool isFull()
    {
        if(end == size -1) {return true;}
    }
    bool isEmpty()
    {
        if(end == start){return true;}
    }

    void display()
    {

        std::cout << "{";
        for(int i{start+1}; i < end+1; i++)
        {
            std::cout << q[i] << " ";
        }
        std::cout << "}" << std::endl;
    }
private: 

    T* q;
    int size{0};
    int end{-1};
    int start{-1};
};

#endif
