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
	//romvos

	// int n = 15;
	// for(int rows{0}; rows <= n-1; rows++){
	// 	for(int cols{0}; cols < n; cols ++){
	// 		if(rows <= n/2){
	// 			if(cols >= n/2 - rows&& cols <= n/2 + rows)
	// 			{
	// 				std::cout << "*";
	// 			}
	// 			else{
	// 				std::cout << " ";
	// 			}
	// 		}
	// 		else if(rows > n/2){
	// 			if(cols >= rows - n/2 && cols < (n - rows + n/2)){
	// 				std::cout << "*";
	// 			}
	// 			else{
	// 				std::cout << " ";
	// 			}

	// 		}
	// 	}
	// 	std::cout << "\n";
	// }
	//	......1

	// int n = 7;
	// for(int rows{0}; rows < n; rows++){
	// 	for(int cols{0}; cols < n; cols++){
	// 		if(cols >= n -1 -rows){
	// 			std::cout << rows +1;
	// 		}
	// 		else{
	// 			std::cout << ".";
	// 		}

	// 	}
	// 		std::cout << std::endl;
	// }

	//Square
	// int n =7;
	// for(int rows{0}; rows < n; rows++){
	// 	for(int cols{0}; cols < n; cols++){

	// 		if(rows == 0 || rows == n -1){
	// 			std::cout << "#";
	// 		}
	// 		else if(cols == 0 || cols == n-1){
	// 			std::cout << "#";
	// 		}
	// 		else{
	// 			std::cout << " ";
	// 		}

	// 	}
	// 	std::cout << std::endl;
	// }

	// s-z

	// int n =7;

	// for(int rows{0}; rows < n; rows++){
	// 	for(int cols{0}; cols < n; cols ++){
	// 		if(rows == 0 || rows == n-1){
	// 			std::cout << "#";
	// 		}
	// 		else if(cols == rows){
	// 			std::cout << "#";
	// 		}
	// 		else{
	// 			std::cout << " ";
	// 		}
	// 	}
	// 	std::cout << "\n";
	// }

	// int n = 7;

	// for(int rows{0}; rows < n; rows ++){
	// 	for(int cols{0}; cols < n; cols ++){
	// 		if(rows == 0 || rows == n-1){
	// 			std::cout << "#";
	// 		}
	// 		else if(cols == rows){
	// 			std::cout << "#";
	// 		}
	// 		else{
	// 			std::cout << " ";
	// 		}
	// 	}
	// 	std::cout << "\n";
	// }
	// int n =7;
	// for(int rows{0}; rows < n; rows++){
	// 	for(int cols{0}; cols < n; cols++){
	// 		if(rows == 0 || rows == n/2 || rows ==n -1){
	// 			std::cout << "*";
	// 		}
	// 		else if(cols == 0 || cols == n-1){
	// 			std::cout << "*";
	// 		}
	// 		else{
	// 			std::cout << " "; 
	// 			}
	// 	}
	// std::cout << "\n";
	// }
	
	// int n =16;

	// for(int rows{0}; rows < n; rows ++){
	// 	for(int cols{0}; cols < n; cols ++){

	// 		if(rows < n/2){
	// 			if(rows == 0 || rows == n - 1 ||cols == rows || cols == n - 1 -rows){
	// 				std::cout << "*";
	// 			}
	// 			else{
	// 				std::cout << " ";
	// 			}
	// 		}
	// 		else{
	// 			if(cols == n - 1 - rows || cols == rows || rows == n-1){
	// 				std::cout << "*";
	// 			}
	// 			else{
	// 				std::cout << " ";
	// 			}
		
	// 		}
	// 	}
	// 	std::cout << "\n";
	// }

	// int n = 20;
	
	// for(int rows{0}; rows < n; rows ++){
	// 	for(int cols{0}; cols < n; cols ++){

	// 		if(rows <= n/2){
	// 			if(rows == 0 || cols == 0 || cols == n-1 || cols == rows || cols == n - 1 -rows){
	// 				std::cout << "*";
	// 			}
	// 			else{
	// 				std::cout << " ";
	// 			}
	// 		}
	// 		else{
	// 			if(rows == n-1 || cols == 0 || cols == n-1 || cols == n-1-rows || cols == rows){
	// 				std::cout <<"*";
	// 			}
	// 			else{
	// 				std::cout << " ";
	// 			}
	// 		}
	// 	}
	// 	std::cout << "\n";
	// }


	int n = 5;

	for (int rows{0}; rows <= 10; rows ++){
	std::cout << rows  << " x " << n << " = " << n*rows << " ";
		std::cout << "\n";
	}

	return 0;
}
