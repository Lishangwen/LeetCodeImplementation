#include "stdafx.h"
#include "LeetCodeLibrary.h"
#include <algorithm>
using namespace std;

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
string LeetCodeLibrary::longestPalindrome(string s)
{/*
	string result = "";
	if (s.size() <= 1) return s;
	for (int i = 0; i < s.size(); i++)
	{
		bool isFind = false;
		for (int j = s.size()-1; j >= 0&&!isFind; j--)
		{
			for (int offset = 0; offset <= (j - i) / 2; offset++)
			{
				if (s.at(i + offset) == s.at(j - offset))
				{
					if ((offset == (j - i) / 2)&&(j-i+1)>=result.size())
					{
						result = s.substr(i, j - i + 1);
						isFind = true;
					}
				}
				else break;
			}
		}
	}
	return result;
	*/
	if (s.empty()) return "";
	if (s.size() == 1) return s;
	int min_start = 0, max_len = 1;
	for (int i = 0; i < s.size();) 
	{
		if (s.size() - i <= max_len / 2) break;
		int j = i, k = i;
		while (k < s.size() - 1 && s[k + 1] == s[k]) ++k; // Skip duplicate characters.
		i = k + 1;
		while (k < s.size() - 1 && j > 0 && s[k + 1] == s[j - 1])
		{ 
			++k;
			--j; 
		} // Expand.
		int new_len = k - j + 1;
		if (new_len > max_len)
		{ 
			min_start = j; 
			max_len = new_len; 
		}
	}
	return s.substr(min_start, max_len);
}

string LeetCodeLibrary::convert(string s, int numRows)
{
	if (numRows == 1) return s;

	vector<string> rows(min(numRows, int(s.size())));
	int curRow = 0;
	bool goingDown = false;

	for (char c : s) {
		rows[curRow] += c;
		if (curRow == 0 || curRow == numRows - 1) goingDown = !goingDown;
		curRow += goingDown ? 1 : -1;
	}

	string ret;
	for (string row : rows) ret += row;
	return ret;
}

int LeetCodeLibrary::reverse(int x)
{
	if (x == 0) return 0;
	string numStr = to_string(x);
	string resultStr;
	bool zeroProcess = (numStr[numStr.size() - 1] == '0');
	for (int i= numStr.size()-1; i >= 0;i--)
	{
		zeroProcess = zeroProcess && numStr[i] == '0';
		if (!zeroProcess&&numStr[i] != '-') resultStr += numStr[i];
	}
	if (x < 0) resultStr = '-' + resultStr;
	try
	{
		int result = stoi(resultStr);
		return result;
	}
	catch (exception  err)
	{
		return 0;
	}
	
}