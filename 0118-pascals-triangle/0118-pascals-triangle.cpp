/*

    Time Complexity : O(N^2). Where N is the numRows. Here total number of iterations are : N*(N+1)/2 which creates the time complexity.

    Space Complexity : O(1). Constant space. Because we are creating 2D vector output as per the demand of
    program.

    Solved using Dynamic Programming Approach(Tabulation: Bottom Up).

*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output(numRows);
        for(int i=0; i<numRows; i++){
            output[i].resize(i+1, 1);
            for(int j=1; j<i; j++){
                output[i][j] = output[i-1][j-1] + output[i-1][j];
            }
        }
        return output;
    }
};

//https://workat.tech/problem-solving/approach/pt/pascals-triangle
/*vector<int> pascalTriangleRow(int rowNo) {
   vector<int> pascalRow;
   pascalRow.push_back(1);
   rowNo--;
   for (int i = 1; i <= rowNo; i++) {
       int rowElement = pascalRow.back() * (rowNo - i + 1) / i;
       pascalRow.push_back(rowElement);
   }
   return pascalRow;
}*/