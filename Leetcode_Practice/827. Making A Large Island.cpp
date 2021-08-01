class Solution {

int area = 0,ind =2;
vector<pair<int,int>>dir{{1,0},{-1,0},{0,1},{0,-1}};
unordered_map<int,int> m;

void depth(int a,int b,vector<vector<int>> &grid)
{
    int n = grid.size();
    if(a<0 or a>=n  or b<0 or b>=n or grid[a][b]!= 1) return;
    m[ind]++;
    grid[a][b] = ind;

    for(auto it : dir) depth(a+it.first,b+it.second,grid);
    
}
void farea(vector<vector<int>>&grid)
{
    int n = grid.size();
    queue<pair<int,int>> q;
    for(auto i=0;i<n;i++){
        for(auto j=0;j<n;j++){
            if(grid[i][j] == 0) q.push({i,j});
        }
    }
    auto vald = [&](int i,int j){
        return (i>=0 and i<n and j>=0 and j<n and grid[i][j] != 0);
    };
    while(!q.empty())
    {
        unordered_set<int> visi;
        int cur=0;

        auto temp = q.front();
        q.pop();

        int x = temp.first;
        int y = temp.second;

        for(auto it : dir){
            int n_x = x+it.first, n_y = y+it.second;

            if(vald(n_x,n_y) and !visi.count(grid[n_x][n_y])){
                visi.insert(grid[n_x][n_y]);
                cur =  cur+ m[grid[n_x][n_y]];
            }
        }
        area = max(cur+1,area);
    }
}

void marking(vector<vector<int>>&grid)
{
    int n = grid.size();
    m.clear();
    ind =2;
    for(auto i =0;i<n;i++){
        for(auto j=0;j<n;j++){
            if(grid[i][j]){
                depth(i,j,grid);
                area = max(area,m[ind]);
                ind++;
            }
        }
    }
}




    
public:
    int largestIsland(vector<vector<int>>& grid) {
        
        marking(grid);
        farea(grid);
        return area;
        
    }
};