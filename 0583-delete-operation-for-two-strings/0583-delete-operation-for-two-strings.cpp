class Solution {
public:
    
    //Time complexity = O(m*n)  where m=word1.length() & n=word2.length();
    //But using longest common subsequence
    
    
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
                    dp[i][j]= 1+dp[i-1][j-1];                       //number is same then add with previos element
                }
                else{
                    dp[i][j]= max(dp[i-1][j], dp[i][j-1]);          //character is different so max from lefter/righter adjecents side
                }
            }
        }
        int x=dp[m][n];            //returning last from dp.
        return m+n-(2*x);
        
        /*int length=lcs(word1,word2);           //lcs=longest common subsquence
        return word1.length()+word2.length()-2*length;*/
        
        /* Logic is simple first find longest_common_substring then from length of both string 2*dp[m][n] subsract it.*/
    }
};