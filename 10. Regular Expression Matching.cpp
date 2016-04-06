class Solution {
public:
    bool isMatch(string s, string p) {
		if(p[0]=='\0')
			return s[0]=='\0';
        if(p[1]!='*')
		{
			assert(p[0]!='*');
			return((p[0]==s[0])||(p[0]=='.'&&s[0]!='\0'))&&isMatch(s.substr(1,s.length()-1),p.substr(1,p.length()-1));
		}
		while((p[0]==s[0])||(p[0]=='.'&&s[0]!='\0'))
		{
			if(isMatch(s,p.substr(2,p.length()-2)))
				return true;
			s = s.substr(1,s.length()-1);
		}
		return isMatch(s,p.substr(2,p.length()-2));
    }
};