class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        /*vector<string>vec;
        set_intersection(words1.begin(),words1.end(),words2.begin(),words2.end(),back_inserter(vec));
        map<string,int>mp;
        
        for(int i=0;i<vec.size();i++)
            mp[vec[i]]++;
        
        int count=0;
        for(auto it:mp)
            if(it.second==1) count++;
        
        return count;*/
        
        map<string,int>m1;
        map<string,int>m2;
        
        for(int i=0;i<words1.size();i++) m1[words1[i]]++;
        for(int i=0;i<words2.size();i++) m2[words2[i]]++;
        
        vector<string>vec1;
        vector<string>vec2;
        
        for(auto it:m1)
            if(it.second==1) vec1.push_back(it.first);
        for(auto it:m2)
            if(it.second==1) vec2.push_back(it.first);
            
        vector<string>vec3;
        set_intersection(vec1.begin(),vec1.end(),vec2.begin(),vec2.end(),back_inserter(vec3));
        int ans = vec3.size();
        return ans;         
            
    }
};