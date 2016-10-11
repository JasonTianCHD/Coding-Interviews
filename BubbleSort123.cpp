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
        flag = false;
        for(j=1; j<n-1; j++)
            if(a[j-1] > a[j]){
                swap(a[j-1],a[j]);
                flag = true;
                }
        if(flag == false)
            return;
   }
}

//冒泡排序3
//若存在100个元素，只有前10个无序，那么我们应该在 第一次排序之后，记住没有没有交换顺序的第一个数字的下标（10）

void BubbleSort(int a[],int n){
    int i,j;
    
}
