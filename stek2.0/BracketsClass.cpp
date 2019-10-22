#include "BracketsClass.h" 
#include <vector> 
#include <iostream> 

BraceChecker::BraceChecker()
{
}


BraceChecker::~BraceChecker()
{
}

bool BraceChecker::isBalanced(const std::string& BraceString) {
	const std::string Open = "([{<";
	const std::string Close = ")]}>";

	std::vector <size_t> Stack;
	size_t pos, endsym;
	for (auto sym = BraceString.begin(); sym != BraceString.end(); sym++) {
		pos = Open.find((char)*sym);
		if (pos != std::string::npos) Stack.push_back(pos);
		else {
			pos = Close.find((char)*sym);
			if (pos != std::string::npos) {
				if (Stack.empty()) return false;
				endsym = Stack.back();
				if (pos != endsym) return false;
				Stack.pop_back();
			}
		}
	}
	return Stack.empty();
}