#pragma once
#include"02LinkedListProblems.h"

bool IsRoute();

template<class T>
class BinaryTreeNode
{
	T data;
	BinaryTreeNode* Left;
	BinaryTreeNode* Right;
};

BinaryTreeNode<int>* MinimalTree(int SortedArray[], int ArraySize);

template<typename T>
ListNode<ListNode<T>>* ListOfDepths(BinaryTreeNode<T>* root);

// a tree is balanced as long as the depths of each node's subtree never differ more than 1
template<typename T>
bool IsBalanced(BinaryTreeNode<T>* root);

template<typename T>
bool IsBinarySearchTree(BinaryTreeNode<T>* root);

template<typename T>
BinaryTreeNode* Successor(BinaryTreeNode<T>* node);