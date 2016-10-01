#include<iostream>
using namespace std;

struct ListNode{
	int value;
	ListNode* next;
};

ListNode* FindKthToTail(ListNode* phead, unsigned int k){
	if (phead == NULL || k == 0){  //特殊情况 头结点为NULL指针；K=0；
		return NULL;
	}
	int pLength = 0;
	ListNode* phead1 = phead;

	while (phead1 != NULL){
		++pLength;
		phead1 = phead1->next;
	}
	if (k > pLength){ //特殊情况 k大于链表长度，返回NULL
		return NULL;
	}

	ListNode* pheadfront = phead;//定义两个指针
	ListNode* pheadbehind = phead;

	while ((k-1) != 0){  //第一个指针先走K-1步
		pheadfront = pheadfront->next;
		--k;
	}
	while (pheadfront->next != NULL){//两个指针一起走
		pheadfront = pheadfront->next;
		pheadbehind = pheadbehind->next;
	}
	return pheadbehind;
}

