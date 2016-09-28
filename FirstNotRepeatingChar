// 第一次只出现一次的字符  ‘abcac’   b

//测试用例：字符串为NULL；不存在只出现一次的字符；多个只出现一次的字符；正常情况；

char FirstNotRepeatingChar(char* pString)
{
    if(pString == NULL)   //特殊情况
      return '\0';
    const int tableSize = 256;   //定义哈希表大小
    unsigned int hashTable[tableSize];
    for(unsigned int i = 0;i < tableSize; ++i)
        hashTable[i] = 0;
        
    char* pHashKey = pString;// 第一次扫描
    while(*(pHashKey) != '\0')
      hashTable[*(pHashKey++)] ++;
      
    pHashKey = pString;//第二次扫描
    while(*pHashKey != '\0')
    {
        if(hashTable[*pHashKey] == 1)
          return *pHashKey;
        
        pHashKey++;
    }
    return '\0';
}
