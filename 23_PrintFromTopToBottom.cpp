//从上往下打印出二叉树的每个节点，同层节点从左至右打印。
//实际就是层次遍历二叉树，先进先出，所以用到队列

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

    vector<int> PrintFromTopToBottom(TreeNode *root) {
		queue<TreeNode*> q;
        vector<int> res;
        q.push(root);
        
        while(!q.empty()){
            root = q.front();
            q.pop();
            if(root != NULL){
                 res.push_back(root->val);
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }

        }
        return res;
    }
