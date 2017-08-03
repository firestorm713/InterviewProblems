#pragma once

template <typename T>
struct ListNode<T>
{
	T data;
	ListNode* next;
};