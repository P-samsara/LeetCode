class Solution {
public:
    vector<string> generateParenthesis(int n) {
        queue<string> Q;
        Q.push("(");
        while(Q.front().length()!=n*2)
        {
            string tmp = Q.front();
            Q.pop();
            int zuo = 0; int you = 0;
            for(int i = 0; i<tmp.length(); i++)
            {
                if(tmp[i]=='(')
                    zuo ++;
                else 
                    you ++; 
            }
            if(zuo == 0)
            {
                Q.push(tmp+'(');
            }
            else if(zuo < n)
            {
                if(zuo == you)
                    Q.push(tmp+'(');
                else{
                Q.push(tmp+'(');
                Q.push(tmp+')');}
            }
            else if(zuo == n)
            {
                Q.push(tmp+')');
            }
        }
        vector<string> result;
        while(!Q.empty())
        {
            result.push_back(Q.front());
            Q.pop();
        }
        return result;
    }
};