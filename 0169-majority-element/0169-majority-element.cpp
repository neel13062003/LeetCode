class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int,int>mp; int ans; int n=nums.size()/2; int maxi=INT_MIN;
       for(int i=0;i<nums.size();i++) mp[nums[i]]++;
       for(auto it=mp.begin();it!=mp.end();it++){ if(it->second >=n   &&  maxi< it->second) ans=it->first; maxi=it->second;} 
       return ans; 
    }
};