#include <iostream>
#include <vector>
#include <string>
#include "Node.h"


int main(){

	int n = 8;
	int arr [] = {1,2,3,4,5,6,7,10};
	int n_2 = 1;
	int arr_2[] = {50};

	Node<int>* node = new Node<int>(arr, n);

	node->display_node(node->header);
	std::cout << node->is_sorted() << std::endl;


	return 0;
}




