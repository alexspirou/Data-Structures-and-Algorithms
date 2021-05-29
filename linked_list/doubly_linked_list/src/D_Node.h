#ifndef  LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>

template <typename T>
class Node{

public:


	Node(){}

	Node(T* f_data, int n)
	{	
		create(f_data, n);
		//std::cout <<"HEADER IN CONSTRUCTOR : "<< header << std::endl;
	}

		

private:
	T data;
	Node* next;
};
#endif
