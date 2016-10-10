// 合并两个递增排序的链表
// 特殊情况：null(其中一个或者both);只有一个节点；

struct ListNode
{
    int value;
    ListNode* next;
};

ListNode* MergeListNode(ListNode* head1, ListNode* head2)
{
    if(head1 == NULL)
        return head2;
    else if(head2 == NULL)
            return head1;
            
    ListNode* NewHead = NULL;
    
    if(head1->value < head2->value){
        NewHead = head1;
        NewHead->next = MergeListNode(head1->next,head2);
    }
    else{
        NewHead = head2;
        NewHead->next = MergeListNode(head1,head2->next);
        }
    return NewHead;
}
