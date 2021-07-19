/*
Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 
Example 1:
Input: columnNumber = 1
Output: "A"
*/
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        
        while(columnNumber > 0)
        {
            char help = (columnNumber - 1)%26 + 'A';
            res.push_back(help);
            
            columnNumber = (columnNumber -1)/26;
        } 
        reverse(res.begin(),res.end());
        return res;
        
    }
};

// just try to sole (171. Excel Sheet Column Number) before solving this one.