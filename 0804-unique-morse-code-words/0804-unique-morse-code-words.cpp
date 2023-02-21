class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
            /* string a=".-", b="-...", c="-.-.", d="-..", e=".", f="..-.", g="--.", h="....", i="..", j=".---",
            k="-.-", l=".-..", m="--", n="-.", o="---", p=".--.", q="--.-", r=".-.", s="...", t="-", u="..-", v="...-", w=".--", x="-..-", y="-.--", z="--..";
            string str ="";
            set<string>st;
            for(int i=0;i<words.size();i++){
                for(int j=0;j<words[i].size();j++){
                    str += words[i][j];
                }
                st.insert(str);
                str.clear();
            }
            int ans =  st.size();
        return ans;*/
        vector<string> morse_codes = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",
            ".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",
            ".--","-..-","-.--","--.."
        };
        set<string> transformations;
        for (const string& word : words) {
            string transformation = "";
            for (char c : word) {
                transformation += morse_codes[c - 'a'];
            }
            transformations.insert(transformation);
        }
        return transformations.size();
    }
};