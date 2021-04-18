#include <iostream>


int main(){


//  int var [10] = {1,2,3,4,5,6,7,8,9,10};

//  int *p = var;

// for(int i{0}; i<sizeof(var)/4; i++){
   
//     std::cout << *p << std::endl;
//     p =p + 1;
// }
// p = p -10;
// p = p +2;
// std::cout << "MEMORY OF VAR [2] " << &var[2] << std::endl;
// std::cout << "MEMORY OF P +  2 "  << p << std::endl;

int * p = new int[10];

for(int i{0}; i < 10; i++){
    p[i] = i;
}

std::cout << *p << std::endl;



    return 0;
}