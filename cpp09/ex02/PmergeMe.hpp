#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <stdexcept>
#include <ctime>

class PmergeMe {
private:
    std::vector<int> data;

    std::vector<int> generateJacobsthalNumbers(int n);
    void fordJohnsonSort(std::vector<int>& arr);

public:
    PmergeMe(int argc, char *argv[]);
    void sortAndDisplay();
};

#endif // PMERGEME_HPP
