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

#include<iostream>
#include <string>
using namespace std;

void main()
{
 string str = "I love dog";
 int len = str.length(); //求出字符串的长度
 for (int i = 0; i<len/2; i++) //整体交换
 {
  char temp = str[i];
  str[i] = str[len-i-1];
  str[len-i-1] = temp;
 }
    
 int i =0;int j = 0;
 while(str[i] != '\0'){ //内部反转
	 while(str[i]==' '){
		i++;
	 }
	 j = i;//j记录当前反转单词的起始位置
	 while(str[i] != ' ' && str[i] != '\0'){//i记录当前反转单词的（末尾位置+1）；
		i++;
	 }
	 for(int k = 0; k<((i-j)/2);k++){ //局部交换
		char temp = str[j+k];
		str[j+k] = str[i-1-k];
		str[i-1-k] = temp;
	 }
 }
 //输出交换后的字符串
 cout<<str<<endl;
 system("pause");
}
