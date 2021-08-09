/*
Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.
You must solve the problem without using any built-in library for handling large integers (such as BigInteger). 
You must also not convert the inputs to integers directly.

Example 1:
Input: num1 = "11", num2 = "123"
Output: "134"
*/

class Solution {
public:
    string addStrings(string num1, string num2) {
        string res = "";
        int i = num1.length()-1;
        int j = num2.length()-1;
        
        int carry = 0;
        
        while(i>= 0 or j>= 0 or carry != 0)
        {
            int ival = i>=0 ? num1[i]-'0':0;
            int jval = j>=0 ? num2[j]-'0':0;
            i--;
            j--;
            
            int sum = ival+jval+carry;
            res = to_string(sum %10)+res;
            carry = sum/10;
            
        }
        return res;
        
    }
};