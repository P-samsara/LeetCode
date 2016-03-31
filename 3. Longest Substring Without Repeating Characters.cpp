class Solution {
public:
    int lengthOfLongestSubstring(string s) {
	int *a = new int[s.length()];
	int tag = -1;
		a[0] = 1;
        for(int i = 1; i < s.length(); i++)
		{
			for(int j = i-1; j >= i-1-a[i-1]; j--)
			{
				if(s[j]==s[i])
				{
					tag = j;
					break;
				}
			}
			if(tag == -1)
				a[i] = a[i-1]+1;
			else
			{
				a[i] = (i-tag);
			}
			tag = -1;
		}
		int result = 0;
		for(int i = 0; i < s.length(); i++)
		{
			if(a[i]>result)
				result = a[i];
		}
		return result;
		delete[] a;
    }
};

//动态规划 a[i]记录以s[i]为结尾的最长不重复子串 ， 每次向前找到a[i-1]长度即可。