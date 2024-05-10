
#ifndef ITER_HPP
#define ITER_HPP

template<typename T, typename Func>
void iter(T* arr, int length, Func func)
{
    for (int i = 0; i < length; ++i) {
        func(arr[i]);
    }
}


template<typename T>
void printElement(const T& element)
{
    std::cout << element << " ";
}


#endif