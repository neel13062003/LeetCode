/*class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int store,p=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=0;j<numsDivide.size();j++){
                if(numsDivide[j]%nums[i] == 0){
                    c++;
                    store=nums[i];
                }
            }
            if(c == nums.size()){
                p=1;
                break;
            } 
        }
        int ans = -1; int temp=-1;
        for(int i=0;i<nums.size();i++){
            if(store==nums[i]){
               temp = i+1;
                break;
            }
        }
        if(temp != -1){
            ans= nums.size()-temp;
        }
        if(p==1){
            return ans;
        }else{
            return -1;   
        }
    }
};*/
class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int gcd=numsDivide[0];
        for(int i=1;i<numsDivide.size();i++){
            gcd= __gcd(gcd,numsDivide[i]);
        }
        cout<<gcd;
        sort(nums.begin(),nums.end());
        int c=0;
        for(int i=0;i<nums.size();i++){
              if(gcd%nums[i]==0)  break;
              else   c++;
        }
        if(c==nums.size())    return -1;
        else      return c;
    }
};