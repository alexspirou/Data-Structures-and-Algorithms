#include <iostream>
#include "MyVector.h"
#include <vector>
#include <string>
int main(){

	int arr [] = {5,1,6,4,5};
	size_t size = 5;
	MyVector<int> vec(size, arr);
	vec.sort();
	vec.print();
	vec.clear();
	vec.print();
	vec.resize(5,10);
	vec.print();
	vec.append(2);
	vec.print();
	return 0;
}
