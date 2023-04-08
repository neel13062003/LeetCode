class Solution {
public:
    void solve(vector<vector<int>> &op, vector<int> &ip, vector<int> &temp){
        if(ip.size()==0){
            op.push_back(temp);
            return;
        }
        vector<int> op1=temp;
        vector<int> op2=temp;
        op2.push_back(ip[0]);
        ip.erase(ip.begin());
        solve(op,ip,op1);
        solve(op,ip,op2);
        ip.insert(ip.begin(), op2.back());
        op2.pop_back();
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Sort the input array to handle duplicates
        
        vector<vector<int>> op;
        vector<int> temp;
        solve(op,nums,temp);
        
        set<vector<int>> s(op.begin(),op.end());
        vector<vector<int>> ans(s.begin(),s.end());   
        return ans;
    }
};
