class Solution {
public:
//     void backTrack(vector<int>& nums, vector<vector<int>>& res, vector<int>& temp, int start, int target) {
//         if (target == 0) {
//             res.push_back(temp);
//             return;
//         }
//         if (target < 0) {
//             return;
//         }
        
//         for (int i = start; i < nums.size(); i++) {
//             temp.push_back(nums[i]);
//             backTrack(nums, res, temp, i, target - nums[i]); // allow reuse of current element
//             temp.pop_back();
//         }
//     }
    
    
//     int combinationSum4(vector<int>& nums, int target) {
//         vector<vector<int>> res;
//         vector<int> temp;
//         backTrack(nums, res, temp, 0, target);
        
//         int ansSize = res.size();
        
//         if(ansSize==0) return 0;
//         else return ansSize*2-1;  //becasue all possible
//     }
     int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target + 1);
            dp[0] = 1;
            for (int i = 1; i <= target; i++) {
                for (int j = 0; j < nums.size(); j++) {
                    if (i >= nums[j]) {
                        dp[i] += dp[i - nums[j]];
                    }
                }
            }
            return dp[target];
     }
};


