/*
A string is good if there are no repeated characters.
Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.
Note that if there are multiple occurrences of the same substring, every occurrence should be counted.
A substring is a contiguous sequence of characters in a string.


Example 1:

Input: s = "xyzzaz"
Output: 1
Explanation: There are 4 substrings of size 3: "xyz", "yzz", "zza", and "zaz". 
The only good substring of length 3 is "xyz".
*/

class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        
        if(n<3) return 0;
        char a = s[0],b=s[1],c=s[2];
        int res =0;
        
        
        for(int i=3;i<n;i++){
            if(a!=b and b!=c and c!=a){
              res++;
            }
            
            // shifting the value
            a=b;
            b=c;
            c=s[i];
        }
        
        // for checking the last substr
        if(a!=b and b!=c and c!=a) res++;
        return res;
            
    }
};