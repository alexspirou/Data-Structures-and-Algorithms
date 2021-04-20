#include <iostream>

int* find_max(int size){

	int arr[size];
	
	

	return arr;

}


int main(){


	//pointers exercise 1
	/*Write a program that asks the user to enter integers as inputs 
	to be stored in the variables 'a' and 'b' respectively. 
	There are also two integer pointers named ptrA and ptrB. 
	Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.*/

	// std::cout << "Please enter two integers. " << std::endl;
	// std::cout << "Enter first . . . ";
	// int var_a = 0;
	// int var_b = 0;
	// std::cin >> var_a;
	// std::cout << "\nEnter the second . . . ";
	// std::cin >> var_b;
	
	// int* ptr_a = NULL;
	// int* ptr_b = NULL;

	// ptr_a = &var_a;
	// ptr_b = &var_b;

	// std::cout << "Pointer A = " << *ptr_a << std::endl;
	// std::cout << "Pointer B = " << *ptr_b << std::endl;

	/*Exercise 2
go
	Write a C++ program to find the max of an integral data set. 
	The program will ask the user to input the number of data values in the set and each value. 
	The program prints on screen a pointer that points to the max value.*/
	// int size;
	// std::cout << "Enter size " << std::endl;
	// std::cin >> size;
	// int arr[size];
	// int* ptr = arr;
	// int max = 0;
	// for(int i{0}; i < size; i++){
	// 	std::cout << "Enter the " << i + 1 << "number "<< std::endl;
	// 	std::cin >> arr[i];
	// 	if(max < arr[i]){
	// 		max = arr[i];
	// 		ptr = &max;
	// 	}
	// 	std::cout << arr[i] << std::endl;	

	// }
	int* p = new int[6];
	*(p) = 1;
	*(p + 1) = 2;
	*(p + 2) = 3;
	*(p + 3) = 4;
	*(p + 4) = 5;
	*(p + 5) = 6;
	for(int i{0}; i < 6; i ++){
		
		std:: cout << *(p + i) << std::endl;
	}
	return 0;
}

