//打靶问题，每次能中整数环，求连续打10枪命中90环的所有可能总数

#include<iostream>
using namespace std;

int sum = 0;
void compute(int score, int num, int *store){
	if(num<0||score>(num+1)*10)
		return;
	if(num == 0){//递归结束
		store[num] = score;
		sum++;
	}
	for(int i = 10; i >= 0; i--){//关键递归步骤
		store[num] = i;
		compute(score-i,num-1,store);
	}
}

void main(){
	int store[10]; int score,num;
	cout<<"输入打靶得分和打靶数量：";
	cin>> score >> num;
	compute(score,num-1,store);
	cout<<"所有可能总数是："<<sum<<endl;
	system("pause");
}

//输出所有的可能 

#include<iostream>
using namespace std;
int sum, num;   //num为打靶数量，因为输入不同，output参数不同，所以设置成全局变量

void output(int num, int *store){
	for(int i=0; i <= num; i++){
		cout<<store[i]<<":";
	}
	cout<<endl;
}

void compute(int score, int num1, int *store){
	if(num1<0||score>(num1+1)*10)
		return;
	if(num1 == 0){
		store[num1] = score;
		output(num-1, store);
		sum++;
	}
	for(int i = 10; i>=0;i--){
		store[num1] = i;
		compute(score-i,num1-1,store);
	}
}

void main(){
	int store[10]; int score;
	cout<<"输入打靶得分和打靶数量：";
	cin>> score >> num;
	compute(score,num-1,store);
	cout<<"所有可能总数是："<<sum<<endl;
	system("pause");
}

//Reference: http://zhidao.baidu.com/link?url=qI9TaIb7o5UqMQhxZ_lZqU5VuD7InqeLeJwnjLf6o6kBN_fgCt4wF3kwVRls23UUvtA2Nee1Cl7x8qriULzk9a
