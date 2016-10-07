// 调整数组顺序使奇数位于偶数前面
// 特殊情况：NULL，length<0；


Void ReorderOddEven(int *pData, unsigned int length){
    if(pData == NULL || length == 0){
        return ;
    }
    
    int *pBegin = pData;
    int *pEnd = pData + length -1;
    
    while(pBegin < pEnd){
        while(pBegin<pEnd && (*pBegin & 0x1)==1){
            pBegin++;
        }
        while(pBegin<pEnd && (*pEnd & 0x1)==0){
            pEnd--;
        }
        if(pBegin < pEnd){
            int tmp = *pBegin;
            *pBegin = *pEnd;
            *pEnd = tmp;
        }
/*        int *tmp = pBegin;
        pBegin = pEnd;
        pEnd = tmp;  */
    }
}
