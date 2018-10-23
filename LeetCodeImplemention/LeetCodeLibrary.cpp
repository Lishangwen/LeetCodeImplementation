#include "stdafx.h"
#include "LeetCodeLibrary.h"




LeetCodeLibrary::LeetCodeLibrary()
{
}


LeetCodeLibrary::~LeetCodeLibrary()
{
}

vector<int> LeetCodeLibrary::twoSum(vector<int>& nums, int target)
{
	unordered_map<int, int> hashmap;
	for (int i = 0; i < nums.size(); i++)
	{
		if (hashmap.find(target - nums[i]) != hashmap.end())
		{
			return { hashmap[target-nums[i]],i};
		}
		hashmap[nums[i]] = i;
	}
	return { 0,0 };
}

ListNode* LeetCodeLibrary::addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* result = new ListNode(0), *ptr = result;
	while (l1 != NULL || l2 != NULL){
		ptr->val = ptr->val+((l1 == NULL) ? 0 : l1->val)+ ((l2 == NULL) ? 0 : l2->val);
		if (l1 != NULL) l1 = l1->next;
		if (l2 != NULL) l2 = l2->next;
		if(l1 != NULL || l2 != NULL|| ptr->val>=10) ptr->next = new ListNode(ptr->val / 10);
		if (ptr->val >=10) ptr->val %= 10;
		ptr = ptr->next;
	}
	return result;
}
