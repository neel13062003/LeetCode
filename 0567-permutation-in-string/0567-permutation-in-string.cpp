class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        //Take Vector and Intialise Value With 0
        vector<int>temp(26,0);
        
        //Find Size Of Both String
        int len1 = s1.size(), len2 = s2.size();
        
        //If Size of First String Greater than it impossible to find permutation in string s2        
        if(len1>len2) return false;
        
        vector<int> str1 = temp;
        vector<int> str2 = temp;
        
        //Store Frequency Of String s1 in vector=>str1
        for(auto& ch : s1) str1[ch-'a']++;
        
        //Use Sliding Winodw Concept 
        //& Size of Sliding Window Size is s1.size().
        int start=0,end=0;
        while(end<len2){
            str2[s2[end++]-'a']++;
            
            //if frequency and Character of sliding window in s2 string is equal with string s1
            if(str1==str2) return true;
            
            if(end>=len1) str2[s2[start++]-'a']--;
        }
        
        return false;
    }

    
};