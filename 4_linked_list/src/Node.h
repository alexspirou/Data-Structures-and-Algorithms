#ifndef  LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
template <typename T>
class Node{

public:


	Node(){}
	~Node(){}
	Node* header = NULL;

	void create(T* array, int n){

		Node* new_node = new Node();
		new_node->data = array[0];
		new_node->link = NULL;
		Node* previous = new_node;
		header = new_node;

		for(int i{1}; i < n; i++){
			
			new_node = new Node();
			previous->link = new_node;
			previous = new_node;
			new_node->data = array[i];
			new_node->link = NULL;
		}

	}


private:
	T data;
	Node* link;

};
#endif
