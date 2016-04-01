
class Solution {
public:
    int reverse(int x) {
        long long temp = 0;
		bool tag = 1;
		if(x < 0)
		{
			tag = 0;
			x = 0-x;
		}
		if(x == 0)
			return 0;
		while(x%10 == 0)
			x = x / 10;
		while(x>0)
		{
			int a = x % 10;
			x = x / 10;
			temp = temp * 10 + a;
		}
		if(tag == 0&&temp > 2147483648)
			return 0;
		if(tag == 1&&temp > 2147483647)
			return 0;
		if(tag == 0)
			return -temp;
		else 
			return temp;
	}	
};