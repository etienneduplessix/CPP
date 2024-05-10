#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception> 
#include <cstdlib>
#include <ctime>
#include <iostream>


template<typename T>
class Array {
private:
    T* data;
    unsigned int length;

public:
    Array();
    Array(unsigned int n);
    Array(const Array& other);
    ~Array();
    Array& operator=(const Array& other);
    T& operator[](unsigned int index);
    unsigned int size() const;
};

#include "Array.tpp"

#endif