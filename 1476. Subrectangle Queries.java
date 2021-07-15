class SubrectangleQueries {

    public SubrectangleQueries(int[][] rectangle) {
        _rec = new int[rectangle.length][];
        for(int i = 0; i < rectangle.length; i++)
        _rec[i] = Arrays.copyOf(rectangle[i],rectangle[i].length);
    }
    
    public void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for(int i = row1; i <= row2; i ++){
            for(int j = col1; j <= col2; j ++)
                _rec[i][j] = newValue;
        }
    }
    
    public int getValue(int row, int col) {
        return _rec[row][col];
    }
    
    private int[][] _rec;
}

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries obj = new SubrectangleQueries(rectangle);
 * obj.updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj.getValue(row,col);
 */