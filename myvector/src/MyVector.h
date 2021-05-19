#ifndef  MY_VECTOR_H
#define MY_VECTOR_H
#include <iostream>

template <class T> 
class MyVector{

public:


	MyVector()
	:count_m(0){}


	~MyVector(){
		delete [] array_m;
	}

	MyVector(size_t count_p, T* array_p) //T*Arrar HEAP
	{   
		count_m = count_p;
		array_m = new T[count_m]; //HEAP 
		for(size_t i{0}; i < count_m; i++){
			array_m[i] = array_p[i]; 
		}
	}


	void print(){
		std::cout << "{";
		for(size_t i{0}; i < count_m; i ++){
			if(count_m == 1){
				std::cout << "empty}"<< std::endl;
			}
			if(i < count_m -1 && count_m!=1){
				std::cout << *(array_m + i) << ",";
			}
			else if(i == count_m -1 && count_m!=1){
				std::cout << *(array_m + i)<< "}" << std::endl;
			} 
		}
	}
	size_t size(){

		return count_m;
	}

	void resize(size_t count_p, T value){
		delete [] array_m;
		count_m = count_p;
		array_m = new T[count_m];
		for(size_t i{0}; i < count_m; i++){
			array_m[i] = value;
		}
	}
	void clear(){
		delete [] array_m;
		count_m = 0;
		array_m = new T[count_m];
		count_m =1;
		
	}
	void append(T append_value){
		
		T* temp_array = new T[count_m];
		for(size_t i{0}; i < count_m; i++){
			temp_array[i] = array_m[i];
		}
		delete [] array_m;
		count_m ++;
		array_m = new T[count_m];
		for(size_t i{0}; i < count_m; i++){
			array_m[i] = temp_array[i] ;
		}
		delete [] temp_array;
		array_m[count_m -1] = append_value;
	}
	void insert(unsigned index, T value){
		

		if(index <= count_m){
			count_m ++;
			T* temp_array = new T[count_m];

			for(int i{0}; i < count_m; i++){
				temp_array[i] = array_m[i];
			}
			delete [] array_m;
		
			array_m = new T[count_m];

			for(int i{0}; i < count_m +1; i++){
				array_m[i] = temp_array[i];
			}

			delete [] temp_array;

			for(int i{count_m}; i > index; i--){
					array_m[i]= array_m[i-1];
					std::cout << "I : " <<i << std::endl;
				}
		
		
			array_m[index] = value;
		}
		else{
			std::cout <<"NOT VALID INDEX " << std::endl;
		}
	}
	
	void sort(){
		int temp{0};
		for(int i{0}, j{1}; i <= j; i++,j--){
			if(array_m[i] > array_m[j]){
				temp = array_m[j];
				array_m[j] = array_m[i];
				array_m[i] = temp;
			}
		}
	}


private:

	size_t count_m;
	T* array_m;
	

};

#endif
