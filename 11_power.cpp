//给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。
//特殊情况：考虑base和exponent分别为正、负、零的情况
//增加亮点：1.double、float在计算机中有误差，所以可以不用==，而是让两个数之间的误差小于一个很小的数（比如0.00000001）
//我们就可以认为两个数相等。 2.用位运算代替除法和求余，计算速度会更快。  除法： n>>1  除2求余：n & 0x1

    double Power(double base, int exponent) {
    	if(base == 0)//0的n次方无意义
            return 0.0;
        if(exponent == 0)//任何数（除0）的0次方为1
            return 1.0;
        double result = 1.0;
        if(exponent > 0){
            for(int i = 0; i < exponent; i++)
                result *= base;
        }
        else{
            for(int i = 0; i < (-exponent); i++)
                result *= base;
            result = 1/result;
        }
		return result;
    }
