class Solution {
public:

    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ans.push_back(0);
            }else{
                vector<int>vec;
                while(nums[i]>0){
                    int temp= nums[i]%10;
                    vec.push_back(temp);
                    nums[i] = nums[i]/10;
                }
                reverse(vec.begin(),vec.end());
                for(int i=0;i<vec.size();i++){
                    ans.push_back(vec[i]);
                }
                vec.clear();
            }
        }
        return ans;
    }
};