class Solution {
    int rob(vector<int>& nums,int n) {
        if(n==0) return 0;
        if(n==1) return nums[0];
        
        //nums[n-1] means last and inside recursive is index+1
        return max(  rob(nums,n-1) , rob(nums,n-2)+nums[n-1]);     
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        //return rob(nums,n);    Recursive TLE becasue it create overlappin subproblem so solvesuing dp
        if(n==0) return 0;
        if(n==1) return nums[0];
        int v1=nums[0],v2=max(v1,nums[1]);     //v2 is current
        for(int i=2;i<n;i++){
            int temp=v2;
            v2=max(v2,v1+nums[i]);
            v1=temp;
        }
        return v2;
    }
};


