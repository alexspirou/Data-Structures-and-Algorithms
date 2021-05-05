#ifndef  LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
#include <cstring>
template <typename T>
class Node{

public:


	Node(){}

	Node(T* f_data, int n)
	{	
		 create(f_data, n);
	}
	Node(T f_data)
	{	
		T  arr [] = {f_data};
		create(arr, 1);
	}
	~Node(){
		delete link;
	}
	Node* header;

	void create(T* array, int n){

		Node* new_node = new Node();
		new_node->data = array[0];
		new_node->link = NULL;
		Node* previous = new_node;
		header = new_node;

		for(int i{1}; i < n; i++){
			
			new_node = new Node();
			previous->link = new_node;
			previous = new_node;
			new_node->data = array[i];
			new_node->link = NULL;
		}

	}

	void display_node(Node* f_node){
		std::cout << "{ ";
		while(f_node!=NULL){
			std::cout << f_node->data << " ";
			f_node = f_node->link;
		}
		std::cout <<"}"<< std::endl;

	}

	size_t get_size(Node*  f_node){
		
		size_t count = 0;

		while(f_node!=NULL){
			count ++;
			f_node = f_node->link;
		}
		return count;
	}

	T get_data(){
		return data;
	}
	
	T min(Node* f_node){
		T min_ = f_node->data;

		while (f_node!= NULL){
			if(f_node->data < min_){
				min_ = f_node->data;
			}
			f_node = f_node->link;
		}
		return min_;

	}
	T max(Node* f_node){

		T max_ = f_node->data;
		while(f_node!=NULL){
			if(f_node->data > max_){
				max_ = f_node->data;
			}
			f_node = f_node->link;
		}
		return max_;
	}

	T sum(Node* f_node){

		T sum_ = f_node->data - f_node->data;

		// if constexpr (std::is_same_v<T, char>){
			
		// 	while (f_node!=NULL){
		// 		std::cout << "char " << std::endl;
		// 		f_node = f_node->link;
		// 	}	
		// }
		// else{	
			while (f_node!=NULL){

				sum_ = sum_ + f_node->data;
				f_node = f_node->link;	
			}

		// }
		return sum_;
	}

	T recursive_sum(Node* f_node){

		if (f_node == NULL){
			return 0;
		}
		return f_node->data + recursive_sum(f_node->link);

	}
	int  find(T f_data){
		int index = 0;
		while(header != NULL){
			if(f_data == header->data){
				return index;
			}
			else{
				index ++;
				header = header->link;
			}
		
		}
		std::cout << "COULD NOT FOUND DATA " << std::endl;
		return -1;
	}

	void inster_first(T f_data){
		Node* inserted = new Node();
		inserted->data = f_data;
		inserted->link = header;
		header = inserted;

	}
	void inster_specific_index(T f_data, int index){
		Node* inserted = new Node();
		inserted->data = f_data;
		Node* previous = new Node();
		previous = header;

		
		for(int i{0}; i <= index; i++){
				
				previous = previous->link; //traverse data
	
			}
		inserted->link = previous->link;
		previous->link = inserted;
		

	}


private:
	T data;
	Node* link;

};
#endif