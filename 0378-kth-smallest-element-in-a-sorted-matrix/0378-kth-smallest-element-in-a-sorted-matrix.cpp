class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         vector<int> ans;
         for(int i=0;i<matrix.size();i++){
             for(int j=0;j<matrix[0].size();j++){
                 ans.push_back(matrix[i][j]);
             }
         }
        int fans;
        int x=ans.size();
        sort(ans.begin(),ans.end());
        if(x-k >=0 ) {
            for(int i=0;i<ans.size();i++){
               fans=ans[k-1];
            }
            return fans;
        }else{
            return -1;
        }
    }
};