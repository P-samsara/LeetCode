class Solution {
    public int calculate(String s) {
        int sigh = 1;
        int number = 0;
        int result = 0;
        Stack<Integer> sta = new Stack<Integer>();
        for(int i = 0; i < s.length(); i++){
            char c = s.charAt(i);
            if(Character.isDigit(c)){
                number = number * 10 + (int)(c-'0');
            }else if(c == '+'){
                result = result+sigh*number;
                number = 0;
                sigh = 1;
            }else if(c == '-'){
                result = result+sigh*number;
                number = 0;
                sigh = -1;
            }else if(c == '('){
                sta.push(result);
                sta.push(sigh);
                result = 0;
                number = 0;
                sigh = 1;
            }else if(c == ')'){
                result = result+sigh*number;
                sigh = sta.pop();
                int pri_result = sta.pop();
                result = pri_result + sigh*result;
                number = 0; 
                sigh = 1;
            }            
        }
        if(number != 0 ){
            result = result+sigh*number;
        }
        return result;
    }
}

Only 5 possible input we need to pay attention:

digit: it should be one digit from the current number
'+': number is over, we can add the previous number and start a new number
'-': same as above
'(': push the previous result and the sign into the stack, set result to 0, just calculate the new result within the parenthesis.
')': pop out the top two numbers from stack, first one is the sign before this pair of parenthesis, second is the temporary result before this pair of parenthesis. We add them together.
Finally if there is only one number, from the above solution, we haven't add the number to the result, so we do a check see if the number is zero.