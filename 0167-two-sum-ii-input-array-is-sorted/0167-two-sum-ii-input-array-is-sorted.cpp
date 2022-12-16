class Solution {
public:
    //2 Pointer Apprach
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        while(numbers[l]+numbers[r]!=target){
            if(numbers[l]+numbers[r]<target) l++;
            else r--;
         }
        vector<int>ans;
        ans.push_back(l+1);
        ans.push_back(r+1);
        return ans;
    }
};