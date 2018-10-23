#pragma once
#include "vector"
#include "unordered_map"
using std::vector;
using std::unordered_map;
class LeetCodeLibrary
{
public:
	LeetCodeLibrary();
	~LeetCodeLibrary();

	// 1¡¢TwoSum
	vector<int> twoSum(vector<int>& nums, int target);
};

