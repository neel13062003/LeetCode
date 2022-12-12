/*class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<s1.size();i++) mp1[s1[i]]++;
        for(int i=0;i<s2.size();i++) mp2[s2[i]]++;
        if(mp1==mp2) return true;
        else return false;
    }
};*/

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()!=s2.size()) return false;
        if(s1==s2) return true;

        vector<int> help;
        for(int i=0;i<s1.size();i++){
          if(s1[i]!=s2[i]){
            help.push_back(i);

          }
          if(help.size()>2) return false;

        }
        return help.size()==2 && s1[help[0]]==s2[help[1]] && s2[help[0]]==s1[help[1]];
    }
};