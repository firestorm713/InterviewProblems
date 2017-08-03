#pragma once
#include <string>
#include "Common.h"

class ThreeStacksForOneArray
{
public:
	int StackATop;
	int StackBTop;
	int StackCTop;
private:
	int StackArray[];
};

class Stack
{
private:
	ListNode* Top;
public:
	Stack(ListNode* _Top);
	ListNode* Min();
	void Push(ListNode* node);
	ListNode* Pop();
	int Peek();					// look at the value of the top element
	bool Empty();
};

struct StackOfStacksNode
{
	Stack stack;
	StackOfStacksNode* next;
};

class StackOfStacks
{
public:
	int StackCapacity;
	ListNode* Top;
	StackOfStacksNode* TopStack;

};

// sort stack by smallest value, can only use one stack to sort
void SortStack(Stack stack);

enum AnimalType
{
	CAT,
	DOG
};

struct AnimalQueueNode : public ListNode
{
	AnimalType animalType;
};

class AnimalQueue
{

};