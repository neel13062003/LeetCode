class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            vector<pair<int,int>> to_add;
            for(auto & pr:mp){
                int key=pr.first;
                to_add.push_back({key+nums[i],pr.second});
                to_add.push_back({key-nums[i],pr.second});
            }
            mp.clear();
            for(auto & pr:to_add){
                mp[pr.first]+=pr.second;
            }
        }
        return mp[target];
    }
};