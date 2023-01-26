class Solution {
public:
    bool checkOnesSegment(string s) {
        int p=0;
        int x=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1' && p==0){
                continue;
            }else if(s[i]=='0'){
                p=1;
            }else if(s[i]=='1' && p==1){
                x=1;
                break;
            }
        }
        if(x==1){
            return false;
        }else{
            return true;
        }
    }
};