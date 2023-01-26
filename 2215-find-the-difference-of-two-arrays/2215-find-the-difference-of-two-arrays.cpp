class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       vector<int> v1;
        vector<int> v2;
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        for (int i=0; i<nums1.size(); i++)
        {
            mp1[nums1[i]]++;
        }
        for (int i=0; i<nums2.size(); i++)
        {
            mp2[nums2[i]]++;   
        }
        for (auto it:mp1)
        {
            if (!mp2[it.first]) v1.push_back(it.first);  
        }
        for (auto it:mp2)
        {
            if (!mp1[it.first]) v2.push_back(it.first);  
        }

        vector<vector<int>> ans;
        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }
};