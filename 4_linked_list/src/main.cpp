#include <iostream>
#include <vector>
#include <string>
#include "Node.h"


int main(){

	int n = 8;
	int arr [] = {2,1,1,2,3,5,5};
	int n_2 = 1;
	int arr_2[] = {50};

	Node<int>* node = new Node<int>(arr, n);

	node->display_node(node->header);

	node->delete_dublicates();
	node->display_node(node->header);


	return 0;
}




