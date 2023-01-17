class Solution {
public:
    int findDuplicate(vector<int>& nums) {
          long long n=nums.size();
        vector<bool> v(n,false);
        for(auto num:nums){
            if(v[num]) return num;
            v[num]=true;
        }
        return -1;
    }
};