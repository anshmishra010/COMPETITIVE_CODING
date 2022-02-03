/*
In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.

You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.
Input: mat = [[1,2],[3,4]], r = 1, c = 4
Output: [[1,2,3,4]]
*/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m_r = mat.size(), m_c=mat[0].size(),temp_r=0,temp_c=0;
        if(m_r*m_c != r*c) return mat;
        vector<vector<int>> res(r,vector<int>(c));
        
        
        for(int i=0;i<m_r;i++){
            for(int j=0;j<m_c;j++){
                
                if(temp_c == c){ // whenver we hit the last column of that row then we have to change to the next row that's why we increment row and to reuse that column counter that's we make it to 0
                    temp_r++;
                    temp_c=0;
                }
                res[temp_r][temp_c] = mat[i][j];
                temp_c++; // after placing the element we have to move to the next col
            }
        }
        return res;
    }
};