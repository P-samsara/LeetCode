class Solution {
public:
    int strStr(string haystack, string needle) {
        cout << haystack.length() << endl;
        cout << needle.length() << endl;
        cout << haystack.length()-needle.length() << endl;
        int l1 = haystack.length();
        int l2 = needle.length();
        if((l1-l2)  < 0)
            return -1;
        cout << haystack.length() << endl;
        cout << needle.length() << endl; 
        if(l1==l2)
            return haystack==needle?0:-1;
        for(int i = 0; i <= haystack.length()-needle.length(); i++)
        {
            //cout << haystack.substr(i,needle.length()) << endl;
            if(haystack.substr(i,needle.length()) == needle)
                return i;
        }
        return -1;
        
    }
};