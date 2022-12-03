class Solution {
public:
    
    static bool cmp(pair<char,int>&A,pair<char,int>&B){
        return A.second>B.second;            //Means in descending order and accordign to second means frequency
    }
    
    string frequencySort(string str) {
       map<char,int> mp;
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;
        }
        vector<pair<char,int>> vec;
        
        for(auto it=mp.begin();it!=mp.end();it++){
            vec.push_back({it->first,it->second});
        }
        
        sort(vec.begin(),vec.end(),cmp);
        
        string str1="";
        for(int i=0;i<vec.size();i++){
            while(vec[i].second--) str1.push_back(vec[i].first);
        }
        return str1;
    }
};