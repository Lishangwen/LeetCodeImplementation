#pragma once
#include "vector"
#include "unordered_map"
#include "math.h"
using std::vector;
using std::unordered_map;
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
};

