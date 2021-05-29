#include <iostream>
#include <vector>
#include <string>
#include "Node.h"

template <typename T>
void print(T obj){
	std::cout << obj << std::endl;
}

int main(){

	int n = 7;
	int arr [] = {1,2,3,4,5,6,8,8};
	int n2 = 7;
	int arr2 [] = {1,2,4,6,8,10,12};
	Node<int>* node = new Node<int>(arr, n);
	Node<int>* node_2 = new Node<int>(arr2, n2);

	node->display_node();
	node->insert_2(10,2);
	node->display_node();

	
	}



