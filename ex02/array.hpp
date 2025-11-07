#pragma once

#include <iostream>


template <typename T>
class Array
{
private:
    T *data;
    unsigned int len;
public:
    Array();
    Array(unsigned int n);
    Array(const Array &other);
    Array &operator=(const Array &other);
    ~Array();

    T &operator[](unsigned int index);
    const T &operator[](unsigned int index) const;
    unsigned int size() const;
};

// // include template implementations
// #include "array.tpp"
// #pragma once 

// #include <iostream>
// template <typename T>
// class Array
// {
// 	private:
// 		T *data;
// 		unsigned int len;
// 	public:
// 		Array() {}
// 		Array(unsigned int n);
// 		Array(const Array &other);
// 		Array &operator=(const Array &other);
// 		~Array() {}

// 		T&operator[](unsigned int index);
// 		const T& operator[](unsigned int index) const;
// 		unsigned int size() const;
// };

