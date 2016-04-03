class Solution {
public:
    int romanToInt(string s) {
        int i = 0;
        int result = 0;
        while(s[i]=='M')
        {
            i ++;
        }
        int qian = i;
        string bai = "";
        while(s[i]=='C'||s[i]=='D'||s[i]=='M')
        {
            bai = bai + s[i];   
            i ++;
        }
        string shi = "";
        while(s[i]=='X'||s[i]=='L'||s[i]=='C')
        {
            shi = shi + s[i];   
            i ++;
        }
        string ge = "";
        while(i!=s.length())
        {
            ge = ge + s[i];
            i ++;
        }
        string M[] = {"", "M", "MM", "MMM"};    //千位，从1000到3000
        string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};  //百位，从100到900
        string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};  //十位，从10到90
        string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};  //个位，从1到9
        for(int i = 0; i < 10; i++)
        {
            if(C[i]==bai)
            {
                 result = qian * 1000 + i * 100;
                 break;
            }
        }
        for(int i = 0; i < 10; i++)
        {
            if(X[i]==shi)
            {
                 result = result + i * 10;
                 break;
            }
        }
        for(int i = 0; i < 10; i++)
        {
            if(I[i]==ge)
            {
                 result = result + i ;
                 break;
            }
        }
        return result;
    } 
};