#ifndef  D_LINKED_LIST_H
#define D_LINKED_LIST_H
#include <iostream>

template <typename T>
class D_Node{

public:

	D_Node* header = NULL;
	D_Node* last = NULL;
	D_Node(){}

	D_Node(T* f_data, int n)
	{	
		create(f_data, n);
		
		//std::cout <<"HEADER IN CONSTRUCTOR : "<< header << std::endl;
	}

	void create(T* arr, unsigned size){

		header = new D_Node();
		D_Node* p = header;

		p->data = arr[0];
		p->previous = NULL;
		int counter = 0;
		for(int i{1}; i < size; i++){
			
			D_Node* n = new D_Node();
			n->data = arr[i];
			p->next = n;
			n->previous = p;
			
			p = n;
			p->next = NULL;

		}
		last = p;
	
	}

	void display(){

		D_Node* p = header;
		std::cout << "{";
		while(p!=NULL){
			std::cout << p->data << " ";
			p = p->next;
		}
		std::cout << "}" << std::endl;
	}
	
	void reverse_display(){
		std::cout << "{";
		D_Node* p = last;

		while(p!=header){
			
			std::cout << p->data << " ";
			p = p->previous;
		}
		std::cout <<p->data << " }" << std::endl;

	}

private:
	T data;
	D_Node* next;
	D_Node* previous;
};
#endif
