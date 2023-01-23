class Solution {
public:
    
    bool countEvenSum(int n){
        int sum=0;
        while(n>0){
            int temp= n%10;
            sum = sum+temp;
            n= n/10;
        }
        if(sum%2==0){
            return true;
        }else{
            return false;
        }
    }
    
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            if(countEvenSum(i) == true){
                count++;
            }
        }    
        return count;
    }
};