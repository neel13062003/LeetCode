class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {  
        // O(n)=Time Complexity
        int maxi=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }else{
                count=0;
            }
            maxi= max(count,maxi);
        }
        return maxi;
    }
};