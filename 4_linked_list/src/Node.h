#ifndef  LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
#include <cstring>
#include <vector>
template <typename T>
class Node{

public:


	Node(){}

	Node(T* f_data, int n)
	{	
		create(f_data, n);
		std::cout <<"HEADER IN CONSTRUCTOR : "<< header << std::endl;
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

	void display_node(){
		Node* temp = header;
		std::cout << "{ ";
		while(temp!=NULL){
			std::cout << temp->data << " ";
			temp = temp->link;
		}
		std::cout <<"}"<< std::endl;

	}

	size_t get_size(){
		
		size_t count = 0;
		Node* temp = header;
		while(temp!=NULL){
			count ++;
			temp = temp->link;
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

	void insert_first(T f_data){
		Node* inserted = new Node();
		inserted->data = f_data;
		inserted->link = header;
		header = inserted;

	}

	void insert_2(T inserted_value, unsigned index){

		if(index == 0){
			insert_first(index);
			std::cout << "insert_first called" << std::endl;
			
		}
		else{
			Node* inserted_node = new Node();
			Node* previous_node = header;

			inserted_node->data = inserted_value;

			for(int i{0}; i < index -1; i++){
				
				previous_node = previous_node->link;
			}

			inserted_node->link = previous_node->link;
			previous_node->link = inserted_node;
		}
	}
	
	void remove(unsigned index){

		Node* deleted_node = header;
		if(index == 0){
			header = header->link;
			deleted_node->link = NULL;
			delete deleted_node;
		}
		else{
			Node* previous_node = header;
			for (int i{0}; i < index; i++){

				if(i < index-1){
					previous_node = previous_node->link;
					deleted_node = deleted_node->link;
				}
				else{
					deleted_node = deleted_node->link;
				}
			}
			previous_node->link= deleted_node->link;
			deleted_node->link = NULL;
			delete deleted_node;
		}
	}

	bool is_sorted(){
		Node* previous = header;
		Node* mid = header->link;
		Node* next = mid->link;
		
		
			int size = get_size();
			int* bool_array = new int[size]; //array of zeros
			int temp = 0;
			for(int i{0}; i < size; i++){
				bool_array[i] = 0;
			}

		while(next!=NULL){
			
			if(mid->data > previous->data && mid->data < next->data){
				bool_array[temp] = 1; //if it's true assign 1
			}
			temp++;
			//* std::cout << "DEBUG " << //
			// "\nprev: "<< previous->data<<
			// "\nmid: "<< mid->data<<
			// "\nnext: "<< next->data<<std::endl;

			previous = previous->link;
			mid = mid->link;
			next = next->link;		
		}

		int sum = 0;
		for(int i{0}; i < size; i++){
			sum	+= bool_array[i];
		}
		delete [] bool_array;
		std::cout << "sum "<<sum << std::endl;
		//Check if are enough 1 
		if(sum == size -2){
			return true;
		}
		else{
			return false;
		}


	}

	bool is_sorted_simpler(){

		T min = header->data;
		Node* p = header;

		while(p!= NULL){
			
			if(min  > p->data){
				return false;
			}	
				//std::cout << "\nmin : " << min <<"\np->data: " << p->data;
				min = p->data;
				p = p->link;

			}
			p = header;
			return true;				
		}
	
	void delete_dublicates (){
		
			
			Node* prev = header;
			Node* next = header->link;
			Node* temp = NULL;
			while( next!=NULL){
			

				if(next->data == prev->data){
					prev->link = next->link;
					temp = next;
					next = next->link;
					temp->link = NULL;
					delete temp;

				}
				else{
				if(next!=NULL)
					next = next->link;
				prev = prev->link;
				}
				
			}
		
	}
	
	void reverse_data(){
		
		Node* temp = header;
		Node* temp_2 = header;
		int length = this->get_size();
		T* arr = new T[length];
		int i = length -1;
		while(temp!=NULL){
			arr[i] = temp->data;
			i --;
			temp = temp->link;
		}
		temp = header;
		for(i = 0; i < length; i++){
			temp->data = arr[i];
			temp = temp->link;

		}
		delete [] arr;
	}

	void reverse_address(){
		
		Node* prev = NULL;
		Node* mid = NULL;
		Node* next = header;

		while(next!=NULL){

			prev = mid;
			mid = next;
			next = next->link;
			mid->link = prev;
		}

		header = mid;

	}
	// recursive_reversing DONT WORK PROPERLY
	T recursive_reversing(Node* p_){
		T r_data;
		std::cout <<p_ << std::endl;
		if(header!=NULL){
			r_data = header->data;
			header = header->link;
			std::cout << r_data << std::endl;
			recursive_reversing(header,header);
			
			std::cout << "RETURNING "<<r_data << std::endl;
			p_->data = r_data;
			p_ =p_->link;
		}
		else{
			std::cout <<"HERE"<< std::endl;
			header = p_;
		}

	}

	T concatenate(Node* ll){
		Node* p = header;

		while(p->link!=NULL){
			p = p->link;
		}
			p->link = ll->header;

	}

	Node* operator +(Node* rhs){
		Node* p = this->header;

		while(p->link!=NULL){
			p = p->link;
		}
		 p->link = rhs->header;
		 return this;
	}

	void merge(Node* ll){

		Node* f = header;
		Node* f_2 = ll->header;
		Node* third = NULL;
		Node* last = NULL;

		if(f->data < f_2->data){
			third = f;
			last = f;
			f = f->next;
			
		}

	}

private:
	T data;
	Node* link;
};
#endif
