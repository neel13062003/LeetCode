class Solution {
public:
    int maxPower(string s) {
        if(s.size()==1){
            return 1;
        }else{
             int count=1;
        int maxi=0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                count++;
            }else{
                count=1;
            }
            maxi=max(count,maxi);
        }
        return maxi;
        }
       
    }
};