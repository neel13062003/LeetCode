class Solution {
public:
    
    bool isVowel(char s){
        if(s=='a'|| s=='e'  || s=='o' || s=='i' || s=='u') return true;
        else return false;
    }
    
    int maxVowels(string s, int k) {
        int count=0;
        int maxi = 0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                count++;
            }
        }
        maxi = max(maxi,count);
        int left=0;
        for(int i=k;i<s.size();i++){
            if(isVowel(s[left])){
                count -= 1;
            }
            if(isVowel(s[i])){
                count += 1;
            }
            maxi = max(maxi,count);
            left++;
        }
        return maxi;
    }
};