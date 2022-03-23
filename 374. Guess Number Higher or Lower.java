/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

public class Solution extends GuessGame {
    public int guessNumber(int n) {
    	return guessNumberInterval(1,n);
    }
    private int guessNumberInterval(int begin, int end){
    	//int middle = (begin + end)/2;
    	int middle = begin+(end-begin)/2;
    	if(guess(middle)==0)
    		return middle;
    	else if(guess(middle)==-1)
    		return guessNumberInterval(begin,middle);
    	else
    		return guessNumberInterval(middle+1,end);
    }
}

public class Solution extends GuessGame {
    public int guessNumber(int n) {
    	int begin = 1, end = n;
    	while(begin <= end){
    		int middle = begin+(end-begin)/2;
    		if (guess(middle) == 0)
    			return middle;
    		else if(guess(middle)==-1)
    			end = middle;
    		else
    			begin = middle+1;
            System.out.println(middle);
    	}
    	return 0;
    }
}

//注意：用 int middle = (begin + end)/2; 会超出int表示范围