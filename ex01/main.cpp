#include "iter.hpp"

int main()
{
	char alpha[] = {'a', 'b', 'c', 'd'};
	std::string words[] = {"SOJOUD", "SCHOOL"};
	std::cout << "----char array----" << std::endl;
	::iter(alpha, 4, Print<char>);

	std::cout << "----string array----" << std::endl;
	::iter(words, 2, Print<std::string>);
	return 0;
}