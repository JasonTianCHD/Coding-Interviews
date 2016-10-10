//找到二叉树的深度  递归、非递归 两种方法
// 特殊情况：NULL；

// 递归版

int MaxDepth(BiTree* BT){
    int depth = 0;
    if(BT)//若不为空，则递归的查找左右子树的深度
    {
        int LeftDepth = MaxDepth(BT->lchild);
        int RightDepth = MaxDepth(BT->rchild);
        depth = (LeftDepth>=RightDepth)?(LeftDepth+1):(RightDepth+1);
    }
    return depth;
}

// 非递归版本

