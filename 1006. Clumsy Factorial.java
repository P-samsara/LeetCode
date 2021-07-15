class Solution {
    public int clumsy(int n) {
        char fh = '*';
        Stack<Character> stack = new Stack<Character>();
        stack.push('+');
        int result = 0;
        int tmp = n;
        while(n > 1){
            n--;
            if(fh == '*'){
                tmp*=n;
                fh = '/';
            }else if(fh == '/'){
                tmp/=n;
                fh = '+';
            }else if(fh == '+'){
                if(stack.peek() == '+'){
                    result += tmp;
                }else if(stack.peek() == '-'){
                    result -= tmp;
                }
                stack.pop();
                stack.push('+');
                fh = '-';
                tmp = n;
            }else if(fh == '-'){
                if(stack.peek() == '+'){
                    result += tmp;
                }else if(stack.peek() == '-'){
                    result -= tmp;
                }
                stack.pop();
                stack.push('-');
                fh = '*';
                tmp = n;
            }
                       // n--;
        }
        if(!stack.empty()){
            if(stack.peek() == '+'){
                    result += tmp;
            }else if(stack.peek() == '-'){
                result -= tmp;
            }
        }
        return result;
    }
}