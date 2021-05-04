#include <iostream>
#include <vector>
#include <string>
#include "Node.h"


int main(){

	Node<char>* node = new Node<char>();
	int n = 5;
	char arr [] = {'e','l', 'a', 'a', 'a'};
	char a = 'a';
	char b = 'b';
	node->create(arr, n);

	node->display_node(node->header);
	
	std::cout << node->sum(node->header)<< std::endl;

	return 0;
}




