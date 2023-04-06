class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        int p=0;
        int s=0;
        for(int i=0;i<words.size();i++){
            if(words[i].size()==1){
                 ans=words[i];
                break;
            }
            int l=0;
            int r=words[i].size()-1;
            while(l<r){
                
                if(words[i][l] != words[i][r]){
                    s=1;
                    break;
                } 
                else{
                    s=2;
                    l++,r--;
                } 
                if(l==r){
                    p=1;
                    break;
                }
                
            }
            if(p==1 || s==2){
                ans=words[i];
                break;
            }
        }
        return ans;
    }
};