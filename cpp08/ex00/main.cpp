
#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
    
    try {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Value found at index: " << std::distance(vec.begin(), it) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(vec, 6); // Value not in the vector
        std::cout << "Value found at index: " << std::distance(vec.begin(), it) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
