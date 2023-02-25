class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi=0;
        int p=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]-nums[i]>maxi){
                    maxi=nums[j]-nums[i];
                    p=1;
                }
            }
        }
        if(p==1){
            return maxi;
        }else{
            return -1;
        }
        
    }
};