/*
You are given two strings s and t.
String t is generated by random shuffling string s and then add one more letter at a random position.
Return the letter that was added to t.

Example 1:

Input: s = "abcd", t = "abcde"
Output: "e"
Explanation: 'e' is the letter that was added.
*/

class Solution {
public:
    char findTheDifference(string s, string t) {

        // using bit
        char temp=0;
        for(char i : s) temp ^= i;
        for(char j : t) temp ^= j;
        return temp;
        
        // using sum
        int sum1=0,sum2=0;
        for(char i : s) sum1 += i;
        for(char j : t) sum2 += j;
        return sum2-sum1;
        
        // using map
        map<char,int> mp;
        for(auto i : t) mp[i]++;
        for(auto j : s) mp[j]--;
        for(auto z : mp) {
            if(z.second == 1)return z.first;
        }
        return 'x';
    }
};