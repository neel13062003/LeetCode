/*class Solution {
public:
    
    bool allowedcheck(string allowed,string word){
        map<char,int>mp;
        for(int i=0;i<allowed.size();i++){
            mp[allowed[i]]++;
        }
        for(int i=0;i<word.size();i++){
            if(mp.find(word[i])) return false;
        }
        return true;
    }
    
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            if(allowedcheck(allowed,words[i]) == true) count++; 
        }
        return count;
    }
};
*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>map;
        int j=words.size();
        for(char c : allowed)
        {
            map[c]++;
        }
        for(int i=0;i<words.size();i++)
        {
            for(char c:words[i])
            {
                if(map.find(c)==map.end())
                {
                    j-- ;
                    break;
                }
            }
        }
        return j;
    }
};

