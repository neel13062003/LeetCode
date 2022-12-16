class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Transopose Matrix
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //Swap Uppermost row with lower most row;  //GFG Rotate Image problem 90 Degree anti
        /*int n=matrix.size();
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n;j++){
                swap(matrix[i][j],matrix[n-i-1][j]);
            }
        }*/
        /*90 Degree Clock Wise - so swap column wise*/
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(matrix[i][j],matrix[i][n-j-1]);
            }
        }
    }
};