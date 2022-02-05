/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int l1 = s.size(), l2 = t.size();
        if(l1 != l2) return false;
        
        unordered_map<char,int> um;
        
        for(auto i : t) um[i]++;
        for(auto j : s){
            if(um[j]-- <= 0) return false;
        }
        return true;
    }
};