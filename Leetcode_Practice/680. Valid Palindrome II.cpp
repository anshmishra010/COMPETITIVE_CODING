/*
Given a string s, return true if the s can be palindrome after deleting at most one 
character from it.

Example 1:

Input: s = "aba"
Output: true
*/

class Solution {
public:
    bool validPalindrome(string s) {
        // using 2 ptr
        int len = s.length();
        if(len <= 2) return true;
        int low = 0, high = len-1;
        
        while(low <= high)
        {
            if(s[low] == s[high]) low++,high--; // both the char are equal
            else
            {
                // removing left
                int temp_low = low+1, temp_high = high;
                while(temp_low <= temp_high and s[temp_low] == s[temp_high]){ temp_low++, temp_high--;}
                if(temp_low >= temp_high) return true;
                
                // removing right
                int t_low = low , t_high = high-1;
                while(t_low <= t_high and s[t_low] == s[t_high]){ t_low++, t_high--;}
                if(t_low >= t_high) return true;
                
                return false; // cannot be a palindrome even after removing char
            }
        }
        return true; // already palindrom (like - aba)
    }
};