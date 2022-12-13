class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int rows= matrix.size();
        int cols= matrix[0].size();
        if(rows==0) return 0;
        
        //Return Largest Area Of Square Containing All 1's
        //Initialise 2D Vector Size & With Value 0
        vector<vector<int>> dp(rows+1,vector<int>(cols+1,0));
        int largest=0;
        //Process All Element Of Matrix
        
        
        //Logic Return Below Code
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=cols;j++){
                if(matrix[i-1][j-1]=='1'){
                   dp[i][j]= 1+ min( dp[i-1][j],  min( dp[i][j-1] , dp[i-1][j-1] )); 
                }
                if(largest<dp[i][j]) largest=dp[i][j];
            }
        }
        return largest*largest;
        
    }
};




// Create a vector of size n with
    // all values as 10.
 /*
 1D 
 vector<int> vect(n, 10);
 2D
 vector<vector<int>> dp(rows+1,vector<int>(cols+1,0));
 
 
 
 */



/*
If 0 then not put zero 

If 1 then put 1+ min(  i-1,j-1 ;  i-1,j  ; i,j-1);
*/