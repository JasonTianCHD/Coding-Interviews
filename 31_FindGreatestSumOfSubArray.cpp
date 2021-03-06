//求连续最大子数组的和
//测试用例：NULL指针；正负；全正；全负；

bool Invalid_Input = false;//设置flag判断无效输入

int FindGreatestSumOfSubArray(int *pData, int nlength)
{
    if(（*pData = NULL） || （nlength <= 0)）//一定要考虑特殊情况！
    {
        Invalid_Input = true; //区别无效输入输出的0和正常求和输出的0
        return 0;
    }
    
    Invalid_Input = false;
    
    int CurSum = 0;
    int GreatestSum = 0x80000000;//补码 -2^31 int型最小负数
    
    for(int i = 0; i<nlength; ++i)
    {
        if(CurSum <= 0)
            CurSum = pData[i];
        else
            CurSum += pData[i];
        if(CurSum > GreatestSum)
            GreatestSum = CurSum;
    }
    return GreatestSum;
}
