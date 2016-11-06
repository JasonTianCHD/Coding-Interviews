/*在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，
返回链表头指针。 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5 
*/




    ListNode* deleteDuplication(ListNode* pHead)
    {
        //特殊情况
        if(pHead == NULL)
            return NULL;
		    if(pHead != NULL && pHead->next == NULL)
            return pHead;
        
        ListNode* current;
        //相等，current往后移动
        if(pHead->next->val == pHead->val){
            current = pHead->next->next;
            while(current != NULL && current->val == pHead->val){
                current = current->next;
            }
            return deleteDuplication(current);
        }
        //不等，更新链表
        else{
            current = pHead->next;
            pHead->next = deleteDuplication(current);
            return pHead;
        }
    }
