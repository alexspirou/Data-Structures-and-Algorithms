#include <iostream>
#include <cstring>

class String{

public:
	String(){
		m_data = "";
		m_int = 0;
	}
	String(char* f_name){
		std::cout << "Constructor" << std::endl;
		count = strlen(f_name);
		m_data = new char[count +1];
		m_data = f_name;

	}
	String(String& copied){
		std::cout << "Copy constructor" << std::endl;
		count = strlen(copied.m_data);
		m_data = new char[count];
		m_data = copied.m_data;

	}

	String(String&& moved) noexcept{

		std::cout << "Move Constructor " << std::endl;
		count = 1;
		m_data = new char[count];
		m_data = moved.m_data;
		m_int = moved.m_int;
		m_data = nullptr;

	}

	// ~String(){
	// 	std::cout << "Delete " << std::endl;
	// 	delete [] m_data;
	// }


	const char* get_data(){
		return m_data;
	}

	String operator+(const String& rhs){
		String temp;
		temp.m_int = this->m_int + rhs.m_int;
		return temp;

	}
	void set_m_int(int value){
		m_int = value;

	}
	int get_int(){
		return m_int;
	}
private: 


	char* m_data = nullptr;
	size_t count;
	int m_int;

};






int main(){

	String add_1;
	String add_2;

	add_1.set_m_int(10);
	add_2.set_m_int(20);

	String result(std::move(add_1 + add_2));

	std::cout << result.get_int()<< std::endl;



	return 0;
}