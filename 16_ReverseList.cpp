// 链表逆序

struct ListNode{
    int pValue;
    ListNode* Next;
};

ListNode* ReverseList(ListNode* head){
    
    ListNode* ReverseHead = NULL;
    ListNode* pHead = head;
    ListNode* pPrev = NULL;
    
    while(pHead != NULL)
    {
        ListNode* pNext = pHead->Next; 
        if(pNext == NULL)
            ReverseHead = pHead;
        pHead->Next = pPrev;// =左右不可以交换顺序！
        
        pPrev = pHead;
        pHead = pNext;
    }
    return ReverseHead;
}
