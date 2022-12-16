class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size(), col = matrix[0].size(), i = 0, j = col - 1;
        while(i < row && j >= 0){
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target) j--;
            else i++;
        }
        return false;
        
        
        
        
        
        
        /*int col=matrix[0].size();
        int row=matrix.size();
        int p=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]== target){
                    p=1;
                    break;
                }
            }
        }
        if(p==1){
            return true;
        }else{
            return false;
        }*/

    }
};