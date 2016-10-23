/*输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。
二叉搜索树：所有左子树的值都比根节点小，所有右子树的值都比根节点大。
*/

    bool VerifySquenceOfBST(vector<int> sequence) {
        int size = sequence.size();
        if(size == 0)
            return false;
 
        int i = 0;
        while(--size)
        {
            while(sequence[i++]<sequence[size]);
            while(sequence[i++]>sequence[size]);
 
            if(i<size)return false;
            i=0;
        }
        return true;
    }
