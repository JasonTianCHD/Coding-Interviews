//冒泡排序1

void BubbleSort(int a[], int n){
    int i,j;
    for(i=0; i<n; i++)
        for(j=1; j<n-i; j++)
            if(a[j-1]>a[j])
                swap(a[j-1],a[j]);
}

//冒泡排序2  
//若存在某一轮没有移动任何一个元素，则说明有序，结束循环

void BubbleSort(int a[], int n){  
    int i,j;
    for(i=0; i<n; i++){
        int flag = false;
        for(j=1; j<n-i; j++){
            if(a[j-1] > a[j]){
                swap(a[j-1],a[j]);
                flag = true;
            }
        }
        if(flag == false)
            return;
   }
}

//冒泡排序3
//若存在100个元素，只有前10个无序，那么我们应该在 第一次排序之后，记住没有没有交换顺序的第一个数字的下标（10）

void BubbleSort(int a[],int n){
    int i,j;
    int flag = n;//设置标志位
    
    while(flag>0){
        i = flag;
        flag = 0;//如果有序，则for循环后flag=0.直接退出
        for(j=1; j<i; j++){
            if(a[j-1]>a[j]){
                swap(a[j-1],a[j]);
                flag = j;//不停的更新flag，记录最后一个发生交换的位置
            }
        }
    }   
}
