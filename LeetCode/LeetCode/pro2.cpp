#include "stdafx.h"
#include  "stdio.h"
#include <iostream>
#include <vector>
#include "pro2.h"
using namespace std;
/*
*@deriction	: Reverse the List
*@input		: ListNode*
*@output	: ListNode* 
*/
ListNode* pro2::addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* ans = (ListNode*)malloc(sizeof(ListNode));
	ListNode* head = ans;
	ListNode* T1 = l1;
	ListNode* T2 = l2;
	int add_flag = 0;
	int temp1, temp2, temp;
	while (T1!=NULL || T2!=NULL)
	{
		temp1 = (T1 != NULL) ? T1->val : 0;
		temp2 = (T2 != NULL) ? T2->val : 0;
		
		ListNode *New_Node = (ListNode*)malloc(sizeof(ListNode));
		New_Node->val = (temp1 + temp2)%10;
		New_Node->next = NULL;
		add_flag = (temp1+temp2) / 10;
		ans->next = New_Node;
		ans = ans->next;
		if (T1 != NULL) T1 = T1->next;
		if (T2 != NULL) T2 = T2->next;
	}

	//judge the last num 
	if (add_flag)
	{
		ListNode *last_node	= (ListNode*)malloc(sizeof(ListNode));
		last_node->next = NULL;
		last_node->val = 1;
		ans->next = last_node;
	}
	return head;
}	
bool pro2::is_HaveSameNum(string s, int start, int end)
{
	bool ans = false;
	int i, j;
	for (i = start; i < end; i++)
	{
		for (j = i + 1; j < end; j++)
		{
			if (s[i] == s[j])
				ans = true;
		}
	}
	return ans;
}
int pro2::lengthOfLongestSubstring(string s)
{
	int i, j, temp, count,ans=0,k;
	count = s.length();
	ans = 0;
	if (s == "")
	{
		return 0;
	}
	for (i=0;i<count;i++)
	{
		temp = 1;
		while (!is_HaveSameNum(s,i,i+temp) && (i+temp)<=count)
		{
			if (ans < temp)
			{
				ans = temp;
			}
			temp++;				
		}	
	}
	return ans;
}
int pro2::lengthOfLongestSubstring2(string s)
{
	int len = s.length();
	int hash[256];
	memset(hash, 0, sizeof(hash));
	int maxlen = 0, index = 0;
	int temp, i;
	for (i = 0; i<len; i++) {
		if (hash[s[i]]>index) {
			temp = i - index;
			if (temp>maxlen) {
				maxlen = temp;
			}
			index = hash[s[i]];
			hash[s[i]] = i + 1;  //更新发现的重复符号的索引
		}
		else {
			hash[s[i]] = i + 1;
		}
	}
	temp = i - index;
	if (temp>maxlen) {
		maxlen = temp;
	}
	return maxlen;
}
vector<int>& pro2::sortNum(vector<int>& nums)
{
	vector<int>& ans=nums;
	int temp;
	int count = ans.size();
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (ans[i] > ans[j])
			{
				temp = ans[i];
				ans[i] = ans[j];
				ans[j] = temp;
			}
		}
	}
	return ans;
}
double pro2::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	vector<int>& T1 = nums1;
	vector<int>& T2 = nums2;
	int num1_size = T1.size();
	int num2_size = T2.size();
	int num_sum = num1_size + num2_size;
	double ans;
	for (vector<int>::size_type ix = 0; ix != num2_size; ix++)
	{
		T1.push_back(T2[ix]);
	}
	vector<int>&sort_nums = sortNum(T1);
	if (num_sum %2)
	{
		ans= sort_nums[((num_sum-1)*1.0/2)];
	}
	else
	{
		ans=  (sort_nums[(num_sum - 1)/2] + sort_nums[(num_sum + 1)/2]) / 2.0;
	}
	return ans;
}