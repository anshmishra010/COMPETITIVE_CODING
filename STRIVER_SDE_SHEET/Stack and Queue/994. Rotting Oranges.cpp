/*
You are given an m x n grid where each cell can have one of three values:

0 representing an empty cell,
1 representing a fresh orange, or
2 representing a rotten orange.
Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.

Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.
*/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int m = grid.size(), n = grid[0].size(), day =0, t_org =0, rot_org=0;
        queue<pair<int,int>> rotten;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                // here we will count number of oranges in the grid
                if(grid[i][j] != 0) t_org++;
                //will push rotten orange in the queue
                if(grid[i][j] == 2) rotten.push({i,j});
            }
        }
        
        // these are the 4 direction in the form of x,y in which oranges can be rotten
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        
        // adding bfs approach
        while(!rotten.empty())
        {
            int temp = rotten.size();
            rot_org += temp; // count of rotten oranges in the queue
            
            // we will run a loop for temp times
            while(temp--)
            {
                // taking the out the co-ordinates
                int x = rotten.front().first, y = rotten.front().second;
                rotten.pop();
                // here we will go in all 4 direction
                
                for(int i=0;i<4;i++){
                    int nx = x + dx[i], ny = y + dy[i];
                    
                    // if it's not fresh oranges then we will ignore and move forward
                    if(nx < 0 || ny <0 || nx >= m || ny >= n || grid[nx][ny] != 1) continue;
                    
                    // if it comes here then it means it is a fresh orange
                    grid[nx][ny] =2; // rottening the orange
                    rotten.push({nx,ny});
                }
            }
            if(!rotten.empty()) day++;
        }
        return t_org == rot_org ? day : -1;
    }
    
};