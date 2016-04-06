class Solution {
public:
    bool isValid(string s) {
		stack<char> a;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == '(')
				a.push('(');
			else if (s[i] == '[')
				a.push('[');
			else if (s[i] == '{')
				a.push('{');
			else if (s[i] == ')')
			{
				if(a.size()==0)
					return 0;
				if(a.top()=='(')
					a.pop();
				else
					return 0;
			}
			else if (s[i] == ']')
			{
				if(a.size()==0)
					return 0;
				if(a.top()=='[')
					a.pop();
				else
					return 0;
			}
			else if (s[i] == '}')
			{
				if(a.size()==0)
					return 0;
				if(a.top()=='{')
					a.pop();
				else
					return 0;
			}
				
		}
		if(a.empty())
			return 1;
		else 
			return 0;
    }
};