class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //vector<int> temp=vector(26,0);
        vector<int>temp(26,0);
        int len1 = s1.size(), len2 = s2.size();
        if(len1>len2) return false;
        vector<int> str1 = temp;
        vector<int> str2 = temp;
        for(auto& ch : s1) str1[ch-'a']++;
        int start=0,end=0;
        while(end<len2){
            str2[s2[end++]-'a']++;
            if(str1==str2) return true;
            if(end>=len1) str2[s2[start++]-'a']--;
        }
        return false;
    }

    
};