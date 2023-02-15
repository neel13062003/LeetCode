class Solution {
public:
    vector<int> addToArrayForm(vector<int>& arr, int k) {
        
        long long int num=0;
        int i=arr.size()-1;
        long long int carry=0;
        vector<int> ans;
        while(i>=0 && k!=0){
            
            int num1=arr[i];
            int num2=k%10;
            long long int num=num1+num2+carry;
            carry=num/10;
            int temp=num%10;
            ans.push_back(temp);
            k=k/10;
            i--;
        }
        while(i>=0){
            int num1=arr[i];
            long long int num=num1+carry;
            carry=num/10;
            int temp=num%10;
            ans.push_back(temp);
            i--;
        }
        while(k!=0){
            int num1=k%10;
            long long int num=num1+carry;
            carry=num/10;
            int temp=num%10;
            ans.push_back(temp);
            k=k/10;
        }
        if(carry!=0){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};