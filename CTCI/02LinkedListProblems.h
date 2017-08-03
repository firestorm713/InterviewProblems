#pragma once
//#include "Common.h"

template <typename T>
class ListNode<T>
{
public:
	void RemoveDups(ListNode<T>* list);

	void RemoveNodeAt(ListNode<T>* list);
	ListNode<T>* KthToLastNode(ListNode<T>* list, int k);
	// partition the list such that all nodes less than
	// partitionNumber are to the left of it, and all
	// numbers that are greater than or equal to it are to the right.
	void PartitionList(ListNode<T>* list, int partitionNumber);

	// each node is a digit, stored in reverse order
	// print the sum of the two linked lists.
	ListNode<T>* SumLists(ListNode* listA, ListNode* listB);

	bool PalindromeList(ListNode<T>* list);

	ListNode<T>* ListsIntersect(ListNode<T>* listA, ListNode* listB);

	bool ListDoesLoop(ListNode<T>* list);

	ListNode<T>();

	void Add(ListNode<T>* Node);

	void Remove(ListNode<T>* Node);

	T GetData();
	void SetData(T t);

	ListNode<T>* GetNext();
	void SetNext(ListNode<T>* Next);

protected:

	T data;
	ListNode<T>* next;
};

template<typename T>
inline void ListNode<T>::RemoveDups(ListNode<T>* list)
{
}

template<typename T>
inline void ListNode<T>::RemoveNodeAt(ListNode<T>* list)
{
}

template<typename T>
inline ListNode<T>* ListNode<T>::KthToLastNode(ListNode<T>* list, int k)
{
	return NULL;
}

template<typename T>
inline void ListNode<T>::PartitionList(ListNode<T>* list, int partitionNumber)
{
}

template<typename T>
inline ListNode<T>* ListNode<T>::SumLists(ListNode * listA, ListNode * listB)
{
	return NULL;
}

template<typename T>
inline bool ListNode<T>::PalindromeList(ListNode<T>* list)
{
	return false;
}

template<typename T>
inline ListNode<T>* ListNode<T>::ListsIntersect(ListNode<T>* listA, ListNode * listB)
{
	return NULL;
}

template<typename T>
inline bool ListNode<T>::ListDoesLoop(ListNode<T>* list)
{
	return false;
}

template<typename T>
inline void ListNode<T>::Add(ListNode<T>* Node)
{
}

template<typename T>
inline void ListNode<T>::Remove(ListNode<T>* Node)
{
}

template<typename T>
inline T ListNode<T>::GetData()
{
	return T();
}

template<typename T>
inline void ListNode<T>::SetData(T t)
{
}

template<typename T>
inline ListNode<T>* ListNode<T>::GetNext()
{
}

template<typename T>
inline void ListNode<T>::SetNext(ListNode<T>* Next)
{
}

template<typename T>
inline ListNode<T>::ListNode()
{
}
