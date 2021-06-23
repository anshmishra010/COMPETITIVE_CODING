/*
Geek lost the password of his super locker. He remembers the number of digits N as well as the sum S of all the digits of his password. He know that his password is the largest number of N digits that can be made with given sum S. As he is busy doing his homework, help him retrieving his password.

Example 1:

Input:
N = 5, S = 12
Output:
93000
Explanation:
Sum of elements is 12. Largest possible 
5 digit number is 93000 with sum 12.
*/

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        // Your code here
        int max_pos_num = n*9;
        if(max_pos_num<sum) return "-1";
        string res = "";
        
        for(int i=0;i<n;i++){
            if(sum > 9){
                res += '9';
                sum -= 9;
            }
            else{
                res += to_string(sum);
                sum = 0;
            }
        }
        return res;
    }
};