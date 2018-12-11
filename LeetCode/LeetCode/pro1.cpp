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
