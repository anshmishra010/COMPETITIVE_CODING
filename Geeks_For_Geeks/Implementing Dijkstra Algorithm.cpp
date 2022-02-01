/*
Given a weighted, undirected and connected graph of V vertices and E edges, Find the shortest distance of all the vertex's from the source vertex S.
Note: The Graph doesn't contain any negative weight cycle.
*/
vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        // we will be using priority queue in this, but we can also use set
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > pq;
        vector<int> distance(V,INT_MAX);
        distance[S] =0;
        pq.push({0,S});
        while(!pq.empty())
        {
            int dist = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            for(auto &it : adj[node])
            {
                if(dist + it[1] < distance[it[0]]) distance[it[0]] = dist+it[1];
            }
        }
        return distance;
    }