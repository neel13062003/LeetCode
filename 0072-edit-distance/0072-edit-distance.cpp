class Solution {
public:
    
    int rec(string s,int n1,string t,int n2,vector<vector<int>>&dp){
        if(n1<0) return n2+1;
        if(n2<0) return n1+1;
        if(dp[n1][n2]!=-1) return dp[n1][n2];
        if(s[n1]==t[n2]) return dp[n1][n2]=rec(s,n1-1,t,n2-1,dp);
        return dp[n1][n2]= 1 + min( min( rec(s,n1,t,n2-1,dp),rec(s,n1-1,t,n2,dp) ),rec(s,n1-1,t,n2-1,dp)  );
    }
    
    int minDistance(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        vector<vector<int>>dp(n1,vector<int>(n2,-1));
        return rec(word1,n1-1,word2,n2-1,dp);
        
    }
};