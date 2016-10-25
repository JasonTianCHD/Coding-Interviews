//操作给定的二叉树，将其变换为源二叉树的镜像。 
//递归的从上到下交换左右子树



struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

    void Mirror(TreeNode *pRoot) {
		if(pRoot == NULL || (pRoot->left == NULL && pRoot->right == NULL))//特殊情况
            return;
        //交换左右子树
        TreeNode* temp = pRoot->left;
        pRoot->left = pRoot->right;
        pRoot->right = temp;
        //只要有子树就交换
        if(pRoot->left)
            Mirror(pRoot->left);
        if(pRoot->right)
            Mirror(pRoot->right);   
    }
