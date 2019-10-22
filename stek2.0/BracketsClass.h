#pragma once 
#include <string> 

class BraceChecker
{
public:
	BraceChecker();
	~BraceChecker();
	static bool isBalanced(const std::string& String);
};

