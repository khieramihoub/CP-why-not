class NumMatrix {
public:
        vector<vector<int>> prefix2d;

    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size(); 
        prefix2d = vector<vector<int>>(rows + 1 , vector<int>(cols+1 , 0)) ; 
        for(int i = 1 ; i <= rows ; ++i){
            for(int j = 1 ;  j <= cols ; ++j){
                prefix2d[i][j] = matrix[i-1][j-1] + prefix2d[i-1][j] + prefix2d[i][j-1] - prefix2d[i-1][j-1] ; 
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prefix2d[row2+1][col2+1] - prefix2d[row1][col2+1] - prefix2d[row2+1][col1] + prefix2d[row1][col1] ; 
        
    }
};

