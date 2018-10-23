// LeetCodeImplemention.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <Vector>
#include "LeetCodeLibrary.h"

using namespace std;
int main()
{
	
	LeetCodeLibrary leetCodeLib = LeetCodeLibrary();
	/*
	vector<int> nums{ 11, 2,15, 7 };
	auto result = leetCodeLib.twoSum(nums, 9);
	cout << result[0]<<endl<<result[1]<<endl;
	*/
	ListNode* ptr;
	ListNode headL1 = ListNode(9);
	/*
	ptr = &headL1;
	ptr->next = &ListNode(4);
	ptr = ptr->next;
	ptr->next = &ListNode(3);
	*/
	ListNode headL2 = ListNode(1);
	ptr = &headL2;

	ptr->next = &ListNode(9);
	/*
	ptr = ptr->next;
	ptr->next = &ListNode(9);
	ptr = ptr->next;
	ptr->next = &ListNode(9);
	ptr = ptr->next;
	ptr->next = &ListNode(9);
	ptr = ptr->next;
	ptr->next = &ListNode(9);
	ptr = ptr->next;
	ptr->next = &ListNode(9);
	ptr = ptr->next;
	ptr->next = &ListNode(9);
	ptr = ptr->next;
	ptr->next = &ListNode(9);
	ptr = ptr->next;
	ptr->next = &ListNode(9);
	*/
	
	ListNode* result=leetCodeLib.addTwoNumbers(&headL1, &headL2);

	while (result != NULL)
	{
		cout << result->val;
		result = result->next;
	}
    return 0;
}

