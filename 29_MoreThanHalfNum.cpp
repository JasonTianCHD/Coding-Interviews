//数组中出现次数超过一半的数字，如果不到一半，则返回0


    int MoreThanHalfNum_Solution(vector<int> numbers) {
    	if(numbers.empty())//判断为空
            return 0;
        int length = numbers.size();//vec.size
        
        int result = numbers[0];
        int time = 1;
        for(int i = 1; i < length; i++){ //相同加一，不同减一
            if(numbers[i] == result)
                time++;
            else
                time--;
            if(time == 0){
                time =1;
                result = numbers[++i];//要点：++i！！！！  要把下一个number赋给result，所以先++i
            }           
        }
        time = 0;//判断是否超过一半
        for(int i = 0; i < length; i++){
            if(numbers[i] == result)
                time++;
        }
        if(time<(length/2))
            return 0;
        else
    		return result;
    }
