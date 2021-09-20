/*
Given two strings s and t, return the number of distinct subsequences of s which equals t.

A string's subsequence is a new string formed from the original string by deleting some (can be none) of the characters without disturbing the remaining characters' relative positions. (i.e., "ACE" is a subsequence of "ABCDE" while "AEC" is not).

It is guaranteed the answer fits on a 32-bit signed integer.

 

Example 1:

Input: s = "rabbbit", t = "rabbit"
Output: 3
Explanation:
As shown below, there are 3 ways you can generate "rabbit" from S.
rabbbit
rabbbit
rabbbit
*/

class Solution {
public:
    int numDistinct(string s, string t) {
        /*
        intution :
        In this we have to create a dp matrix and then count the valid subsequence
        */
        
        int n = s.size(), m= t.size();
        
        // for storing the count ,we have to use unsigned long long as input is too large
        vector<vector<unsigned long long >> dp(m+1, vector<unsigned long long>(n+1));
        
        // firstly filling first row
        for(auto i =1;i<=n;i++){
            if(t[0] == s[i-1]){
                dp[1][i] = dp[1][i-1]+1;
            }
            else{
                // we will copy the same
                dp[1][i] = dp[1][i-1];
            }
        }
        
        for(auto i=2;i<=m;i++){
            for(auto j=1;j<=n;j++){
                if(t[i-1] == s[j-1]){
                    // if we found the match in both the string then we have to increase the count 
                    // current =prev of present row + prev of above row 
                    dp[i][j]= dp[i][j-1] + dp[i-1][j-1];
                }
                else{
                    // if we didn't got the match then we will copy same
                    dp[i][j] = dp[i][j-1];
                }
            }
        }
        // last value of matrix
        return dp[m][n];
        
    }
};

//https://www.youtube.com/watch?v=NR9lLQnFjWc

/*
Further SC optimize
class Solution {
public:
    int numDistinct(string s, string t) {
        int m = s.size(), n = t.size();
        vector<long> dp( n + 1, 0 );
        dp[0] = 1;
        for( int i = 1; i <= m; i++ ) {
            for( int j = n; j >= 1; j-- ) {
                if( s[i - 1] == t[j - 1] ) {
                    dp[j] += dp[j - 1];
                }
            }
        }
        return dp[n];
    }

};
*/