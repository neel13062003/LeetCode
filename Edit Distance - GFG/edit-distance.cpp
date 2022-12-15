//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int recur(string s,int n1, string t , int n2, vector<vector<int>> &dp){
        if(n1<0){
            return n2+1;
        }
        if(n2<0){
            return n1+1;
        }
        if(dp[n1][n2]!=-1){
            return dp[n1][n2];
        }
        if(s[n1]==t[n2]){
            return dp[n1][n2] = recur(s,n1-1,t,n2-1,dp);
        }
        return dp[n1][n2] = 1+min(min(recur(s,n1-1,t,n2,dp),recur(s,n1,t,n2-1,dp)),recur(s,n1-1,t,n2-1,dp));
    }
    
    int editDistance(string str1, string str2) 
    {
        int n1 = str1.size();
        int n2 = str2.size();
        vector<vector<int>> dp(n1,vector<int>(n2,-1));
        return recur(str1,n1-1,str2,n2-1,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends