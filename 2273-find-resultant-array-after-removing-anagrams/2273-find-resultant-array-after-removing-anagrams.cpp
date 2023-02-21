class Solution {
public:
    bool isAnagram(string s,string t){
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;
        ans.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            if(isAnagram(words[i],words[i-1])){
               continue;
            }
            else{
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};