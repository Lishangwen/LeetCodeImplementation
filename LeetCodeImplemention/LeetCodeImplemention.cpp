// LeetCodeImplemention.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "LeetCodeImplemention.h"
using namespace std;
int main()
{
	LeetCodeLibrary leetCodeLib = LeetCodeLibrary();
	//int len = leetCodeLib.lengthOfLongestSubstring("bb");
	//cout << len;
	//TwoSumTest(leetCodeLib);
	//AddTwoNumbersTest(leetCodeLib);
	//findMedianSortedArraysTest(leetCodeLib);
	//longestPalindromeTest(leetCodeLib);
	//ConvertTest(leetCodeLib);
	//ReverseTest(leetCodeLib);
	//AtoiTest(leetCodeLib);
	//ThreeSumTest(leetCodeLib);
	//ThreeSumClosestTest(leetCodeLib);
	LetterCombinationsTest(leetCodeLib);
    return 0;
}


// TwoSum测试函数
void TwoSumTest(LeetCodeLibrary leetCodeLib)
{
	vector<int> nums{ 11, 2,15, 7 };
	auto result = leetCodeLib.twoSum(nums, 9);
	cout << result[0]<<endl<<result[1]<<endl;
}

// Add Two Numbers测试函数
void AddTwoNumbersTest(LeetCodeLibrary leetCodeLib)
{
	ListNode* ptr;
	ListNode headL1 = ListNode(9);
	ListNode headL2 = ListNode(1);
	ptr = &headL2;
	ptr->next = &ListNode(9);
	ListNode* result = leetCodeLib.addTwoNumbers(&headL1, &headL2);
	while (result != NULL)
	{
		cout << result->val;
		result = result->next;
	}
}

// Median of Two Sorted Arrays测试函数
void findMedianSortedArraysTest(LeetCodeLibrary leetCodeLib)
{
	vector<int> v1{ 1 };
	vector<int> v2{ 2,3 };
	double result = leetCodeLib.findMedianSortedArrays(v1, v2);
	cout << result;
}

// longestPalindromeTest测试函数
void longestPalindromeTest(LeetCodeLibrary leetCodeLib)
{
	//string result = leetCodeLib.longestPalindrome("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabcaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	string result = leetCodeLib.longestPalindrome("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabcaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	cout << result;
}


void ConvertTest(LeetCodeLibrary leetCodeLib)
{
	string result = leetCodeLib.convert("PAYPALISHIRING", 3);
	cout << result;
}

void ReverseTest(LeetCodeLibrary leetCodeLib)
{
	cout <<leetCodeLib.reverse(999999999999999);
}

void AtoiTest(LeetCodeLibrary leetCodeLib)
{
	//cout << leetCodeLib.myAtoi("test 100") << endl << leetCodeLib.myAtoi("test haha -900a -20 atio") << endl;
	cout << leetCodeLib.myAtoi("-   234");
}


void ThreeSumTest(LeetCodeLibrary leetCodeLib)
{
	vector<int> nums{ -1,0,1,2,-1,-4 };
	auto result = leetCodeLib.threeSum(nums);
}

void ThreeSumClosestTest(LeetCodeLibrary leetCodeLib)
{
	vector<int> nums{ 0, 2, 1, -3 };
	int target = 1;
	cout << leetCodeLib.threeSumClosest(nums, target);
}

void LetterCombinationsTest(LeetCodeLibrary leetCodeLib)
{
	string digits = "23";
	auto result = leetCodeLib.letterCombinations(digits);
	cout << "result";
}