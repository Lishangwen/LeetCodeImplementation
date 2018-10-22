#pragma once
#include "vector"
using std::vector;
class LeetCodeLibrary
{
public:
	LeetCodeLibrary();
	~LeetCodeLibrary();

	// TwoSum
	vector<int> twoSum(vector<int>& nums, int target);
};

