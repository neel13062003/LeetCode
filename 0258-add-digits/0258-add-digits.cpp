class Solution {
public:
    
    int sum(int num){
        int sum=0;
        while(num>0){
            int temp= num%10;
            num = num/10;
            sum = sum + temp;
        }
        return sum;
    }
    
    int addDigits(int num) {
        int ans;
        while(num/10 > 0){
             ans =  sum(num);
             num=ans;
        }
        return num;
    }
};