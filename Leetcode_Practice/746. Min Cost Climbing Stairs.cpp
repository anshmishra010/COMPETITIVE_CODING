/*
You are given an integer array cost where cost[i] is the cost of ith step on a staircase.
Once you pay the cost, you can either climb one or two steps.
You can either start from the step with index 0, or the step with index 1.
Return the minimum cost to reach the top of the floor.

Example 1:

Input: cost = [10,15,20]
Output: 15
Explanation: You will start at index 1.
- Pay 15 and climb two steps to reach the top.
The total cost is 15.
*/

int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int> um;
        int zero_index = helper(cost,0,um);
        int one_index = um[1]; // as after 1 everthing is same.
        
        return min(zero_index, one_index);
    }
    
    int helper(vector<int>&cost, int curidx, unordered_map<int,int>&um)
    {
        int n = cost.size();
        //base case
        if(curidx == n) return 0;
        if(curidx > n) return 1001;
        
        int curkey = curidx;
        if(um.find(curkey) != um.end()) return um[curkey];
        
        int one_step = cost[curidx] + helper(cost,curidx+1,um); // when taking 1 step
        int two_step = cost[curidx] + helper(cost, curidx+2, um); // when taking 2 step
        
        um[curkey] = min(one_step,two_step); // storing minimum cost
        return min(one_step,two_step);
    }