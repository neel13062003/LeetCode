class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        long long ans1 = 0;
        long long ans2 = 0;
        sort(nums.begin(),nums.end());
        while(j>i)
        {
            if(nums[i]+nums[j]<=upper)
            {
                ans1+=(j-i);
                i++;
            }
            else if(nums[i]+nums[j]>upper)
            {
                j--;
            }
        }
        i = 0;
        j = n-1;
        while(j>=i)
        {
            if(nums[i]+nums[j]<lower)
            {
                ans2+=(j-i);
                i++;
            }
            else if(nums[i]+nums[j]>=lower)
            {
                j--;
            }
        }
        return ans1-ans2;
    }
};