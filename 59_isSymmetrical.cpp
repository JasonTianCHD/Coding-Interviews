/*请实现一个函数，用来判断一颗二叉树是不是对称的。注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。
*/



//递归
    bool isSymmetrical(TreeNode* pRoot)
    {
    	return isSymmetrical(pRoot, pRoot);
    }
    //判断子树是否同时存在，如果同时存在则判断val是否相等，递归。
    bool isSymmetrical(TreeNode* pRoot1,TreeNode* pRoot2){
        if(pRoot1 == NULL && pRoot2 ==NULL)
            return true;
        if(pRoot1 == NULL || pRoot2 == NULL)
            return false;
        if(pRoot1->val != pRoot2->val)
            return false;
        return isSymmetrical(pRoot1->left,pRoot2->right)
            && isSymmetrical(pRoot1->right,pRoot2->left);
    }
