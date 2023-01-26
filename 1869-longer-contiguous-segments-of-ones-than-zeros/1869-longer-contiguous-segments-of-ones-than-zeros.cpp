class Solution {
public:
    bool checkZeroOnes(string s) {
        int count1=0;
        int count0=0;
        int ans1=0,ans2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count1++;
            }else{
                count1=0;
            }
            ans1= max(ans1,count1);
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                count0++;
            }else{
                count0=0;
            }
            ans2= max(ans2,count0);
        }
        if(ans1>ans2){
            return true;
        }else{
            return false;
        }
    }
};