/*
Given an integer num, repeatedly add all its digits until the result has only 
one digit, and return it.

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
*/

/*
class Solution {
public:
    int addDigits(int num) {
        if(num == 0){
            return num;
        }else if(num%9 == 0){
            return 9;
        }else{
            return num%9;
        }
    }
};
*/
class Solution {
public:
    int addDigits(int num) {
        // itreative way !
        int sum=0;
        while(num>9){
            while(num){
                sum += (num%10);
                num /= 10;
            }
            num =sum;
            sum=0;
        }
        return num;
    }
};

// https://leetcode.com/problems/add-digits/discuss/1754049/Easy-O(1)-Explanation-with-Example