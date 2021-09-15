/*
Given a two-dimensional matrix of integers matrix, determine whether it's a Toeplitz matrix. A Toeplitz is one where every diagonal descending from left to right has the same value.
Constraints

n, m ≤ 250 where n and m are the number of rows and columns in matrix
Example 1
Input
matrix = [
    [0, 1, 2],
    [3, 0, 1],
    [4, 3, 0],
    [5, 4, 3]
]
Output
true
*/

bool solve(vector<vector<int>>& matrix) {
    int row = matrix.size(),col = matrix[0].size();

    for(auto i = 1;i<row;i++){
        for(auto j=1;j<col;j++){
            if(matrix[i][j] != matrix[i-1][j-1]) return false;
        }
    }
    return true;
}