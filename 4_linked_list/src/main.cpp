#include <iostream>
#include <vector>
#include <string>
#include "Node.h"


int main(){

	int n = 6;
	int arr [] = {-10,2,-3,4,5, 2};
	int n_2 = 1;
	int arr_2[] = {50};

	Node<int>* node = new Node<int>(arr, n);




	node->display_node(node->header);

	node->inster_first(200);
	
	node->inster_specific_index(39, 5);

	node->display_node(node->header);
	// std::cout << node->find(100)<< std::endl;

	return 0;
}




