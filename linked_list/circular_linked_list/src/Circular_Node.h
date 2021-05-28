#ifndef  C_LINKED_LIST_H
#define C_LINKED_LIST_H
#include <iostream>
#include <cstring>
#include <vector>
template <typename T>
class C_Node{

public:

	C_Node* header = NULL;
	C_Node(){}
	C_Node(T* arr, size_t size){
		create(arr,size);
	}

	void create(T* arr, size_t size){
		header = new C_Node();
		C_Node* p = header;
		C_Node* q = header;
		p->data = arr[0];

		for(int i{1}; i <= size; i++){

			p = new C_Node();
			q->link = p;
			p->data = arr[i];
			q = p;
		}	
			p->link = header;

	}

	void display(){
		C_Node* p = header;
		std::cout << "{ ";
		do{
			std::cout << p->data << " ";
			p = p->link;
		}
		while(p != header);
		std::cout << "}";
	}

	void recursive_display(C_Node* p){
		std::cout << p <<"::" << header << std::endl; 
		recursive_display(header->link);
		if(header != p){
			std::cout << p->data << " ";
			p = p->link;
			
		}
		else{
			std::cout << p->data << "}"<< std::endl;
			return;

		}
		

	}

private:
	T data;
	C_Node* link;
	int counter = 0;
};
#endif
