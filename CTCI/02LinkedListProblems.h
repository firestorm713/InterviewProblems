#pragma once

struct ListNode
{
	int data;
	ListNode* next;
};

void RemoveDups(ListNode* list);

ListNode* KthToLastNode(ListNode* list, int k);

void RemoveNodeAt(ListNode* list);

// partition the list such that all nodes less than
// partitionNumber are to the left of it, and all
// numbers that are greater than or equal to it are to the right.
void PartitionList(ListNode* list, int partitionNumber);

// each node is a digit, stored in reverse order
// print the sum of the two linked lists.
ListNode* SumLists(ListNode* listA, ListNode* listB);

bool PalindromeList(ListNode* list);

ListNode* ListsIntersect(ListNode* listA, ListNode* listB);

bool ListDoesLoop(ListNode* list);