#include <iostream>
#include "iter.hpp"
int main() {
   
    int intArray[] = {1, 2, 3, 4, 5};
    iter(intArray, 5, printElement<int>); 

    std::cout << std::endl;


    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    iter(charArray, 5, printElement<char>); 
    return 0;
}
