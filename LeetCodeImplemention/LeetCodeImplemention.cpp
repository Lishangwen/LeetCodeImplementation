// LeetCodeImplemention.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <Vector>
#include "LeetCodeLibrary.h"

using namespace std;
int main()
{
	LeetCodeLibrary leetCodeLib = LeetCodeLibrary();
	vector<int> nums{11, 2,15, 7 };
	auto result = leetCodeLib.twoSum(nums, 9);
	cout << result[0]<<endl<<result[1]<<endl;
    return 0;
}

