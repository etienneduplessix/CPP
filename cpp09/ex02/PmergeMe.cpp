// Ford-Johnson merge-insertion sort is the key phrase here - 
// any other kind of algorithm is unacceptable and it
//  is borderline cheating to just implement a different 
//  one while trying to sell it as the original one - it’s a
//   noob trap, don’t fall for it
// you can recognize this algorithm in code: the code should 
// contain a method of calculating insertion sequence based on
// Jacobsthal number sequence (and the evaluator should be able 
// to explain to you what that is, how it is calculated and, in high-level terms, what the algorithm does step-by-step)
// during insertion, the program must use binary search - that 
// includes std::binary_search as well as anything leveraging its 
// principles, like std::lower_bound or std::upper_bound (this is inherently 
// tied to the effectiveness of FJ-algo)
// the person should be able to explain to you why the containers
// differ in their performance


#include "PmergeMe.hpp"

std::vector<int> PmergeMe::generateJacobsthalNumbers(int n) {
    std::vector<int> jacobsthal;
    jacobsthal.push_back(0);
    jacobsthal.push_back(1);
    int a = 0;
    int b = 1;
    while (b < n) {
        int c = b + 2 * a;
        jacobsthal.push_back(c);
        a = b;
        b = c;
    }
    return jacobsthal;
}

void PmergeMe::fordJohnsonSort(std::vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return;

    std::vector<int> jacobsthal = generateJacobsthalNumbers(n);

    for (int j = 2; j < n; ++j) {
        if (std::find(jacobsthal.begin(), jacobsthal.end(), j) != jacobsthal.end()) {
            int key = arr[j];
            int i = j - 1;
            while (i >= 0 && arr[i] > key) {
                arr[i + 1] = arr[i];
                --i;
            }
            arr[i + 1] = key;
        }
    }

    for (int j = 2; j < n; ++j) {
        if (std::find(jacobsthal.begin(), jacobsthal.end(), j) == jacobsthal.end()) {
            int key = arr[j];
            std::vector<int>::iterator pos = std::lower_bound(arr.begin(), arr.begin() + j, key);
            arr.insert(pos, key);
            arr.erase(arr.begin() + j + 1);
        }
    }
}

PmergeMe::PmergeMe(int argc, char *argv[]) {
    if (argc < 2) {
        throw std::invalid_argument("Error: Please provide a sequence of positive integers as arguments.");
    }

    for (int i = 1; i < argc; ++i) {
        try {
            int num = std::atoi(argv[i]);
            if (num <= 0) {
                throw std::invalid_argument("Error: Invalid input: " + std::string(argv[i]));
            }
            data.push_back(num);
        } catch (...) {
            throw std::invalid_argument("Error: Invalid input.");
        }
    }
}

void PmergeMe::sortAndDisplay() {
    std::cout << "Before:";
    for (std::vector<int>::iterator it = data.begin(); it != data.end(); ++it) {
        std::cout << " " << *it;
    }
    std::cout << std::endl;

    std::vector<int> sorted_vector = data;
    clock_t start_v = clock();
    fordJohnsonSort(sorted_vector);
    clock_t end_v = clock();
    double duration_v = (end_v - start_v) / (double) CLOCKS_PER_SEC * 1000000;

    std::cout << "After:";
    for (std::vector<int>::iterator it = sorted_vector.begin(); it != sorted_vector.end(); ++it) {
        std::cout << " " << *it;
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of " << data.size() << " elements with std::vector: " << duration_v << " us" << std::endl;

    std::list<int> sorted_list(data.begin(), data.end());
    clock_t start_l = clock();
    sorted_list.sort();
    clock_t end_l = clock();
    double duration_l = (end_l - start_l) / (double) CLOCKS_PER_SEC * 1000000;

    std::cout << "Time to process a range of " << data.size() << " elements with std::list: " << duration_l << " us" << std::endl;
}
