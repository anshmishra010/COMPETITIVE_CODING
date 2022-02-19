/*
Given a grid of size n*m (n is number of rows and m is number of columns grid has) 
consisting of '0's(Water) and '1's(Land). Find the number of islands.
Note: An island is surrounded by water and is formed by connecting adjacent lands 
horizontally or vertically or diagonally i.e., in all 8 directions.

Example 1:

Input:
grid = {{0,1},{1,0},{1,1},{1,0}}
Output:
1
*/

int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int row = grid.size(), col = grid[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j] == '1') // we found an island
                {
                    helper(grid,i,j);
                    count++;
                }
            }
        }
        
        
        return count;
    }
    
    void helper(vector<vector<char>>&grid, int i, int j)
    {
        // check out of bound conditions 
        if(i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size()) return;
        
        // checking the conditon whether it's water 
        if(grid[i][j] == '0') return;
        
        // marking it as a water
        grid[i][j] = '0';
        
        helper(grid,i+1,j);
        helper(grid,i-1,j);
        helper(grid,i,j+1);
        helper(grid,i,j-1);
        
        // from here we are checking diagnoal
        helper(grid,i+1,j+1);
        helper(grid,i+1,j-1);
        helper(grid,i-1,j+1);
        helper(grid,i-1,j-1);
    }