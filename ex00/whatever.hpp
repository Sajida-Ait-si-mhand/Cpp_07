# pragma once

#include <iostream>
template <typename Type>

void swap(Type &a, Type &b)
{
	Type temp = a;
	a = b;
	b = temp;
}

template <typename Type>
Type const &min(Type const &a, Type const &b)
{
	if (a < b)	
		return a;
	return b;
}

template <typename Type> 
Type const &max(Type const &a, Type const &b)
{
	if (a > b)	
		return a;
	return b;
}