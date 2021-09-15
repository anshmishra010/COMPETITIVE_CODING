/*
Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.

 

Example 1:

Input: s = "ab-cd"
Output: "dc-ba"
*/
/*
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.size();
        int start =0,end =n-1;
        
        while(start < end)
        {
            while(start < end and !isalpha(s[start])) start++;
            while(start < end and !isalpha(s[end]))end--;
            
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
    }
};
*/
class Solution {
public:
    string reverseOnlyLetters(string S) {
        int l = 0; 
        int r = S.size();
        while (l < r) {
            // if it is any other char then we just move
            if (isalpha(S[l]) == false) {
                l++;
            }
            
            else if (!isalpha(S[r-1])) {
                r--;
            }
            
            // else we just swap last and first
            else {
                swap(S[l], S[r-1]);
                l++;
                r--;
            }
        }
        return S;
    }
};