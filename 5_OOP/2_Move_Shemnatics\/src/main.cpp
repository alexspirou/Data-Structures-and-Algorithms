#include <iostream>


class String{

public:

	String(char* f_name){
		std::cout << "Constructor" << std::endl;
		m_data = f_name;

	}
	String(String& copied){
		std::cout << "Copy constructor" << std::endl;
		m_data = copied.m_data;

	}

	

private: 


	char* m_data;


};






int main(){


	String str("ela");

	String copied(str);


	return 0;
}