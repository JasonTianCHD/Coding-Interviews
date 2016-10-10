//求两个链表的第一个交汇节点

struct ListNode{  //定义节点
  int Key;
  ListNode* Next;
};

ListNode* FindFirstCommonNode（ListNode* phead，ListNode* qhead）{
    if(phead1 == NULL || phead2 == NULL)  //特殊情况
        return NULL;
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int k = 0;
    ListNode* phead1 = phead;
    ListNode* qhead1 = qhead;
    
    while(phead1 != NULL){  //计算两个list的长度
        ++i;
        phead1 = phead1->Next;
    }
    while(qhead1 != NULL){
        ++j;
        qhead1 = qhead1->Next;
    }
    
    ListNode* Long = phead;  //确定长短字符串
    ListNode* Short = qhead;
    k = i-j;
    if(i<j)
    {
        ListNode* Long = qhead;
        ListNode* Short = phead;
        k = j-i;
    }
    
    while(k != 0){         //长字符串先走K步
        Long = Long->Next;
        --k;
    }
    while((Short != NULL)&&(Long != NULL)&&(Short != Long)){
        Short = Short->Next;
        Long = Long->Next;
    }
    ListNode* pFirstCommonNode = Long;
    return pFirstCommonNode;
}

