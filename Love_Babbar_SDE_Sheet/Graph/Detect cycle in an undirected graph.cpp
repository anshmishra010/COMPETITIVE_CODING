//Given an undirected graph with V vertices and E edges, check whether it contains any cycle or not. 

class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int cur_node, int parent_node, vector<int>&vis,vector<int> adj[])
    {
        vis[cur_node] =1;
        for(auto it : adj[cur_node]){
            if(vis[it] == 0){// un viseted array
            
                // here passing new node
                // so new node's parrent will be cur node
                if(dfs(it,cur_node,vis,adj)) return true;
            }
            // if the curr node is previously visited
            // if cur node is not equal to parent then it must be cycle
            else if(it != parent_node) return true;
        }
        return false;
    }
public:
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V+1, 0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,-1,vis,adj)) return true;
            }
        }
        return false;
    }
};