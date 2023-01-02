class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int count1=0,count2=0,count3=1;
        for(int i=0;i<word.size();i++){
            if(word[i] >= 'a' && word[i]<='z'){
                count1++;
            }
            if(word[i]>='A' && word[i]<='Z'){
                count2++;
            }
            if(word[0]>='A' && word[0]<='Z'){
                if(word[i]>='a' && word[i]<='z'){
                    count3++;
                }
            }
        }
        if(count1==n || count2==n || count3==n){
            return true;
        }else{
            return false;
        }
    }
};