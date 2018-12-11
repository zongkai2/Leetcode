// LeetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include  "stdio.h"
#include <iostream>
#include <vector>
#include "pro1.h"
using namespace std;

int main()
{
	pro1 t1;
	vector<int> a = {2,7,11,15};
	vector<int>ans;
	int tar = 9;
	ans = t1.twoSum(a, tar);
	cout << ans[0] << " " << ans[1] << endl;
	//printf("Hellow World !!\n");
    return 0;
}

