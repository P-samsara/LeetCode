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

//��̬�滮 a[i]��¼��s[i]Ϊ��β������ظ��Ӵ� �� ÿ����ǰ�ҵ�a[i-1]���ȼ��ɡ�