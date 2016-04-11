class Solution {
public:
    int divide(int dividend, int divisor) {
        long long m, n, result=0;
        m=abs((long long)dividend);
        n=abs((long long)divisor);
        while(m>=n){
            long long temp=n, power=1;
            while((temp<<power) <= m){
                power+=1;
            }
            power-=1;
            m-=(temp<<power);
            result+=std::pow(2,power);
        }
        if( (dividend>0) ^ (divisor>0))  result = -result;
        return result>INT_MAX ? INT_MAX:result;
    }
};
//这道题只用减法会超时，看了discuss，学习了 << 移位运算降到logn