/*二叉树中和为某一值的路径
输入一颗二叉树和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。
路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。 */

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};
//有错误待检查
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        
		vector<vector<int>> pathList;
        if(root == NULL)
            return pathList;
        vector<int> path;
        
        int CurrentSum = 0;
        FindPath1(root, expectNumber, path, pathList, CurrentSum);
        return pathList;
    }
    vector<vector<int> > FindPath1(TreeNode* root,int expectNumber,vector<int> &path,vector<vector<int> > &pathList,int &CurrentSum){
        if(root==NULL)
            return pathList;
        CurrentSum += root->val;
        path.push_back(root->val);
        
        bool isLeaf = (root->left == NULL && root->right == NULL);
        if(CurrentSum == expectNumber && isLeaf)
            pathList.push_back(path);
        if(root->left!=NULL)
            return FindPath1(root->left, expectNumber, path, pathList, CurrentSum);
        if(root->right!=NULL)
            return FindPath1(root->right, expectNumber, path, pathList, CurrentSum);
        
        CurrentSum -= root->val;
        path.pop_back();
    }    
