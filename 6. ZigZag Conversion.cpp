class Solution {
public:
    string convert(string s, int numRows) {
		string result = "";
		int sum = 0;
		if(s.length() == 1)
			return s;
		if(numRows == 1)
			return s;
		if(s.length() < numRows)
			return s;
        for(int i = 1; i <= numRows; i++)
		{
			sum = i-1;
			if(i==1||i==numRows)	//上下两行
			{
				while(sum < s.length())
				{	
					result += s[sum];
					sum += (2*numRows-2);
				}
			}
			else
			{
				while(sum < s.length())		//每次增加2(n-i)
				{
					result += s[sum];
					sum += (2*numRows-2*i);
					if(sum >= s.length())
						continue;
					result += s[sum];		//每次增加2(i-1)
					sum += (2*i-2);
				}
			}
		}
		return result;
    }
};