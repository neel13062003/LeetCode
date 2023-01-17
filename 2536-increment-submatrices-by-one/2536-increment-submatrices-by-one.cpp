class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> v(n,vector<int>(n,0));
        vector<vector<int>> pref(n,vector<int>(n,0));
        for(auto & row:queries){
            int a=row[0];
            int b=row[1];
            int c=row[2];
            int d=row[3];
            for(int i=a;i<=c;i++){
                pref[i][b]++;
                if(d+1<n) pref[i][d+1]--;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                pref[i][j]+=pref[i][j-1];
            }
        }
        return pref;
    }
};