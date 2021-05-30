#include <iostream>
#include <vector>
#include <string>
#include "D_Node.h"

template <typename T>
void print(T obj){
	std::cout << obj << std::endl;
}

int main(){

	int n = 8;
	int arr [] = {1,2,3,4,5,6,8,8};
	int n2 = 7;
	int arr2 [] = {1,2,4,6,8,10,12};
	D_Node<int>* node = new D_Node<int>(arr, n);
	D_Node<int>* node_2 = new D_Node<int>(arr2, n2);


	node->display();
	node->delete_element(0);
	node->display();
	
	node->reverse_display();	
	
	return 0;	
}



