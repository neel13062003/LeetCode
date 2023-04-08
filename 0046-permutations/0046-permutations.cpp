class Solution {
public:
    
    void display(vector<int>&nums,int n,vector<vector<int>>&ans){
        vector<int>temp;
        for(int i=0;i<n;i++){
            temp.push_back(nums[i]);
        }
        ans.push_back(temp);
    }
    
    void findPermutations(vector<int>&nums,int n,vector<vector<int>>&ans){
        sort(nums.begin(),nums.end());
        do{
            display(nums,n,ans);
        }while (next_permutation(nums.begin(),nums.end()));
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        findPermutations(nums,n,ans);
        return ans;
    }
};