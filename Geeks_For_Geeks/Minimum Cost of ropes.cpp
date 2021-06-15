/*
There are given N ropes of different lengths, we need to connect these ropes into one rope. The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost.

Example 1:

Input:
n = 4
arr[] = {4, 3, 2, 6}
Output: 
29
*/

 long long minCost(long long arr[], long long n) {
        // Your code here
        // will be using min heap
        
        priority_queue<long long int, vector<long long int>, greater<long long int>> mh;
        for(long long i=0;i<n;i++){
            mh.push(arr[i]);
        }
        long long cost=0;
        // as if size get down than 1 then we will understand that we have sucessfully made the sum of all the elements in heap 
        while(mh.size() >1){
            auto n1 = mh.top();
            mh.pop();
            auto n2 = mh.top();
            mh.pop();
            cost += n1+n2;
            mh.push(n1+n2);
        }
        return cost;
    }