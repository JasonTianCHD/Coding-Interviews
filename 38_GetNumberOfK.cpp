//数字在排序数组中出现的次数
顺序扫过去O(n)，优化使用二分查找O(logn)


    int GetNumberOfK(vector<int> data ,int k) {
        int num = 0;
        if(!data.empty()){
            int first = GetFirst(data,k,0,data.size()-1);
            int last = GetLast(data,k,0,data.size()-1);
            if(first > -1 && last > -1)
                num = last-first+1;
        }
        return num;
    }
    int GetFirst(vector<int>& data, int k, int start, int end){
        if(start > end)
            return -1;
        int mid = (start+end)/2;
        if(data[mid] == k){
            if(mid == start || data[mid-1] != k)
                return mid;
            else
                end = mid-1;
        }
        else{
            if(data[mid] > k)
                end = mid -1;
            else
                start = mid+1;
        }
        return GetFirst(data,k,start,end);
    }
    int GetLast(vector<int> &data,int k,int start,int end){
        if(start > end)
            return -1;
        int mid = (start+end)/2;
        if(data[mid]==k){
            if((mid == end) || (data[mid+1] != k))
                return mid;
            else
                start = mid +1;
        }
        else{
            if(data[mid]>k)
                end = mid-1;
            else
                start = mid+1;
        }
        return GetLast(data,k,start,end);
    }
