#include <iostream>
#include <vector>
#include <string>
#include "Node.h"


int main(){

	int n = 5;
	int arr [] = {1,2,3,4,5};
	int n_2 = 1;
	int arr_2[] = {50};

	Node<int>* node = new Node<int>(arr, n);
	node->display_node(node->header);
	node->insert_2(5000, 0);
	node->display_node(node->header);
	node->remove(0);
	node->display_node(node->header);

	// std::cout << node->find(100)<< std::endl;

	return 0;
}




