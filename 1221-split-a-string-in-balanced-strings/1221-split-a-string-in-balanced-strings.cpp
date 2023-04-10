class Solution {
public:
    int balancedStringSplit(string s) {
        int count1=0;
        int count2=0;
        int ans=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                if(count2==0){
                    count1++;
                }else{
                    count2--;
                    if(count2==0) ans++;
                } 
            }
            else if(s[i]=='L'){
                if(count1==0){
                    count2++;
                }else{
                    count1--;
                    if(count1==0) ans++;
                }
            }
        }
        return ans;
    }
};