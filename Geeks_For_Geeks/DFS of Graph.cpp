class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	void dfs(int n,vector<int> &vis,vector<int> &res,vector<int> adj[])
	{
	    res.push_back(n);
	    vis[n]=1;
	    
	    for(auto it: adj[n])
	    {
	        if(!vis[it]){
	            dfs(it, vis,res,adj);
	        }
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> res;
	    vector<int> vis(V,0);
	    dfs(0,vis,res,adj);
	    return res;
	}
};