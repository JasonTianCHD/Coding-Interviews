//已知二叉树的前序遍历和中序遍历的结果，重建二叉树
/*输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。*/

struct TreeNode(){
    int val;
    TreeNode* left;
    TreeNode* right;
};

    struct TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in) {
		
        int pre_size = pre.size();
        if(pre_size <= 0){
            return NULL;
        }
        vector<int> pre_left, pre_right, in_left, in_right;
        int val = pre[0];
        TreeNode* node = new TreeNode(val);//头结点，值为val
        
        int p = 0;
        for(p; p < pre_size; p++){//返回中序中头结点的位置
            if(in[p] == val)
                break;
        }
        //根据头结点位置，将中序分为左右两部分
        for(int i=0; i < pre_size; i++){
            if(i < p){//左半部分
                pre_left.push_back(pre[i+1]);
                in_left.push_back(in[i]);
            }
            else if(i > p){//右半部分
                pre_right.push_back(pre[i]);
                in_right.push_back(in[i]);
            }
        }
        node->left = reConstructBinaryTree(pre_left,in_left);
        node->right = reConstructBinaryTree(pre_right,in_right);
        return node;
    }
