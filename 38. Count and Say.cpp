class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        else 
        {
            string tmp = "";
            string tmp1 = countAndSay(n-1);
            cout << tmp1 << endl;
            int count = 0;
            //cout << tmp1.length() << "    leng" << endl;
            if(tmp1.length()==1)
            {string fuck = "1";
                return fuck.append(1,tmp1[0]) ;}
            for(int i = 0; i < tmp1.length(); i++)
            {
                if(i == 0)
                {
                    count = 1;
                }
                else if(tmp1[i]==tmp1[i-1])
                    count ++;
                else if(tmp1[i]!=tmp1[i-1])
                {
                    tmp.append (1,count+'0');
                    //cout << count+'0' << endl;
                    tmp.append (1,tmp1[i-1]);
                    count = 1;
                }
                if(i==tmp1.length()-1)
                    {
                        tmp.append(1,count+'0');
                        tmp.append(1,tmp1[i]);}
            }
            
            return tmp ; 
        }

            
    }
};