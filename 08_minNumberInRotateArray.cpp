/* 把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。*/
//时间复杂度：O(logn)
//特殊情况：{1，2，1，1，1}；{1,1,1,1,1}；   

    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.empty()) //数组大小为0，返回0
            return 0;
        int size = rotateArray.size();
        int left = 0; int right = size-1; int mid = 0; //定义左、右、中间三个指向
        
        while(rotateArray[left] >= rotateArray[right]){
            if(right-left ==1){//结束条件：right-left=1
                mid = right;
                break;
            }
            mid = (right+left)/2;//二分查找，更新位置
            if(rotateArray[left] == rotateArray[right] && rotateArray[left] == rotateArray[mid])
                return MinPos(rotateArray,left,right);//特殊情况，无法判断左右，只能从头挨个查找
            if(rotateArray[mid] > rotateArray[right]){
                left = mid;
            }
            else
                right = mid;
            	
        }
        return rotateArray[mid];
        
    }
	int MinPos(vector<int> rotateArray,int left, int right){//特殊情况：从头查找
        int size = rotateArray.size();int mid = 0;
        for(int i = 0; i < size-1; i++){
            if(rotateArray[i+1] < rotateArray[i]){
                int mid = i+1;
            }
        }
        return mid;
    }
