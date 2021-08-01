class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> res;
	    vector<int>vis(V,0);
	    queue<int> q;
	    q.push(0);
	    vis[0]=1;
	    
	    while(!q.empty())
	    {
	        int temp = q.front();
	        q.pop();
	        res.push_back(temp);
	        
	        for(auto it : adj[temp])
	        {
	            if(!vis[it]){
	                q.push(it);
	                vis[it]=1;
	            }
	        }
	    }
	    return res;
	}
};
