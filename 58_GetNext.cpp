/*给定一个二叉树和其中的一个结点，请找出中序遍历顺序的下一个结点并且返回。
注意，树中的结点不仅包含左右子结点，同时包含指向父结点的指针。
*/




    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if(pNode == NULL)
            return NULL;
        TreeLinkNode* pNext = NULL;
        //右子树不为空的情况
        if(pNode->right != NULL){
            TreeLinkNode* pRight = pNode->right;
            while(pRight->left != NULL)
                pRight = pRight->left;
            pNext = pRight;
        }
        //右子树为空
        else if(pNode->next != NULL){
            TreeLinkNode* pCurrent = pNode;
            TreeLinkNode* pParent = pNode->next;
            while(pParent != NULL && pCurrent == pParent->right){
                pCurrent = pParent;
                pParent = pParent->next;
            }
            pNext = pParent;
        }
        return pNext;
    }
