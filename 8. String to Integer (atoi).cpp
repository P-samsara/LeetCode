class Solution {
public:
    int myAtoi(string str) {
	const int int_max = 2147483647;
	const int int_min = -2147483648;
	int i = 0;
	long long result = 0;
	bool tag = 1;
	while(str[i] == ' ')
	{	i++;}
	if(str[i] == '+')
	{
		tag = 1;
		i++;
	}
	else if(str[i] == '-')
	{
		tag = 0;
		i++;
	}
	int tmp = str[i]-'0';
	if(!(0<=tmp&&tmp<10))
		return 0;
	while(i!=str.length())
	{
		tmp = str[i]-'0';
		if(!(0<=tmp&&tmp<10))
			break;
		else
		{
			result = result * 10 + tmp;
			if(result > int_max && tag==1)	
				return int_max;
			if(0-result < int_min && tag==0)	
				return int_min;
		}
		i++;
	}
		if(tag)
			return result;
		else	
			return 0-result;
	}
};