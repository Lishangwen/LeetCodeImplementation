#pragma once
#include "vector"
#include "unordered_map"
#include <math.h>
#include <algorithm>
using std::vector;
using std::unordered_map;
using std::string;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class LeetCodeLibrary
{
public:
	LeetCodeLibrary();
	~LeetCodeLibrary();

	// 1. TwoSum
	vector<int> twoSum(vector<int>& nums, int target);

	// 2. Add Two Numbers
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

	// 3. Longest Substring Without Repeating Characters
	int lengthOfLongestSubstring(string s);
};

