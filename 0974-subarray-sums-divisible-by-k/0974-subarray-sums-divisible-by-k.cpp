class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        /*int count=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum=sum+nums[j];
                if(sum%k==0){
                    count++;
                }
            }
            
        }
        return count;*/
        int n = nums.size();
        vector<int> sums(k, 0);
        sums[0]++;
        int cnt = 0;
        int currSum = 0;
        for(int i = 0; i<n; i++) {
            currSum = (currSum + nums[i]%k + k)%k;
            cnt += sums[currSum];
            sums[currSum]++;
        }
        return cnt;
    }
};