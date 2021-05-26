#include <iostream>
#include <vector>
#include <string>
#include "Node.h"


int main(){

	int n = 9;
	int arr [] = {2,2,3,4,4,5,6,7,7};
	int n2 = 3;
	int arr2 [] = {0,1,2};
	Node<int>* node = new Node<int>(arr, n);
	Node<int>* node_2 = new Node<int>(arr2, n2);
	

	//node->display_node(node->header);
	node->display_node();
	//node->concatenate(node_2);
	node->merge(node_2);
	node->display_node();
	node->display_node();
	return 0;
}




