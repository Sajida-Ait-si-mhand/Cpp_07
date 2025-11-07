# pragma once 
#include "array.hpp"

template <typename T>
Array<T>::Array()
{
	std::cout << "Create an empty array" << std::endl;
	data = nullptr;
	len = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Create an array of size: " << n << std::endl;
	data = new T[n];
	len = n;
	for(size_t i = 0; i < n; i++)
	{
		data[i] = T();
		std::cout << "Initialize element " << data[i] << std::endl;	
	}
}

template <typename T>
Array<T>::Array(const Array& other){
	len = other.len;
	data = new T[len];
	for (size_t i= 0; i < len ; i++)
		data[i] = other.data[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this!= &other){
		delete[] data;
	len = other.len;
	data = new T[len];
	for (size_t i=0; i < len ; i++)
	{
		data[i] = other.data[i];
	}
}
	return *this;
}

template <typename T>
Array<T>:: ~Array()
{
	delete [] data;
}

template <typename T>
T& Array<T>:: operator[](unsigned int index)
{
	if (index >= len)
		throw std::out_of_range("Index out of bounds");
	return data[index];
}

template <typename T>
const T& Array<T>:: operator[](unsigned int index) const
{
	if (index >= len)
		throw std::out_of_range("Index out of bounds");
	return data[index];
}	
template <typename T>

unsigned int Array<T>:: size() const
{
	return len;
}
