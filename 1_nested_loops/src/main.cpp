#include <iostream>

int main(){

	
	//1)
	//5 rows 5 cols stars exercise

	// for(int rows{0}; rows < 5; rows++){
	// 	for(int cols{0}; cols < 5; cols++){
	// 		std::cout << "*";
	// 	}
	// 	std::cout << "\n";
	// }

	//2) Pyramid
	// int n = 6;
	// for(int rows{0}; rows < n; rows ++){
	// 	for(int cols{0}; cols < n *2 -1; cols ++){
	// 		if(cols >= n - rows - 1 && cols <= n + rows -1)
	// 		{
	// 			std::cout << "*";
	// 		}
	// 		else{
	// 			std::cout << " ";
	// 		}

	// 	}
	// 	std::cout << "\n";

	// }
	int n = 7;

	for(int rows{0}; rows < n; rows++){
		for(int cols{0}; cols < n *2 -1; cols ++){
			if(rows <= n/2){
				if(cols >= n - rows - 1 && cols <= n + rows -1)
				{
					std::cout << "*";
				}
				else{
					std::cout << " ";
				}
			}
			else if(rows > n/2){
				if(cols >= (n*rows)/n && cols <= (n*rows)/rows){
					std::cout << "" << cols;
				}
				else{
					std::cout << " ";
				}

			}
		}
		std::cout << "\n";
	}	



	return 0;
}
