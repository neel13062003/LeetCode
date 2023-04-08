class Solution {
public:
    
    void backTrack(vector<int>&nums,vector<vector<int>>&res,vector<int>&temp,int start,int k){
        //This only for constraint combination size = k.
        if(temp.size()==k){
            res.push_back(temp);
        }
        
        for(int i=start;i<nums.size();i++){
            temp.push_back(nums[i]);
            backTrack(nums,res,temp,i+1,k);
            temp.pop_back();
        }
    }
    
    
    vector<vector<int>> getCombination(vector<int>&nums,int k){
        vector<int>temp;
        vector<vector<int>>res;
        backTrack(nums,res,temp,0,k);
        return res;
    }
    
    
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        vector<vector<int>>ans = getCombination(nums,k);
        return ans;
    }
};