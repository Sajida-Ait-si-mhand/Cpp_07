#include <iostream>
template <typename Type>

void swap(Type &a, Type &b)
{
	Type temp = a;
	a = b;
	b = temp;
}
// void swap( char &a, char& b)  // function overloding
// {
// 	char temp = a;
// 	a = b;
// 	b = temp;
// }
// void swap(std::string &s1, std::string &s2)
// {
// 	std::string temp;
// 	s1 = s2;
// 	s2 = temp;
// }
int main(void)
{
	int a=5; int b=2;
	std::cout << a << "-" << b << std::endl;
	swap<int>(a,b);
	std::cout << a << "-" << b << std::endl;
	char c1='A'; char c2='B';
	std::cout << c1 << "-" << c2 << std::endl;
	swap(c1,c2);
	std::cout << c1 << "-" << c2 << std::endl;
	std::string s1 = "Sajida";
	std::string s2 = "Sojoud";
	std::cout << s1 << "-" << s2 << std::endl;
	swap(s1, s2);
	std::cout << s1 << "-" << s2 << std::endl;
	return 0;
}

// genereas same funvtiion and same logic but with diff datatype 
// So generics are implemented is using templates
// So How t=do you usea template ; by template <typename Type> 