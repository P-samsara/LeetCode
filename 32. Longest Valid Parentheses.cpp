class Solution {
public:
    int longestValidParentheses(string s) {
        int len = s.length();
        int a[len];
        if(len == 1)
            return 0;
        if(len == 2)
        {
            return s == "()"?2:0;
        }
        a[0] = 0;
        if(s.substr(0,2)== "()")
            a[1] = 2;
        else 
            a[1] = 0;
        //cout << "here";
        for(int i = 2; i < len; i++)
        {
            if(s[i] == '(')
                a[i] = 0;
            else if(s[i] == ')')
            {
                if(s[i-1] == ')')
                {   
                    //cout << i-1-a[i-1]-1 << endl;
                    if(s[i-1-a[i-1]] == '(')
                    {
                        if(i-1-a[i-1] == -1)
                            a[i] = 0;
                            else
                            a[i] = a[i-1] + 2 +a[i-2-a[i-1]];
                    }
                    else 
                        a[i] = 0;
                }
                else
                //(s[i-1] == '(')
                {
                        a[i] = 2 + a[i-2];
                }
            }
            //cout << i+2 << " " <<  a[i] << endl;
        }
        int result = 0;
        for(int i = 0; i < len; i++)
        {
            //cout << a[i] << endl;
            result = a[i] < result ? result : a[i];
        }
        return result;
    }
};