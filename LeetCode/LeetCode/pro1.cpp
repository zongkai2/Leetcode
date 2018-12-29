#include "stdafx.h"
#include  "stdio.h"
#include <iostream>
#include <vector>
#include "pro1.h"
using namespace std;

vector<int> pro1::twoSum(vector<int>& nums, int target) {
	vector<int> ans(2);
	int count = nums.size();
	int i, j, flag = 0;
	for (i = 0; i < count; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if ((nums[i] + nums[j]) == target)
			{
				flag++;
				ans[0] = i;
				ans[1] = j;
			}
		}
	}
	return ans;
}
int pro1::reverse(int x)
{
	int count = x;
	int result = 0;
	int temp = 1;
	int number = 0;
	int flag = 0;
	vector<int> ans;
	if (count < 0) {
		count = -count;
		flag = 1;
	}
	int count2 = count;
	while (count2) {
		number++;
		ans.push_back(count2 % 10);
		count2 /= 10;
	}
	int number2 = number - 1;
	//start to reverse
	//	ans.reserve(number);
	while (number2 >= 0)
	{
		result = result + ans[number2] * temp;
		number2--;
		temp = temp * 10;
	}

	 if (flag)
	{
		return -result;
	}
	else
	{
		return result;
	}

}

