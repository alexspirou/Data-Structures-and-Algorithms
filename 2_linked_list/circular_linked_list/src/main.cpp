#include <iostream>
#include <vector>
#include <string>
#include "Circular_Node.h"

template <typename T>
void print(T obj){
	std::cout << obj << std::endl;
}

int main(){

	int n = 7;
	int arr [] = {1,2,3,4,5,6,7,8};
	int n2 = 7;
	int arr2 [] = {1,2,4,6,8,10,12};
	
	C_Node<int>* node = new C_Node<int>(arr,n);

	node->display();
	node->delete_element(10);
	node->display();
}




