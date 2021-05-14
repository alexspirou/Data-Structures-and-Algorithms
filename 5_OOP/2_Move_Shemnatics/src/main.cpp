#include <iostream>
#include <cstring>

template <class T>
void print(T obj, char * name){
	std::cout << name << "::::"<< obj << std::endl;
}
template <class T>
class Moved{

public:

	Moved(){
	
	}

	Moved(T p_data){
		data = p_data;
	}

	Moved(Moved& c_data){

		std::cout << "COPY CONSTRUCTOR" << std::endl;
		data = c_data.data;

	}

	Moved(Moved&& m_data){

		std::cout << "MOVED CONSTRUCTOR" << std::endl;
		data = m_data.data;
	}

	Moved& operator = (T rhs){

		data = rhs;
	}
	
	Moved& operator = (Moved& rhs){
		data = rhs.data;
	}
	

	Moved& operator +(Moved& rhs){
		return data + rhs.data;
	}




	T get_data(){
		return data;
	}

private:

	T data;
	
};






int main(){

	int a = 10;

	Moved<int> mov(10);
	Moved<int> mov_2(500);
	

	Moved<int> move_3(mov);

	Moved<int> move_4(std::move(Moved<int>(120)));
	
	print(move_3.get_data(),"mov3");
	print(move_4.get_data(),"mov3");





	return 0;
}