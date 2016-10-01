#include<iostream>
using namespace std;

struct ListNode{
	int value;
	ListNode* next;
};

ListNode* FindKthToTail(ListNode* phead, unsigned int k){
	if (phead == NULL || k == 0){  //������� ͷ���ΪNULLָ�룻K=0��
		return NULL;
	}
	int pLength = 0;
	ListNode* phead1 = phead;

	while (phead1 != NULL){
		++pLength;
		phead1 = phead1->next;
	}
	if (k > pLength){ //������� k���������ȣ�����NULL
		return NULL;
	}

	ListNode* pheadfront = phead;//��������ָ��
	ListNode* pheadbehind = phead;

	while ((k-1) != 0){  //��һ��ָ������K-1��
		pheadfront = pheadfront->next;
		--k;
	}
	while (pheadfront->next != NULL){//����ָ��һ����
		pheadfront = pheadfront->next;
		pheadbehind = pheadbehind->next;
	}
	return pheadbehind;
}

