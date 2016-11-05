/*一个链表中包含环，请找出该链表的环的入口结点。

先找到环内的一点，然后可以求出环的节点数量N，然后用两个指针，一个先走N步；直到两个指针相等，入口节点找到。
*/




    //找到环中的某一个点
    ListNode* MeetingNode(ListNode* pHead){
        if(pHead == NULL)
            return NULL;
        ListNode* pSlow = pHead->next;
        if(pSlow == NULL)
            return NULL;
        ListNode* pFast = pSlow->next;
        while(pSlow != NULL && pFast != NULL){
            if(pSlow == pFast)
                return pFast;
            pSlow = pSlow->next;
            pFast = pFast->next;
            if(pFast->next != NULL)
                pFast = pFast->next;
        }
        return NULL;
    }
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
		ListNode* meetNode = MeetingNode(pHead);
        if(meetNode == NULL)
            return NULL;
        ListNode* pNode1 = meetNode;
        //找到环的节点数量
        int circleNum = 1;
        while(pNode1->next != meetNode){
            pNode1 = pNode1->next;
            circleNum++;
        }
        //找到入口节点
        ListNode* pNode2 = pHead;
        pNode1 = pHead;
        for(int i = 0; i < circleNum; i++){
            pNode1 = pNode1->next;
        }    
        while(pNode1 != pNode2){
            pNode1 = pNode1->next;
            pNode2 = pNode2->next;
        }
        return pNode1;
                
    }
