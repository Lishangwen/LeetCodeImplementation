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
	int len = 1;
	unordered_map<char, int> hashMap;
	unordered_map<char, int>::iterator it;
	int i = 0;
	for (int j = 0; j < s.length(); j++)
	{
		it = hashMap.find(s.at(j));
		if (it != hashMap.end()) i = std::max(it->second, i);
		hashMap[s.at(j)] = j;
		len = std::max(j - i, len);
	}
	return len;
}

double LeetCodeLibrary::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	int midIndex1 = -1, midIndex2 = -1, midIndexNum = 0, i = 0, j = 0;
	midIndexNum = (nums1.size() + nums2.size()) % 2 == 0 ? 2 : 1;
	midIndex1 = ceil((nums1.size()+ nums2.size()) / 2.0)-1;
	if (midIndexNum == 2) midIndex2 = midIndex1+1;
	vector<int> totalNums;
	while (i < nums1.size() || j <nums2.size())
	{
		if (i < nums1.size() && j <nums2.size())
		{
			if (nums2[j]> nums1[i])
			{
				totalNums.push_back(nums1[i]);
				i++;
			}
			else
			{
				totalNums.push_back(nums2[j]);
				j++;
			}
		}
		else if (i < nums1.size() && j >=nums2.size())
		{
			int val1 = 0, val2 = 0;
			int totalLen = totalNums.size();
			val1 = (midIndex1<=(totalLen - 1)) ? totalNums[midIndex1] : nums1[i + midIndex1 - totalLen];
			if(midIndexNum ==2) val2 = ((totalLen - 1) >= midIndex2) ? totalNums[midIndex2] : nums1[i + midIndex2 - totalLen];
			return (midIndexNum == 2) ? (val1 + val2) / 2.0 : val1;

		}
		else if (i >= nums1.size() && j<nums2.size())
		{
			int val1 = 0, val2 = 0;
			int totalLen = totalNums.size();
			val1 = (totalLen - 1 >= midIndex1) ? totalNums[midIndex1] : nums2[j + midIndex1 - totalLen];
			if (midIndexNum == 2) val2 = (totalLen - 1 >= midIndex2) ? totalNums[midIndex2] : nums2[j + midIndex2 - totalLen];
			return (midIndexNum == 2) ? (val1 + val2) / 2.0 : val1;
		}
	}
	return (midIndexNum == 2) ? (totalNums[midIndex1] + totalNums[midIndex2]) / 2.0 : totalNums[midIndex1];
}
