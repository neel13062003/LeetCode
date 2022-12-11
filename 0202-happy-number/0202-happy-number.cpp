class Solution {
public:
    
   /* int digitsum(int n){
        int sum=0;
        while(n>0){
            int temp=n%10;
            sum=sum + temp*temp;
            n=n/10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int p=0;
        while(n>0){
            if(n==1) p=1; break;
            n=digitsum(n);
        }
        if(p==1) return true;
        else return false;
    }*/
    
    bool isHappy(int n){
        if(n == 1 || n == 7) return true;
        else if(n < 10) return false;
        int m = 0;
        while(n != 0){
            int tail = n % 10;
            m += tail * tail;
            n = n/10;
        }
        return isHappy(m);
    }
};