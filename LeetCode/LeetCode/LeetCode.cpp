// LeetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include  "stdio.h"
#include <iostream>
#include <vector>
#include "pro2.h"
#include "corecrt_malloc.h"

using namespace std;

int main()
{
//	pro1 t1;
//	vector<int> a = {2,7,11,15};
//	vector<int>ans;
//	int tar = 9;
//	ans = t1.twoSum(a, tar);
//	cout << ans[0] << " " << ans[1] << endl;
	//printf("Hellow World !!\n");
	pro2 p2;
	ListNode *s1 = (ListNode *)malloc(sizeof(ListNode));
	ListNode *s2 = (ListNode *)malloc(sizeof(ListNode));
	s1->val = 0;
	s2->val = 0;
//	ListNode s1 = NULL;
//	ListNode s2 = NULL;
	ListNode *head1 = s1;
	ListNode *head2 = s2;
	for (int i = 0; i < 3; i++)
	{
		ListNode *New_Node = (ListNode *)malloc(sizeof(ListNode));
		s1->next = New_Node;
		s1 = s1->next;
		New_Node->val = 2 * i;
		New_Node->next = NULL;
	}
	for (int i = 0; i < 3; i++)
	{
		ListNode *New_Node = (ListNode *)malloc(sizeof(ListNode));
		s2->next = New_Node;
		s2 = s2->next;
		New_Node->val = 3 * i;
		New_Node->next = NULL;
	}
	
	ListNode *ans = p2.addTwoNumbers(head1->next, head2->next);

    return 0;
}

