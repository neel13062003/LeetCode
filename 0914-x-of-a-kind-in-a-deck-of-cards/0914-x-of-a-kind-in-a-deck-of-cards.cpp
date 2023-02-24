class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> m;
        for( auto x : deck)m[x]++;
        int mn= INT_MAX;
        for(auto x :m)
        {
            mn= min( x.second ,mn);

        }
         vector<int>v;
        for( int i =2; i<=mn; i++){
            if(mn%i==0)
            {
                v.push_back(i);
            }

        }
        if( mn<2)return false; 
            for( auto x : v)
            {
                bool fl =false;
                for( auto y : m)
                {
                    if(y.second%x!=0){
                        fl=true;
                        break;
                    }
                }
                if( fl==false)return true;
            }

        return false;
    }
};