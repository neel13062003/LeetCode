class Solution {
public:
    
    static bool cmp(pair<int,int>&A,pair<int,int>&B){
        return A.first<B.first;
    }
    
    vector<int> twoSum(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        vector<int>ans;
        vector<pair<int,int>>vec;
        for(int i=0;i<nums.size();i++){
            vec.push_back({nums[i],i});
        }
        sort(vec.begin(),vec.end(),cmp);
        
        while(left<=right){
            if( vec[left].first + vec[right].first == target ){
                 ans.push_back(vec[left].second);
                 ans.push_back(vec[right].second);
                 break;
            }else if( vec[left].first+vec[right].first > target){
                 right--;
            }else{
                 left++;
            }
        }
        return ans;
    }
};