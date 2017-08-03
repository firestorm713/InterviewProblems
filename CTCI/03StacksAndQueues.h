#pragma once
#include <string>
#include "Common.h"
#include"02LinkedListProblems.h"

class ThreeStacksForOneArray
{
public:
	int StackATop;
	int StackBTop;
	int StackCTop;
private:
	int StackArray[];
};
template<class T>
class Stack
{
private:
	ListNode<T>* Top;
public:
	Stack(ListNode<T>* _Top);
	ListNode<T>* Min();
	void Push(ListNode* node);
	ListNode<T>* Pop();
	T Peek();					// look at the value of the top element
	bool Empty();
};
template<typename T>
struct StackOfStacksNode
{
	Stack<T> stack;
	StackOfStacksNode<T>* next;
};

template<class T>
class StackOfStacks
{
public:
	int StackCapacity;
	ListNode<T>* Top;
	StackOfStacksNode* TopStack;

};

// sort stack by smallest value, can only use one stack to sort
template<typename T>
void SortStack(Stack<T> stack);

enum AnimalType
{
	CAT,
	DOG
};