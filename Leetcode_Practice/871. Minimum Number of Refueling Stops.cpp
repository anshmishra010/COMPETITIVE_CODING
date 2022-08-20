//https://leetcode.com/problems/minimum-number-of-refueling-stops/

class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int max_reach = startFuel;
        priority_queue<int> pq;
        int count =0, index =0;
        // count = no.of gas st, index = for indexing pq
        
        while(max_reach < target)
        {
            while(index < stations.size() and stations[index][0] <= max_reach)
            {
                pq.push(stations[index][1]);
                index++;
            }
            if(pq.empty()) return -1;
            
            max_reach += pq.top();
            pq.pop();
            count++;
        }
        return count;
    }
};
/*
- we will use priority queue to store the fuel amount, so that we will get max value  of fuel on top without re-iterating.
*/