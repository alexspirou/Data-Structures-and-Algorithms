#include <iostream>
#include <vector>
#include <string>

class Employee{
public:
	
	virtual void print(){
		std::cout << "BASE " << std::endl;
	}

	
};
class It : public Employee{

public:
	void print(){
		std::cout << "IT" << std::endl;
	}

	


};

int main(){

	Employee* it = new It();
	Employee* empl = new Employee(); 

	it->print();
	empl->print();

	return 0;
}




