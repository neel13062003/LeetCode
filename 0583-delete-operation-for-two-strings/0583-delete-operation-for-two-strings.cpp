class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.size(), n=word2.size();
        int dp[m+1][n+1];
        for(int i=0; i<=m; i++){
            for(int j=0; j<=n; j++){
                if(i==0 or j==0){
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(word1[i-1]==word2[j-1]){
                    dp[i][j]= 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        int x=dp[m][n];
        return m+n-(2*x);
    }
};