class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
       
        int n = shifts.size();
        for (int i = n-2; i >= 0; i--) {
            shifts[i] = (shifts[i]+shifts[i+1])%26;
        }
        for (int i = 0; i < s.size(); i++) {
            s[i] = (s[i]-'a'+shifts[i])%26 + 'a';
        }
        return s;
        
        /* for(int i=0;i<s.size();i++){
            for(int j=0;j<=i;j++){
                 s[j]=((s[j]-'a'+shifts[i])%26)+'a';          // first convert into number then again into string character. TLE solved.
            }
        }
        return s;*/
    }
};