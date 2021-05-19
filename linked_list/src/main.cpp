#include <iostream>
#include <vector>
#include <string>
#include "Node.h"

template <typename T>
void print(T obj){
	std::cout << obj << std::endl;
}

int main(){

	int n = 9;
	int arr [] = {1,2,3,4,4,5,6,7,7};
	int n2 = 9;
	int arr2 [] = {5,2,3,4,4,5,6,7,7};
	Node<int>* node = new Node<int>(arr, n);
	Node<int>* node_2 = new Node<int>(arr2, n2);
	Node<int>* node_3 = new Node<int>(1);

	//node->display_node(node->header);
	node->display_node();
	node->reverse_data();
	node->delete_dublicates();
	node->remove(0);
	print(node->max());
	print(node->sum());
	node->reverse_data();
	node->display_node();
	
	return 0;
}




