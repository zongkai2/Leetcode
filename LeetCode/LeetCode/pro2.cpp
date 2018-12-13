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