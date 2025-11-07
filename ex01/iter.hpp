# pragma once 
#include <iostream>

template <typename Type, typename F>
void iter(Type *Darray, size_t len,F  function)
{
	for (size_t i = 0; i < len; i++)
		function(Darray[i]);
}

template <typename Type>

void Print(Type const &fun)
{
	std::cout << fun << std::endl;
}