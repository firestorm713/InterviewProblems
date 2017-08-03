#include<iostream>
#include<string>
#include"01StringAndArrayProblems.h"

void Test1_1()
{
    std::string z = "z e b b";
    
    std::string y = removeSpaces(z);
    sortChars(y);
    
    std::cout << y.length() << " " << y << std::endl;
    
    if(IsUnique(z))
        std::cout << "Is Unique!";
}


int main(int argc, char** argv)
{
    std::string asdf = "asdf";
    std::string fads = "fads";
    
    if(IsPermutation(asdf, fads))
        std::cout << "Is Permutation!" << std::endl;
	std::cin.get();
	std::cin.get();
	return 0;
}