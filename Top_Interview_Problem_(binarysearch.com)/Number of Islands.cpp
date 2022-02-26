/*
Given a two-dimensional integer matrix of 1s and 0s, return the number of "islands" 
in the matrix. A 1 represents land and 0 represents water, so an island is a group of 1s 
that are neighboring whose perimeter is surrounded by water.

Note: Neighbors can only be directly horizontal or vertical, not diagonal.
*/

void island(vector<vector<int>>&matrix,int r, int c){
    //boundary conditiom
    if(r>=matrix.size() or c >= matrix[0].size() or r<0 or c<0) return;
    if(matrix[r][c]==0) return;

    matrix[r][c]=0;
    island(matrix,r+1,c);
    island(matrix,r-1,c);
    island(matrix,r,c+1);
    island(matrix,r,c-1);
}

int solve(vector<vector<int>>& matrix) {
    int res=0;
    int row = matrix.size(),col = matrix[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j] ==1){
                res++;
                island(matrix,i,j);
                

            }
        }
    }
    return res;
}
