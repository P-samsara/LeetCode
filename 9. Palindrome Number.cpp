class Solution {
public:
    bool isPalindrome(int x) {
		if (x == -2147483648)
			return 0;
        if (x < 0)
			return 0;
		if(x>=0&&x<=9)
			return 1;
		int length = 0;
		int y = x;
		bool result = 1;
		while(y!=0)
		{
			y = y / 10;
			length ++;
		}
		int i,j;
		int xi,yi;
		if(length%2==0)
		for(i = 1,j = length; j==i-1 ;i++,j--)
		{
			xi = x / pow(10,length-i);
				while(xi >= 10)
					xi = xi%10;
			yi = x / pow(10,length-j);
				while(yi >= 10)
					yi = yi%10;
			if(xi != yi)
				result = 0;
		}
		if(length%2==1)
		for(i = 1,j = length; i==j ;i++,j--)
		{
			xi = x / pow(10,length-i);
			yi = x - x/pow(10,j-1);
			if(xi != yi)
				result = 0;
		}
		
		return result;
    }
};