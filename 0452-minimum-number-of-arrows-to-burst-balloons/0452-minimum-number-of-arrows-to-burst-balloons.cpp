class Solution {
public:
    
    static bool cmp(pair<int,int>&A,pair<int,int>&B){
        //return A.first<B.first || (A.first==B.first && A.second<B.second);
        return A.second<B.second || (A.second==B.second && A.first<B.first);
    }
    
    int findMinArrowShots(vector<vector<int>>& points) {
        vector<pair<int,int>>vec;
        for(int i=0;i<points.size();i++){
            vec.push_back({points[i][0],points[i][1]});
        }
        
        sort(vec.begin(),vec.end(),cmp);
        
        int count=points.size();
        int n=points.size();
        
        int start = vec[0].first;
        int end = vec[0].second;
        
        for(int i=1;i<n;i++){
            if(end >= vec[i].first){
                count--;
            }else{
                end=vec[i].second;
            }    
        }
        return count;
    }
    
};