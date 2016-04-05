class Solution {
public:
    vector<string> letterCombinations(string digits) {
        char a[8][4] = {	
					{'a','b','c'},
					{'d','e','f'},
					{'g','h','i'},
					{'j','k','l'},
					{'m','n','o'},
					{'p','q','r','s'},
					{'t','u','v'},
					{'w','x','y','z'}
					};
		
		int changdu[8] = {3,3,3,3,3,4,3,4};
		vector<string> result;
		if (digits.length()==0)
		    return result;
		result.push_back("");
		for(int i = 0; i < digits.length(); i++)
		{
			int tmp_int = digits[i]-'0';
			int len = result.size();
			for(int j = 0; j < len; j++)
			{
				string tmp_string = result[j];
				for(int k = 0; k < changdu[tmp_int-2]; k++)
					result.push_back(result[j]+a[tmp_int-2][k]);
				//vector<string>::iterator iter;
				
				
			}
			result.erase(result.begin(),result.begin()+len);
		}
		return result;
    }
};