class Solution {
public:
    
    static bool cmp(pair<int,int>&A,pair<int,int>&B){
        return A.second>B.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
         map<int,int>mp;
         for(int i=0;i<nums.size();i++){
             mp[nums[i]]++;
         }
         vector<int>ans;
         int count=0;
         vector<pair<int,int>>vec;
         for(auto it=mp.begin();it!=mp.end();it++){
             vec.push_back({it->first,it->second});
         }
         sort(vec.begin(),vec.end(),cmp);
        
         for(int i=0;i<k;i++){
             ans.push_back(vec[i].first);
         }
         
        return ans;
    }
};