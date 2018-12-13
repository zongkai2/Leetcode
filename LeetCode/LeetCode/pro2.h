#pragma once
#pragma once
#include "stdafx.h"
#include  "stdio.h"
#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class pro2 {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};