/*
Given a NxN matrix of positive integers. There are only three possible moves from a cell Matrix[r][c].

Matrix [r+1] [c]
Matrix [r+1] [c-1]
Matrix [r+1] [c+1]
Starting from any column in row 0 return the largest sum of any of the paths up to row N-1.

Example 1:
Input: N = 2
Matrix = {{348, 391},
          {618, 193}}
Output: 1009
Explaination: The best path is 391 -> 618. 
It gives the sum = 1009.
*/

 int maximumPath(int N, vector<vector<int>> Matrix)
    {
        for(int i=1;i<N;i++){
            for(int j=0;j<N;j++){
                if(j>0 and j<N-1){
                    Matrix[i][j] += max({Matrix[i-1][j],Matrix[i-1][j-1],Matrix[i-1][j+1]});
                }
                else if(j>0){
                    Matrix[i][j] += max (Matrix[i-1][j],Matrix[i-1][j-1]);
                } 
                else if(j<N-1){
                    Matrix[i][j] += max(Matrix[i-1][j],Matrix[i-1][j+1]);
                }
            }
        }
        int res=0;
        for(int i=0;i<N;i++){
            res = max(Matrix[N-1][i],res);
        }
        return res;
    }