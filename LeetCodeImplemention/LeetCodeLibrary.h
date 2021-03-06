#pragma once
#include "vector"
#include "unordered_map"
#include <math.h>
#include <algorithm>
#include "string"
#include <map>
using std::vector;
using std::unordered_map;
using std::string;
using std::to_string;
using std::stoi;
using std::stol;
using std::map;
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

	// 4.Median of Two Sorted Arrays
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);

	// 5.Longest Palindromic Substring
	string longestPalindrome(string s);

	// 6. ZigZag Conversion
	string convert(string s, int numRows);

	// 7. Reverse Integer
	int reverse(int x);

	// 8. String to Integer (atoi)
	int myAtoi(string str);

	// 15. 3Sum
	vector<vector<int>> threeSum(vector<int>& nums);

	// 16. 3Sum Closest
	int threeSumClosest(vector<int>& nums, int target);

	// 17.Letter Combinations of a Phone Number
	vector<string> outPut;
	map <string, string> digitToLetter = 
	{
		{ "2", "abc" },
		{ "3", "def" },
		{ "4", "ghi" },
		{ "5", "jkl" },
		{ "6", "mno" },
		{ "7", "pqrs" },
		{ "8", "tuv" },
		{ "9", "wxyz" }
	};
	vector<string> letterCombinations(string);

	void backtrack(string combination, string nextDigit);
};