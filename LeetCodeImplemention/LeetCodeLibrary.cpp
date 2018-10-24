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
	unordered_map<int, int> hashmap;        // 定义hashmap
	unordered_map<int, int>::iterator it;   // 定义迭代器
	for (int i = 0; i < nums.size(); i++)
	{
		it = hashmap.find(target - nums[i]);   // 查找结果存于迭代器
		if (it != hashmap.end())               // 迭代起不等于hashmap.end则证明找到值
		{
			return { hashmap[target-nums[i]],i};
		}
		hashmap[nums[i]] = i;                 // hashmap添加元素
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

int LeetCodeLibrary::lengthOfLongestSubstring(string s)
{
	int len = 0;
	unordered_map<char, int> hashMap;
	unordered_map<char, int>::iterator it;
	int i = -1;
	for (int j = 0; j < s.length(); j++)
	{
		it = hashMap.find(s.at(j));
		if (it != hashMap.end())
		{
			i = std::max(it->second, i);
		}
		hashMap[s.at(j)] = j;
		len = std::max(j - i, len);
	}
	return len;
}
