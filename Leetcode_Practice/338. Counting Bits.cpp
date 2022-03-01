/*
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n),
ans[i] is the number of 1's in the binary representation of i.

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
*/

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        res[0] =0;  //  will be 0 beacuse 0 has count of set bit is 0;
        for(int i=0;i<=n;i++) res[i] = res[i/2] + i%2;   // i%2 will be 0 for even number ans 1 for odd number
        
        return res;
    }
};