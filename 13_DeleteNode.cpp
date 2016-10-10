//在O（1）时间删除链表节点
//特殊情况：NULL;只有一个节点；删除头节点，末尾节点；

struct ListNode{
    int value;
    ListNode* next;
};

Void DeleteNode(ListNode** pListHead, ListNode* pToBeDeleted){
    if(!pListHead || !pToBeDeleted){   //都不为空才行
        return;
    }
    //删除的节点不是尾节点
    if(pToBeDeleted->next != NULL){
        ListNode* pNext = pToBeDeleted->next;
        pToBeDeleted->value = pNext->value;
        pToBeDeleted->next = pNext->next;
        
        delete pNext;
        pNext = NULL;
    }
    //链表只有一个节点，删除尾节点（也就是头节点）
    else if(*pListHead == pToBeDeleted){
        delete pToBeDeleted;
        pToBeDeleted = NULL:
        *pListHead = NULL;//把头节点置成NULL
    }
    //链表有很多节点，删除的是尾节点(需要遍历一遍）
    else{
        ListNode* pNode = *pListHead;
        while(pNode->next != pToBeDeleted)
            pNode = pNode->next;
        }
        pNode->next = NULL;//pNode是倒数第二个节点
        delete pToBeDeleted;
        pToBeDeleted = NULL;
    } 
}
