#include <iostream>
#include "MyVector.h"
#include <vector>
#include <string>
int main(){

	int arr [] = {5,1,6,4,5};
	size_t size = 5;

	MyVector<int> vec(size, arr);
	vec.print();

	size_t before = vec.size();
	vec.insert(2,1000);
	size_t after = vec.size();
	vec.print();
	std::cout << "THE SIZE BEFORE : " << before << "\nTHE SIZE AFTER : " << after << std::endl;
	return 0;
}
