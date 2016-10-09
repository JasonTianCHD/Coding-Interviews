// 树的子结构  判断二叉树A是否是二叉树B的子结构
// 特殊情况：NULL；

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        bool result = false; //默认为false
		if(pRoot2 == NULL || pRoot1 == NULL)//只要有一个为空，返回false
            return result;
        //都不为空时
        if(pRoot1->val == pRoot2->val)
            result = DoesTree1HaveTree2(pRoot1,pRoot2);
        if(!result)
            result = HasSubtree(pRoot1->left,pRoot2);
        if(!result)
            result = HasSubtree(pRoot1->right,pRoot2);
        return result;
    }
    bool DoesTree1HaveTree2(TreeNode* pRoot1, TreeNode* pRoot2){
        if(pRoot2 == NULL)
            return true;
        if(pRoot1 == NULL)
            return false;
        if(pRoot1->val != pRoot2->val)
            return false;
        return DoesTree1HaveTree2(pRoot1->left,pRoot2->left) && DoesTree1HaveTree2(pRoot1->right,pRoot2->right);
    }
