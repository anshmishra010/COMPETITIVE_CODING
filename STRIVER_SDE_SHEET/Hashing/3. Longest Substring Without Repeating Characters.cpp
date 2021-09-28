/*
Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int start =0, end =0 , res =0;
        int n = s.size();
        
        while(end < n)
        {
            if(st.find(s[end]) == st.end()){
                st.insert(s[end]);
                res = max((end-start)+1,res);
               end++;
            }
            else{
                st.erase(s[start]);
                start++;
            }
        }
        return res;
    }
};