#pragma once
#include<string>

std::string removeSpaces(std::string str);

void sortChars(std::string &str);

// no additional data structures!
bool IsUnique(const std::string &str);

// returns true iff
// 			- the lengths of the two strings are the same
//			- the number of each character present in the string is identical
bool IsPermutation(const std::string a, std::string b);

// input: Mr John Smith
// output: Mr%20John%20Smith
void URLify(std::string str);

// Tact Coa = true
// permutations( tacocat, acto cta )
bool IsPalindromePermutation(const std::string str);

// pale, ple   = true
// pales, pale = true
// pale, bale  = true
// pale, bake  = false
bool OneAway(const std::string a, const std::string b);

// EG aaabbbcccC = a3b3c3C
std::string RunLengthEncode(const std::string str);

// companion to above function
std::string RunLengthDecode(const std::string str);

struct SimpleRGBA
{
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned char A;
};

// Rotate an image by 90 degrees
void RotateMatrix(SimpleRGBA Matrix[], unsigned int w, unsigned int h);

// if a cell is 0, zero out both its row and column
void ZeroMatrix(int Matrix[], unsigned int w, unsigned int h);


// companion function to below
inline bool IsSubstring(const std::string a, const std::string b)
{
	return a.find(b)!=std::string::npos;
}

// using only one call to the above IsSubstring, determine if string b is a rotation of string a
// waterbottle erbottlewat
bool IsRotation(const std::string a, const std::string b);