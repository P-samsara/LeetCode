class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() == 0)
			return "";
		int len = strs[0].length();
        for(int i = 0; i < strs.size()-1; i++)
		{
			for(int j = 0; j < len; j++ )
			{
				if(strs[i][j]!=strs[i+1][j])
				{
					len = j;
					break;
				}
			}
		}
		string result = strs[0].substr(0,len);
		return result;
    }
};