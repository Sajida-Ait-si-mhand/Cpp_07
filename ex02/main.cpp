#include "array.hpp"
#include "array.tpp"


int main() {
    Array<int> a1(15); // array of 5 ints
    for (unsigned int i = 0; i < a1.size(); i++)
	{
		a1[i] = i * 2;
		std::cout << "a1[" << i << "] = " << a1[i] << "\n";
	}

    Array<int> a2 = a1; // copy constructor

    a2[0] = 100; // a1 unaffected
    std::cout << "a1[0]: " << a1[0] << "\n"; // 0
    std::cout << "a2[0]: " << a2[0] << "\n"; // 100

    try {
        std::cout << a1[10]; // out of bounds
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << "\n";
    }

    return 0;
}