#include <iostream>
#include <vector>
#include <string>
#include "Node.h"


int main(){

	int n = 9;
	int arr [] = {1,2,3,4,4,5,6,7,7};

	Node<int>* node = new Node<int>(arr, n);

	//node->display_node(node->header);
	node->display_node();
	node->reverse_address();
	node->display_node();
	node->reverse_data();
	node->display_node();

	
	return 0;
}




