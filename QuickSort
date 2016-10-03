// 快速排序

void QuickSort(int a[], int left, int right){
    if(left<right)
    {
        int i = left;
        int j = right;
        int x = a[i];
    }
    
    while(i<j)
    {
        while(i<j && a[j]>x){
            --j;
        }
        if(i<j){
            a[i] = a[j];
            i++;
        }
        while(i<j && a[i]<x){
            ++i;
        }
        if(i<j){
            a[j] = a[i];
            --j;
        }  
    }
    a[i] = x;
    QucikSort(a,left,i-1);
    QuickSort(a,i+1,right);
}
