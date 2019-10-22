#include "BracketsClass.h" 
#include <vector> 
#include <iostream> 

int main()
{
	std::string CurStr;
	BraceChecker bracechecker;
	std::cout << "Input string: ";
	std::cin >> CurStr;
	std::cout << (bracechecker.isBalanced(CurStr) ? "Balanced" : "Not balanced ") << std::endl;
	std::cin >> CurStr;
	return 0;
}