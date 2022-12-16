class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>>matrix2(col,vector<int>(row,0));
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                matrix2[i][j]=matrix[j][i];
            }
        }
        return matrix2;
    }
};