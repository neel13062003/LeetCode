class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int count0=0,count1=0,ans=0,count=0;
        
        int flag=0;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='0' && flag==2){
                flag=0;
                count0=0;
                count1=0;
                count=0;
            }
            
            if(count0>0 && s[i]=='1'   && (flag==1 || flag==2)){
                count1++;
                count0--;
                count++;
                flag=2;
                
            }else if(s[i]=='0'){
                count0++;
                count=0;
                flag=1;
            }
             
            ans= max(ans,count*2);   
        }
        return ans;
    }
};