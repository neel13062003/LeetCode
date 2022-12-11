class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int rightsum = accumulate(nums.begin(),nums.end(),0);
        int leftsum=0;
        for(int i=0;i<nums.size();i++){
            leftsum=leftsum+nums[i];
            if(leftsum==rightsum){
                return i;
            }
            
            rightsum=rightsum-nums[i];
        }
        return -1;
    }
};