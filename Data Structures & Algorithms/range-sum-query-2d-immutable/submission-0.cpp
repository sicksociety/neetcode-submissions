class NumMatrix {
   vector<vector<int>> prefixSum; 
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        prefixSum=vector<vector<int>> (row+1,vector<int>(col+1,0));
        for(int r=0;r<row;r++){
            int prefix=0;
            for (int c=0;c<col;c++){
                prefix+=matrix[r][c];
                prefixSum[r+1][c+1]=prefix+prefixSum[r][c+1];
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++;col1++;row2++;col2++;
        int above=prefixSum[row1-1][col2];
        int left=prefixSum[row2][col1-1];
        int topleft=prefixSum[row1-1][col1-1];
        int sum=prefixSum[row2][col2];
        return sum+topleft-above-left;

        
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */