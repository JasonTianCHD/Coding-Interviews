//从尾到头打印链表
//

struct ListNode{
    int val;
    ListNode* next;
};

Vector<int> printListFromTailToHead(ListNode* head){
    stack<ListNode*> nodes;
    vector<int> vec;
    
    ListNode* pHead = head;
    while(pHead != NULL){
        nodes.push(pHead);
        pHead = pHead->next;
    }
    while(!nodes.empty()){
        vec.push_back(nodes.top()->val);
        nodes.pop();
    }
    return vec;
}
