#include <iostream>
#include <string>

class Abstract{

public:

	virtual void print() = 0;

	std::string m_name;
	double m_age;
	double m_salary;
};
class Technician: public Abstract{

public:

	Technician(std::string f_name, double f_age, double f_salary)
	:m_name(f_name), m_age(f_age), m_salary(f_salary){
		std::cout << "TECHNICIAN CONSTRUCTOR " << std::endl;
	}
	virtual ~Technician(){
		std::cout << "TECHNICIAN DESTRUCTOR CALLED" << std::endl;
	}

	virtual void print(){
		std::cout << "IS TECHNICIAN" << std::endl;
	}



protected:

	std::string m_name;
	double m_age;
	double m_salary;

private:


};

class Programmer: public Abstract{

public:

	Programmer(std::string f_name, double f_age, double f_salary)
	:m_name(f_name), m_age(f_age), m_salary(m_salary){
		std::cout << "PROGRAMMER CONSTRUCTOR CALLED" << std::endl;
	}
	virtual ~Programmer(){
		std::cout << "PROGRAMMER DESTRUCTOR CALLED" << std::endl;
	}

	virtual void print(){
		std::cout << "IS PROGRAMMER" << std::endl;
	}

	friend std::ostream& operator<<(std::ostream& os, Abstract* obj){
		 return os << obj->m_name << "," << obj->m_age << "." << obj->m_salary;
		
	}
	virtual void create(int* arr_){

	}
	virtual void display(int n){

	}
	virtual int add_elements(int n){

	}



protected:
	std::string m_name;
	double m_age;
	double m_salary;


private:


};

class Alex: public Abstract, public Technician, public Programmer{

public:
	Alex(std::string f_name, double f_age, double f_salary)
	:Technician(f_name,f_age, f_salary), Programmer(f_name,f_age,f_salary){
		std::cout << "ALEX CONSTRUCTOR CALLED " << std::endl;
	}

	virtual ~Alex(){
		std::cout << "ALEX DESTRUCTOR CALLED" << std::endl;
	}

	virtual void print() {
		std::cout << "IS ALEX " << std::endl;
	}
	void sum(int n){
	

	}

	virtual int add_elements(int n){
		if(n == 0){
			return 0;

		}else{
			arr[n] = n*2;
			return add_elements(n-1);
		}
	}
	virtual void create(int* arr_){
		arr_ = new int[10];
		arr = arr_;
		delete arr_;
		
	}
	virtual void display(int n){
		if(n==0){
			std::cout <<arr[n] << std::endl;
		}else{
			std::cout << arr[n] << " ";
			return display(n-1);
		}
	}
protected:



private:
	int* arr;

};

void what_is_it(Abstract* obj){
	obj->print();
}

void print(int* p_){
	for (int i{0}; i<5; i++){
		std::cout << *(p_+ i) << " ";
	}
	std::cout << std::endl;
}





int main(){


	Programmer* alex = new  Alex("Alex",27,1000);

	what_is_it(alex);
	int* arr = new int[5];
	
	alex->create(arr);
	alex->add_elements(5);
	alex->display(10);

	return 0;
}