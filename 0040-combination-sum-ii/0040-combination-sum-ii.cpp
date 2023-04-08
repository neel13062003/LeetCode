//Constaint Equal Sum of Combinations not take repetedly
class Solution {
public:
    void backtrack(vector<int>& candidates, vector<vector<int>>& ans, vector<int>& combination, int target, int start) {
        if (target == 0) {
            ans.push_back(combination);
            return;
        }
        
        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i-1]) {
                continue; // skip duplicates
            }
            
            if (candidates[i] > target) {
                break; // no need to continue searching
            }
            
            combination.push_back(candidates[i]);
            backtrack(candidates, ans, combination, target - candidates[i], i + 1);
            combination.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); // sort the input array
        
        vector<vector<int>> ans;
        vector<int> combination;
        
        backtrack(candidates, ans, combination, target, 0);
        
        return ans;
    }
};


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
        vector<int>temp;
        vector<vector<int>>res;
        backTrack(nums,res,temp,0);
        return res;
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans = getCombination(candidates);
        
        
        vector<vector<int>>ans1;
        for(int i=0;i<ans.size();i++){
            int sum=0;
            for(int j=0;j<ans[i].size();j++){
                sum +=ans[i][j];
            }
            if(sum==target){
                ans1.push_back(ans[i]);
            }
        }
        
        
        set<vector<int>> s(ans1.begin(), ans1.end());
        vector<vector<int>> finalAns(s.begin(), s.end());
        
        return finalAns;
        
    }
};
*/










