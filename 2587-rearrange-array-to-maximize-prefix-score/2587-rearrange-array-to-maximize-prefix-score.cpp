class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        long long sum=nums[0];
        vector<long long>vec;
        vec.push_back(sum);
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            vec.push_back(sum);
        }
        int count=0;
        for(int i=0;i<vec.size();i++){
            if(vec[i]>0) count++;
        }
        return count;
    }
};


//[-687767,-860350,950296,52109,510127,545329,-291223,-966728,852403,828596,456730,-483632,-529386,356766,147293,572374,243605,931468,641668,494446]


/* sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int maxSum=nums[0];
        int ans=maxSum;
        for(int i=1;i<nums.size();i++){
            maxSum=maxSum+nums[i];
            ans = max(ans,maxSum);
        }
        return ans;*/