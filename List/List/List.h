#pragma once
#include <stdio.h>
typedef int LTDataType;
struct ListNode
{
	struct ListNode* prev;
	struct ListNode* next;
	LTDataType data;
}LTNode;


