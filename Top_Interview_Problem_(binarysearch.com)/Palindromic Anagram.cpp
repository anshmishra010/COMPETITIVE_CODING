/*
Given a string s, determine whether any anagram of s is a palindrome.

Constraints

n ≤ 100,000 where n is the length of s
Example 1
Input
s = "carrace"
Output
true
*/
bool solve(string s) {
    if(s.length() == 1) return true;
    int len = s.length();
    int count=0;
    unordered_map<char, int> um;
    for(auto i : s) um[i] ++;
    for(auto j : um){
        if(j.second%2 !=0) count++;
    }
    
    if(count >1) return false;

    return true;
}