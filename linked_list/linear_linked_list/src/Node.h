#ifndef  LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>

template <typename T>
class 	Node{

public:


	Node(){}

	Node(T* f_data, int n)
	{	
		create(f_data, n);
		//std::cout <<"HEADER IN CONSTRUCTOR : "<< header << std::endl;
	}
	Node(T f_data)
	{	
		T  arr [] = {f_data};
		create(arr, 1);
	}
	~Node(){
		delete next;
	}
	Node* header;

	void create(T* array, int n){

		Node* new_node = new Node();
		new_node->data = array[0];
		new_node->next = NULL;
		Node* previous = new_node;
		header = new_node;
		for(int i{1}; i < n; i++){
			
			new_node = new Node();
			previous->next = new_node;
			previous = new_node;
			new_node->data = array[i];
			new_node->next = NULL;
		}

	}

	void display_node(){
		Node* temp = header;
		std::cout << "{ ";
		while(temp!=NULL){
			std::cout << temp->data << " ";
			temp = temp->next;
		}
		std::cout <<"}"<< std::endl;

	}

	size_t get_size(){
		
		size_t count = 0;
		Node* temp = header;
		while(temp!=NULL){
			count ++;
			temp = temp->next;
		}
		return count;
	}

	T get_data(){
		return data;
	}
	
	T min(){
		Node* f_node = header;
		T min_ = f_node->data;

		while (f_node!= NULL){
			if(f_node->data < min_){
				min_ = f_node->data;
			}
			f_node = f_node->next;
		}
		return min_;

	}

	T max(){
		Node* f_node = header;
		T max_ = f_node->data;
		while(f_node!=NULL){
			if(f_node->data > max_){
				max_ = f_node->data;
			}
			f_node = f_node->next;
		}
		return max_;
	}

	T sum(){
		Node* f_node = header;
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
				f_node = f_node->next;	
			}

		// }
		return sum_;
	}

	T recursive_sum(Node* f_node){

		if (f_node == NULL){
			return 0;
		}
		return f_node->data + recursive_sum(f_node->next);

	}

	int  find(T f_data){
		int index = 0;
		while(header != NULL){
			if(f_data == header->data){
				return index;
			}
			else{
				index ++;
				header = header->next;
			}
		
		}
		std::cout << "COULD NOT FOUND DATA " << std::endl;
		return -1;
	}

	void insert_first(T f_data){
		Node* inserted = new Node();
		inserted->data = f_data;
		inserted->next = header;
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
				
				previous_node = previous_node->next;
			}

			inserted_node->next = previous_node->next;
			previous_node->next = inserted_node;
		}
	}
	
	void remove(unsigned index){

		Node* deleted_node = header;
		if(index == 0){
			header = header->next;
			deleted_node->next = NULL;
			delete deleted_node;
		}
		else{
			Node* previous_node = header;
			for (int i{0}; i < index; i++){

				if(i < index-1){
					previous_node = previous_node->next;
					deleted_node = deleted_node->next;
				}
				else{
					deleted_node = deleted_node->next;
				}
			}
			previous_node->next= deleted_node->next;
			deleted_node->next = NULL;
			delete deleted_node;
		}
	}

	bool is_sorted(){
		Node* previous = header;
		Node* mid = header->next;
		Node* next = mid->next;
		
		
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

			previous = previous->next;
			mid = mid->next;
			next = next->next;		
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
				p = p->next;

			}
			return true;				
		}
	
	void delete_dublicates (){
		
			
			Node* prev = header;
			Node* next = header->next;
			Node* temp = NULL;
			while( next!=NULL){
			

				if(next->data == prev->data){
					prev->next = next->next;
					temp = next;
					next = next->next;
					temp->next = NULL;
					delete temp;

				}
				else{
				if(next!=NULL)
					next = next->next;
				prev = prev->next;
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
			temp = temp->next;
		}
		temp = header;
		for(i = 0; i < length; i++){
			temp->data = arr[i];
			temp = temp->next;

		}
		delete [] arr;
	}

	void reverse_address(){
		
		Node* prev = NULL;
		Node* mid = NULL;
		Node* next_p = header;

		while(next_p!=NULL){

			prev = mid;
			mid = next_p;
			next_p = next_p->next;
			mid->next = prev;
		}

		header = mid;

	}
	// recursive_reversing DONT WORK PROPERLY
	T recursive_reversing(Node* p_){
		T r_data;
		std::cout <<p_ << std::endl;
		if(header!=NULL){
			r_data = header->data;
			header = header->next;
			std::cout << r_data << std::endl;
			recursive_reversing(header,header);
			
			std::cout << "RETURNING "<<r_data << std::endl;
			p_->data = r_data;
			p_ =p_->next;
		}
		else{
			std::cout <<"HERE"<< std::endl;
			header = p_;
		}

	}

	T concatenate(Node* ll){
		Node* p = header;

		while(p->next!=NULL){
			p = p->next;
		}
			p->next = ll->header;

	}

	void merge(Node* second){


		if(this->is_sorted_simpler()&& second->is_sorted_simpler()){
			Node* p_1 = header;
			Node* p_2 = second->header;

			Node* third = NULL;
			Node* last = NULL;
			if(p_1->data <= p_2->data){

				third = p_1;
				last = p_1;
				p_1 = p_1->next;
				third->next = NULL;
			}
			else{
				third = p_2;
				last = p_2;
				p_2 = p_2->next;
				third->next = NULL;
			}

			while(p_1 != NULL && p_2 != NULL){

				if(p_1->data <= p_2->data){
					
					last->next = p_1;
					last = p_1;
					p_1 = p_1->next;
					last->next = NULL;
				}
				else if(p_1->data >= p_2->data){

					last->next = p_2;
					last = p_2;
					p_2 = p_2->next;
					last->next = NULL;
				}
			}
		}
		else{
			if(!this->is_sorted_simpler() && second->is_sorted_simpler()){
				std::cout << "MERGE IS NOT POSSIBLE :: FIRST LINKED LIST IS NOT SORTED" << std::endl;
			}
			else if(this->is_sorted_simpler() && !second->is_sorted_simpler()){
				std::cout << "MERGE IS NOT POSSIBLE :: SECOND LINKED LIST IS NOT SORTED" << std::endl;
				
			}
			else{
				std::cout << "MERGE IS NOT POSSIBLE :: BOTH LINKED LISTS ARE NOT SORTED" << std::endl;

			}
		}
	}

	void find_middle_node(){

		Node* p = header;
		int counter = 0;
		for (int i{0}; i < (this->get_size()+1)/2-1; i++){
			counter ++;
			p = p->next;
			
		}
		if(this->get_size() % 2 == 0){
			std::cout << "TWO MIDDLE NODES " << std::endl;
			std::cout << "Middle node is in index : " << counter << "\nData =" << p->data <<
			"\nMiddle Node is in index : " << counter +1 << "\nData = " << p->next->data << std::endl;
		}
		else{
			std::cout << "Middle Node is in index: " << counter << "\nData = " << p->data << std::endl;
		}
	}
private:
	T data;
	Node* next;
};
#endif
