class Solution {
public:
    int search(vector<int>& nums, int target) {
        //linear search Approach
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans=i;
            }
        }
        return ans;
    }
};