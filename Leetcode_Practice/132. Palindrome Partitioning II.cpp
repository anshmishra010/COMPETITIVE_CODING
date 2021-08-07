/*
Given a string s, partition s such that every substring of the partition is a palindrome.
Return the minimum cuts needed for a palindrome partitioning of s.

Example 1:
Input: s = "aab"
Output: 1
Explanation: The palindrome partitioning ["aa","b"] could be produced using 1 cut.
*/

class Solution {
public:
    int minCut(string s) {
        int n = s.size();
        if(n <=1)return 0;
        int i,j;
        bool isPal[n][n];
        fill_n(&isPal[0][0],n*n,false);
        int minCut[n+1];
        
        for(i=0;i<=n;i++) minCut[i] = i-1;
        
        for(j=1;j<n;j++){
            for(i=j; i>=0;i--){
                if(s[i] == s[j] and ((j-i < 2) || isPal[i+1][j-1])){
                    isPal[i][j] = true;
                    minCut[j+1] =min(minCut[j+1], 1+ minCut[i]);
                }
            }
        }
        return minCut[n];
    }
};