class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        
        set<pair<int,int>>p;    
        for(int i=0;i<nums.size();i++){
           for(int j=0;j<nums.size();j++){
              if(  nums[i]+nums[j] == target    && i!=j){
        
                   p.insert({i,j});
                     
              }    
            }
        }
        return p.size();
    }
};