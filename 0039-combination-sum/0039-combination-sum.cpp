/*class Solution {
public:
    
    void backTrack(vector<int>&nums,vector<vector<int>>&res,vector<int>&temp,int start){
        res.push_back(temp);
        
        for(int i=start;i<nums.size();i++){
            temp.push_back(nums[i]);
            backTrack(nums,res,temp,i+1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> getCombination(vector<int>&nums){
        vector<vector<int>>res;
        vector<int>temp;
        backTrack(nums,res,temp,0);
        return res;
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans = getCombination(candidates);
        
        vector<vector<int>>ans1;
        for(int i=0;i<ans.size();i++){
            int sum=0;
            for(int j=0;j<ans[i].size();j++){
                sum+=ans[i][j];
            }
            if(sum==target){
                ans1.push_back(ans[i]);
            }
        }
        
        return ans1;
    }
};*/

//We Can Take mulitple time same elements.

class Solution {
public:
    
    void backTrack(vector<int>& nums, vector<vector<int>>& res, vector<int>& temp, int start, int target) {
        if (target == 0) {
            res.push_back(temp);
            return;
        }
        if (target < 0) {
            return;
        }
        
        for (int i = start; i < nums.size(); i++) {
            temp.push_back(nums[i]);
            backTrack(nums, res, temp, i, target - nums[i]); // allow reuse of current element
            temp.pop_back();
        }
    }
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        backTrack(candidates, res, temp, 0, target);
        return res;
    }
};
