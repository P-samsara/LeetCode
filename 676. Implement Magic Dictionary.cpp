class MagicDictionary {
private:
	vector<string> dic;
public:
    /** Initialize your data structure here. */
    MagicDictionary() {
        dic.clear();
    }
    
    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict) {
        dic = dict;
    }
    
    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(string word) {
        for(int i = 0; i < dic.size(); i++)
        {
    		int result = 0;
        	if(dic[i].length() == word.length())
        	{   
        		for(int j = 0; j < word.length(); j++)
        		{
        			if(dic[i][j] != word[j])
        			{
        				result ++;
        			}
        		}
        		if(result == 1)
				{
					return true;
				}
        	}

        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary obj = new MagicDictionary();
 * obj.buildDict(dict);
 * bool param_2 = obj.search(word);
 */

// vector.clear()
// vector a;	vector b = a; 可以直接赋值，=已被重定义