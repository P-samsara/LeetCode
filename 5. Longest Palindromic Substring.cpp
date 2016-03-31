//二维动态数组 内存溢出，存着纪念
class Solution {
public:
    string longestPalindrome(string s) {
	int len = length();
	int begin = 0; int end = 0;
		if(s.length()==1)
			return s;
        int **a =  new int *[len];		//动态内存分配
		for(int i = 0; i < len; i++)
			a[i] = new int[len];
		for(int i = 0; i < len; i++)		//初始化
			for(int j = 0; j < len; j++)
				a[i][j] = 1;
		for(int i = 0; i < len; i++)
			a[i][i] = 1;
		for(int j = 1; j <= len-1; j++)
		{
			for(int i = 0; i < len-j; i++)
			{
				if((j-i)%2==1)
				{
					if(a[i][j-1]==1&&s[j]==s[j-1])
					{
						a[i][j] = 1;
						begin = i;
						end = j;
					}
				}
				else
				{
					if(s[i]==s[j]&&a[i+1][j-1]==1)
					{
						a[i][j] = 1;
						begin = i;
						end = j;
					}
				}
			}
		}
		
		for(int i = 0; i < len; i++)
			delete[] a[i];
		delete[] a;
		return s.substr(begin,end);
	}
};

//

class Solution {
public:
    string longestPalindrome(string s) {
		int len = s.length();
		if(len == 1)
		    return s;
		int maxlength = 0;
		int start;
		for(int i = 0; i < len; i++)
		{
			int j = i - 1, k = i + 1;
			while(j>=0&&k<len&&s[j]==s[k])
			{
				if(k-j+1>maxlength)
				{
					maxlength = k-j+1;
					start = j;
				}
				j--;k++;
			}			
		}
		for(int i = 0; i < len; i++)
		{
			int j = i, k = i + 1;
			while(j>=0&&k<len&&s[j]==s[k])
			{
				if(k-j+1>maxlength)
				{
					maxlength = k-j+1;
					start = j;
				}
				j--;k++;
			}
		}
		return s.substr(start,maxlength);
	}
}

