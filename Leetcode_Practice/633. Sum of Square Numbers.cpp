/*
Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

Example 1:
Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5
*/
class Solution {
public:
    bool judgeSquareSum(int c) {
        // using 2 pointer
        if(c < 3)return true;
        long long int start = 0, end = sqrt(c);
        while(start<=end)
        {
            if(start*start + end*end == c) return true;
            else if(start*start + end*end < c) start++;
            else end--;
        }
        return false;
        
    }
};