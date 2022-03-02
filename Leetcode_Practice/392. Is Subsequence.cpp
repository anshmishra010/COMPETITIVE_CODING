/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by 
deleting some (can be none) of the characters without disturbing the relative positions 
of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_p =0, t_p=0,n = s.size(),m = t.size();
        if(s == "") return true;

        
        while(s_p < n and t_p < m)
        {
            if(s[s_p] == t[t_p]) s_p ++, t_p++;
            else if(s[s_p] != t[t_p] and t_p < m) t_p++;
        }
        if(s_p == n ) return true; // this means first ptr have reached till last sucessfully.
        return false;
    }
};