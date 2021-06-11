#ifndef  C_LINKED_LIST_H
#define C_LINKED_LIST_H
#include <iostream>
#include <cstring>
#include <vector>
template <typename T>
class C_Node{

public:

	C_Node* header = NULL;
	C_Node* last = NULL;
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
			last = p;
			last->link = header;
			
	}

	unsigned get_size(){
		
		unsigned counter = 0;
		C_Node* p = header;

		while(p!=last){
			counter ++;
			p = p->link;
		}
		return counter;

	}

	void display(){
		C_Node* p = header;
		std::cout << "{ ";
		do{
			std::cout << p->data << " ";
			p = p->link;
		}
		while(p != header);
		std::cout << "}" << std::endl;
	}


	void insert(T element, unsigned index){

		C_Node* n = new C_Node();
		n->data = element;

		if(index!=0){
			
			C_Node* p = header;
			C_Node* q = header;

			for(int i{0}; i < index-1; i++){

				p = p->link;
			
			}
			q = p->link;

			p->link = n;
			n->link = q;
		}
		else{
			
			n->link = header;
			header = n;
			last->link = header;
		}

	}

	void delete_element(unsigned index){

		C_Node* p = header;
		
		if(index!= 0 && index < this->get_size()){
			C_Node* q = p->link;

			for (int i{0}; i < index-1; i ++){

				p = p->link;
				q = q->link;
			}
			q = q->link;
			delete p->link;
			p->link = q;
		}
		else if(index < this->get_size()){

			header = header->link;
			last->link = header;
			delete p;
		}
		else{
			std::cout << "INVALID INDEX" << std::endl;
		}
	}

private:
	T data;
	C_Node* link;
	int counter = 0;
};
#endif
