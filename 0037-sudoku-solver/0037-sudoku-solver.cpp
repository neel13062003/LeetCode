//Space Complexity = O(1)
//Time Complexity = 9^81 = Numebers Of Digit(0-9) ^ 81 = Each cell possibility of 9 (81 Times 9) 


class Solution {
public:
    bool solve(vector<vector<char>>&board){
        for(int row=0;row<board.size();row++){
            for(int col=0;col<board[0].size();col++){
                if(board[row][col]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isValid(col,row,c,board)){
                            board[row][col]=c;
                            if(solve(board)==true)
                                return true;
                            else
                                board[row][col]='.';
                        }
                    }
                    return false;
                }
            }
        }return true;
    }bool isValid(int col,int row,char c,vector<vector<char>>&board){
        for(int i=0;i<9;i++){
            if(board[i][col]==c) return false;
            if(board[row][i]==c) return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c) return false;
        }return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};


/*

Explaination
This line of code is checking whether the current value 'c' can be placed in the current cell (row, col) of the Sudoku board. Specifically, it is checking whether 'c' is already present in the 3x3 sub-grid that contains the current cell.

Here's how this line of code works:

Sudoku board consists of a 9x9 grid, which is divided into 9 3x3 sub-grids.

For a given cell (row, col), we can determine which sub-grid it belongs to using the following formula:

subgrid_row = 3 * (row / 3)
subgrid_col = 3 * (col / 3)

This formula calculates the row and column indices of the top-left cell of the sub-grid that contains the current cell.

Once we know the indices of the sub-grid, we can iterate over all 9 cells in the sub-grid using the variable 'i'.

The index 'i' can be divided into two parts: 'i/3' gives the row index relative to the top-left cell of the sub-grid, and 'i%3' gives the column index relative to the top-left cell of the sub-grid.

Finally, we can check whether the value 'c' is already present in the current cell of the sub-grid using the following code:

if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c) return false;

This code uses the formula we derived earlier to calculate the row and column indices of the current cell in the sub-grid, and then checks whether its value is equal to 'c'.

If 'c' is already present in the sub-grid, the function returns false, indicating that 'c' cannot be placed in the current cell. Otherwise, it continues with the other checks for the row and column.
*/