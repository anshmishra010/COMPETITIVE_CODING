/*
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
*/


class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        int x = 1, y=2;
        
        for(int i=3;i<n;i++){
            int temp = y;
            y+=x;
            x=temp;
        }
        return x+y;
    }
};
//--------------------------------------------------
/*
adding two prevoius value can lead us to n
st[n] = st[n-1]+st[n-2]
*/

// using extra space , but both are right 
class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        vector<int> v(n,0);
        v[0] =1;
        v[1] =2;
        
        for(int i=2;i<n;i++){
            v[i] = v[i-2]+v[i-1];
        }
        return v[n-1];
    }
};