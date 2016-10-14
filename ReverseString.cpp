// 把“I love dog”反转成“god evol I”


    string reverseString(string iniString) {
        if(iniString.empty()){
            return NULL;
        } 
        int i = 0;
        int j = iniString.length()-1;
        while(i<j){  //交换
            char temp = iniString[j];
            iniString[j] = iniString[i];
            iniString[i] = temp;
            i++;
            j--;
        }
        return iniString;
    }

// 把“I love dog”反转成“dog love I”；先像上面一样反转，然后再判断空格，局部反转
