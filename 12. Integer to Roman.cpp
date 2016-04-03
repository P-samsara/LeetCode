class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        if (num < 1 || num > 3999)
        {
            return result;
        }
        string M[] = {"", "M", "MM", "MMM"};    //千位，从1000到3000
        string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};  //百位，从100到900
        string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};  //十位，从10到90
        string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};  //个位，从1到9
        result = M[num / 1000] + C[(num % 1000) / 100] + X[(num % 100) / 10] + I[num % 10];
    }
};
