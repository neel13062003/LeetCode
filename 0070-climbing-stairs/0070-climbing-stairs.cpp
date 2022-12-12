class Solution {
public:
    int climbStairs(int n) {
        n=n+2;
        int n1=0,n2=1,temp;
        for(int i=0;i<n-2;i++){
            temp=n1+n2;
            n1=n2;
            n2=temp;
        }
        return temp;
    }
};