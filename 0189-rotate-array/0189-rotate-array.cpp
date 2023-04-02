class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
       vector<int>ans(nums.size());
       for(int i=0;i<nums.size();i++){
           ans[(i+k)%n]=nums[i];
       } 
       for(int i=0;i<ans.size();i++){
           nums[i]=ans[i];
       } 
    }
};