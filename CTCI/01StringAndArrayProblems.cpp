#include "01StringAndArrayProblems.h"
#include<string>

std::string removeSpaces(std::string str)
{
    std::string result;
    for(int i = 0; i < str.length(); ++i)
    {
        char c = str[i];
        if(c!=' ')
            result += c;
    }
    
    return result;
}

void sortChars(std::string &str)
{
    char key;
    for(int i = 1; i < str.length(); i++)
    {
        key = str[i];
        int j;
        for(j = i-1; j >= 0 && str[j]>key; j--)
        {
            str[j+1] = str[j];
        }
        str[j+1] = key;
    }
}

bool IsUnique(const std::string &str)
{
    std::string temp = removeSpaces(str);
    sortChars(temp);
    for(int i = 1; i < temp.length(); i++)
    {
        if(temp[i-1]==temp[i])
            return false;
    }
    
	return true;
}

bool IsPermutation(const std::string a,const std::string b)
{
    std::string tempA = removeSpaces(a);
    std::string tempB = removeSpaces(b);
    if(tempA.length()!=tempB.length())
        return false;
    sortChars(tempA);
    sortChars(tempB);
    
    for (int i = 0; i < tempA.length(); i++)
    {
        if(tempA[i]!=tempB[i])
            return false;
    }
    
    return true;
}

void URLify(std::string str)
{
}

bool IsPalindromePermutation(const std::string str)
{
	return false;
}

bool OneAway(const std::string a, const std::string b)
{
	return false;
}

std::string RunLengthEncode(const std::string str)
{
	return std::string();
}

std::string RunLengthDecode(const std::string str)
{
	return std::string();
}

void RotateMatrix(SimpleRGBA Matrix[], unsigned int w, unsigned int h)
{
}

void ZeroMatrix(int Matrix[], unsigned int w, unsigned int h)
{
}

bool IsRotation(const std::string a, const std::string b)
{
	return false;
}
