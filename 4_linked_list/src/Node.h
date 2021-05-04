#ifndef  LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
#include <cstring>
template <typename T>
class Node{

public:


	Node(){}
	~Node(){}
	Node* header;

	void create(T* array, int n){

		Node* new_node = new Node();
		new_node->data = array[0];
		new_node->link = NULL;
		Node* previous = new_node;
		header = new_node;
		count ++;
		for(int i{1}; i < n; i++){
			
			new_node = new Node();
			previous->link = new_node;
			previous = new_node;
			new_node->data = array[i];
			new_node->link = NULL;
			count ++;
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

	size_t get_size(){

		return count;
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

private:
	T data;
	Node* link;
	size_t count {0};

};
#endif
