/*#include <bits/stdc++.h>
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
       vector<int> temp;
        int p=0;
       for(int i=0;i<matrix.size();i++){
           for(int j=0;j<matrix[0].size();j++){
               temp.push_back(matrix[i][j]);
           }
           sort(temp.begin(),temp.end());
           for(int i=0;i<temp.size();i++){
              if(i+1 != temp[i] ){
                  p=1; break; 
              }   
           }
           if(p==1) break;
           temp.clear();
       }
        if(p==1) return false;
        else return true;
    }
    
};*/
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) { 
        set<int> row;
        int n = matrix.size();
        for(vector<int> v: matrix){
           row.clear();
           for(int i: v){
               row.insert(i);
           }
           if(row.size() < n) { return false; }
        }
        for(int i = 0;i < n; i++){
            set<int> col;
            for(int j = 0;j < n; j++){
                col.insert(matrix[j][i]);
            }
            if(col.size() < n) { return false;}
        }
        return true;
    }
};