class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i = 0; i < 9; i++)
        {
            unordered_map<char, bool> m1;
            unordered_map<char, bool> m2;
            unordered_map<char, bool> m3;
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j] != '.')
                {
                    if(m1[board[i][j]] == true)
                        {cout << "h";
                        return false;}
                    m1[board[i][j]] = 1;
                }
            }
            for(int j = 0; j < 9; j++)
            {
                if(board[j][i] != '.')
                {
                    if(m2[board[j][i]] == true)
                        {cout << "h1";
                        return false;}
                    m2[board[j][i]] = 1;
                }
            }
            for(int j = 0; j < 9; j++)
            {
                if(board[i/3*3+j/3][i%3*3+j%3] != '.')
                {
                    if(m3[board[i/3*3+j/3][i%3*3+j%3]] == true)
                        {cout << "h2";
                        return false;}
                    m3[board[i/3*3+j/3][i%3*3+j%3]] = true;
                }
            }
    }
    return true;
    }
};