class Solution {
public:
    int tribonacci(int n) {
        /*if(n==0) return 0;
        if(n==1 || n==2) return 1;
        return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);*/
         if(n==0) return 0;
        int n1=0,n2=1,n3=1,temp;
        for(int i=0;i<n-2;i++){
            temp=n1+n2+n3;
            n1=n2;
            n2=n3;
            n3=temp;
        }
        return n3;
       
    }
};