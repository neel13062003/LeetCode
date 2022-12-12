/*class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int p=0;
        
        //Check Row Wise Not Repeate Number
        map<char,int>mp;
        for(int i=0;i<board.size();i++){
           for(int j=0;j<board[0].size();j++){
                 mp[board[j]]++;
           }
           for(auto it=mp.begin();it!=mp.end();it++){
               if(it->second  > 1) p=1; break;
           }
           mp.clear();
           if(p==1) break; 
       }
        
       //Check Column Wise Not Repeat Number
        map<char,int>mp1;
        for(int i=0;i<board[0].size();i++){
           for(int j=0;j<board.size();j++){
                 mp1[board[j]]++;
           }
           for(auto it=mp1.begin();it!=mp1.end();it++){
               if(it->second  > 1) p=1; break;
           }
           mp1.clear();
           if(p==1) break; 
       }      
        
       if(p==1) return false;
       else return true;  
    }
};*/


class Solution {
public:
    bool f(vector<vector<char>>&board,char c,int i,int j){
        for(int k=0;k<9;k++){
            if(k==j) continue;
            if(board[i][k]==c) return false;
        }
         for(int k=0;k<9;k++){
            if(k==i) continue;
            if(board[k][j]==c) return false;
        }  
        int x=i/3*3;
        int y=j/3*3;
        for(int u=x;u<x+3;u++){
            for(int v=y;v<y+3;v++){
                if(u==i && v==j) continue;
                if(board[u][v]==c) return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(!f(board,board[i][j],i,j)) return false;
            }
        }
        return true;
    }
};