/*
Given a string columnTitle that represents the column title as appear in an Excel sheet, 
return its corresponding column number.
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
Input: columnTitle = "A"
Output: 1
*/
class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long int pow = 1;
        long long int res =0;
        int len = columnTitle.size();
        
        for(int i=len-1; i>=0;--i){
            res += (columnTitle[i] - 'A' + 1)*pow; // position of the alphabet * power of 26
            pow *= 26;
        }
        return res;
    }
};

