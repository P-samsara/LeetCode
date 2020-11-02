class Solution {
    public int numRookCaptures(char[][] board) {
    	int row,column;
    	int result = 0;
        for(int i = 0; i < board.length; i++){
        	for(int j = 0; j < board[i].length; j++){
        		if(board[i][j] == 'R'){
        			row = i;
        			column = j;
                    System.out.println(i+" "+j);
                    //up
        			while(i>0 && board[i-1][j]=='.'){
        				i--;
        			}
        			if(i!=0 && board[i-1][j] == 'p') result ++;
                    //down
        			i = row;
        			j = column;
        			while(i<board.length-1 && board[i+1][j]=='.'){
        				i++;
        			}
        			if(i!=board.length-1 && board[i+1][j] == 'p') result ++;
                    //right
        			i = row;
        			j = column;
        			while(j<board[0].length-1 && board[i][j+1]=='.'){
        				j++;
        			}
        			if(j!=board[0].length-1 && board[i][j+1] == 'p') result ++;
                    //left
        			i = row;
        			j = column;
        			while(j>0 && board[i][j-1]=='.'){
        				j--;
        			}
        			if(j!=0 && board[i][j-1] == 'p') result ++;
        			break;
        		}
        	}
        }
        return result;
    }
}