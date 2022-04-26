/*
You are given an array points representing integer coordinates of some points on a 2D-plane, where points[i] = [xi, yi].
The cost of connecting two points [xi, yi] and [xj, yj] is the manhattan distance between them: |xi - xj| + |yi - yj|, 
where |val| denotes the absolute value of val.
Return the minimum cost to make all points connected. All points are connected if there is 
exactly one simple path between any two points.
*/

/*
class Solution {
public:
    typedef pair<int, int> pi;
    int cost(pair<int,int> p1, pair<int,int> p2){
        return abs(p1.first - p2.first) + abs(p1.second - p2.second);
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        int sz = points.size();
        map<int,bool> added;
        priority_queue< pi , vector<pi>, greater<pi> > pq;
        vector<pi> ps;
        for(auto &p:points){
            ps.push_back({p[0],p[1]});
        }
        added[0] = true;
        for(int i=1;i<sz;i++){
            pq.push( { cost( ps[0],ps[i] ) , i} );
        }
        int sum = 0;
        while(!pq.empty()){
            pi p = pq.top();
            pq.pop();
            int to = p.second;
            int costTo = p.first;
            if(added[to]) continue;
            added[to] = true;
           
            sum += costTo;
            for(int i=0;i<sz;i++){
                if(added[i]) continue;
                pq.push( { cost( ps[to],ps[i] ) , i} );
            }
        }
        return sum;
    }
};


*/

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();


        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        // here first element of pair is taken as for storing distance because it can save us from writing custom comparing function of our own 
        bool visited[n];
        int ans = 0;
        memset(visited,false,n);
        int vcnt = 0;
        while(pq.size() > 0 && vcnt < n){
            pair edge = pq.top(); pq.pop();
            if(visited[edge.second]  == true)
                continue;
            visited[edge.second]  = true;
            vcnt++;

            ans += edge.first;

            for(int i = 0; i < n; i++){
                if(visited[i] == false){
                     int mhd = abs(points[edge.second][0] - points[i][0]) + abs(points[edge.second][1] - points[i][1]);
                    pq.push({mhd,i});
                }
            }

        }
        return ans;


    }
};


/*
Using Prims algo using priority queue

1)pushing element in the vector
2)pushing element in the priority queue(this will make less cost to the top) with the absolute diff 
3) start poping out if the distance already present in the hashmap then ignore it else add it.
*/