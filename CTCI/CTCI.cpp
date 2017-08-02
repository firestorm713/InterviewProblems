#include<iostream>
#include<string>
#include"01StringAndArrayProblems.h"


int main(int argc, char** argv)
{
    std::string z = "z e b b";
    
    std::string y = removeSpaces(z);
    sortChars(y);
    
    std::cout << y.length() << " " << y << std::endl;
    
    if(IsUnique(z))
        std::cout << "Is Unique!";
    
	std::cin.get();
	std::cin.get();
	return 0;
}