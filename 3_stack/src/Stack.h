#ifndef  STACK_H
#define STACK_H
#include <iostream>

template <class T> 
class Stack
{

public:

    Stack(unsigned sz):size{sz}
    {
        stack = new T[sz]; //create contigeous memory for stack
        top = -1; // Point the top of the stack 
    }

    //Operation

    bool isEmpty()
    {
        if(this->top == -1 ){return 1;}
        else{return 0;}
    }
    bool isFull()
    {
        if(this->top == size -1){return 1;}
        else {return 0;}
    }
    void pushElement(T element)
    {
        // std::cout << "TOP " << top <<" Size: " << this->size << std::endl;

        // std::cout << (this->top  > this->size) << std::endl;
        if(!isFull())
        {
            stack[top+1] = element; //Push an element in the top of the stack

            top++;                  //Increase by one the top of the stack
        }
        else
        {
            std::cout << "STACK IS FULL, NOT POSSIBLE TO PUSH AN ELEMENT\n";    
        }
    }
    void popElement()
    {
        if(this->top != -1){this->top --;}
        else{std::cout << "STACK IS EMPTY, NOT POSSIBLE TO POP AN ELEMENT\n";}
    }

    void display()
    {
        int i = top;
       ;
        while(i!=-1)
        {
            std::cout <<"[ "<< *(stack + i) <<" ]\n";
            i --;
        }
        std::cout <<"-----"<< std::endl;
    
        
    }
    void peek(unsigned index)
    {
        T disp;
        
        if(index <= top)
        {
            disp =stack[top + 1- index-1];
            std::cout << disp << std::endl;
            
        }
        else
        {
            std::cout << "WRONG INDEX" << std::endl;
        }
        
    }
private:
    
    T* stack;       //Array to construct the stack
    int top{0};       //Pointer to see how many elements are
    unsigned size; //Size of stack
};

#endif