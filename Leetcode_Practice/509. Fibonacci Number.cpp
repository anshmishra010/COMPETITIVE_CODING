/*
The Fibonacci numbers, commonly denoted F(n) form a sequence,
 called the Fibonacci sequence, such that each number is the sum of the two preceding 
 ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).
Example 1:
Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
*/

/*
class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        return fib(n-1) + fib(n-2);
    }
};

class Solution {
public:
    int fib(int n) {
        vector<int> v(n+1);
        if(n<2) return n;
        v[0]=0;
        v[1]=1;
        for(int i=2;i<=n;i++){
            v[i] = v[i-1]+v[i-2];
        }
        return v[n];
    }
};
*/

class Solution {
public:
    int fib(int n) {
        if(n<2) return n;
        int x =0,y=1,z=0;
        for(int i=1;i<n;i++){
            z = x+y;
            x =y;
            y =z;
        }
        return z;
    }
};