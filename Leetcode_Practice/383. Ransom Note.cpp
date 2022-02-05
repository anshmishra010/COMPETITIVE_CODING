/*
Given two strings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.
Each letter in magazine can only be used once in ransomNote.
Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> um; // map worked because by default zero value is stored
        for(auto i : magazine) um[i]++;
        for(auto j : ransomNote){
            // if the char is not present or invalid then it will have zero value 
            if(um[j]-- <= 0) return false;
        }
        return true;
    }
};