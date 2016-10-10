// 斐波那契数列 求第n项

//A1：递归    冗余计算太多  
long long Fibonacci(unsigned int n){
    if(n <= 0)
      return 0;
    if(n == 1)
      return 1;
    return Fibonacci(n-1) + Fibonacci(n-2);
}

//改进 去掉重复计算的部分：保存中间项，如果需要计算先查找，避免重复计算

//更简单：从下往上计算到第n项  O(n)
long long Fibonacci(unsigned n)
{
    int result[2] = {0,1};  // 0,1特殊
    if(n < 2)
        return result[n];
    
    long long FBone = 1;
    long long FBtwo = 0;
    long long FBn;
    
    for(unsigned int i = 0; i <= n; ++i){   //  >=2时
        FBn = FBone + FBtwo;
        
        FBtwo = FBone;
        FBone = FBn;
        }
    return FBn;
}

