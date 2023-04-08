class Solution {
public:
    void solve(vector<vector<int>> &ans,vector<int> &output,int k,int n,int j)
    {
        if(output.size()==k)
        {
            if(n<0 || n>0)
                return;
            ans.push_back(output);
            return;
        }
        for(int i=j+1;i<=9;i++)
        {
            output.push_back(i);
            solve(ans,output,k,n-i,i);
            output.pop_back();
        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(ans,output,k,n,0);
        return ans;
    }
};