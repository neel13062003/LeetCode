class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<string>vec1;
       //Logic is incorrect for this case->
       // 1   11
       // 11   1
        //All Row Insert
        for(int i=0;i<grid.size();i++){
            string str1="";
            for(int j=0;j<grid[0].size();j++){
                str1=str1+to_string(grid[i][j]);     //char instead of to_string
                if( j != grid[0].size()-1){
                    str1=str1 + "-";
                }else{

                }
            }
            vec1.push_back(str1);
            str1.clear();
        }

        vector<string>vec2;
        //All Columm Insert
        for(int j=0;j<grid[0].size();j++){
            string str2="";
            for(int i=0;i<grid.size();i++){
                str2=str2+to_string(grid[i][j]);
                if( i != grid.size()-1){
                    str2=str2 + "-";
                }else{

                }
            }
            vec2.push_back(str2);
            str2.clear();
        }

        int count=0;
        for(int i=0;i<vec1.size();i++){
            for(int j=0;j<vec2.size();j++){
                if(vec1[i]==vec2[j]){
                    count++;
                }
            }
        }
        return count;
    }
};