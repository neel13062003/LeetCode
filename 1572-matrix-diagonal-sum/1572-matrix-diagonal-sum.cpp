class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;

        //Compute sum of principal diagonal elements
        for(int i=0, j=0; i<n && j<n; i++, j++){
            sum = sum + mat[i][j];
        }

        //Compute sum of secondary diagonal elements
        for(int i=0, j=n-1; i<n && j>=0; i++, j--){
            sum = sum + mat[i][j];
        }

        //If n is odd then only diagonals will intersect and we need to subtract the center
        //element from total sum
        if(n%2 == 1){
            sum = sum - mat[floor(n/2)][floor(n/2)];
        }
        return sum;
    }
};


