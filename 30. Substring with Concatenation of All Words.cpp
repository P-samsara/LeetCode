class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
		bool tag = 0;
        int each = words[0].length();
        int step = words.size() * each;
        int len = s.length();
        map<string,int> map_words;
        map<string,int>::iterator it;
        for(int i = 0; i < words.size(); i++)
        {
			it = map_words.find(words[i]);
            if(it != map_words.end())
				it -> second ++;
			else
				map_words.insert(pair<string,int>(words[i],1));
        }
		for(int i = 0; i <= len - step; i ++)
		{
			map<string,int> map_words1(map_words.begin(),map_words.end());
			string tmp = s.substr(i,step);
			//cout << "tmp    " << tmp << endl;
			for(int j = 0; j < step; j += each)
			{
			    string t = tmp.substr(j,each);
			    //cout << "t  " << t << endl;
				if(map_words1.find(t) != map_words1.end())
				{
					map_words1[t] --;
					if(map_words1[t]<0)
					{
					    tag = 1;
					    break;
					}
				}
				else
				{
				    tag = 1;
				    break;
				}
			}
			for(it = map_words1.begin(); it != map_words1.end(); it++)
			{
			    cout << it -> second << endl;
				if(it->second!=0)
				{
					tag = 1;
					break;
				}
			}
			if(tag == 0)
			{
				result.push_back(i);
			}
			tag = 0;
		}
		return result;  
    }
};
//原来用的是vector，对大量重复string耗时严重，采用map