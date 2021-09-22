/*
Given a list of non-negative integers nums, arrange them such that they form the largest number.

Note: The result may be very large, so you need to return a string instead of an integer.

 

Example 1:

Input: nums = [10,2]
Output: "210"
*/
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        // instead of traversing in a digit, we made it in string
        string res= "";
        sort(nums.begin(),nums.end(),[=](int a , int b){
           string s1 = to_string(a);
            string s2 = to_string(b);
            // as string can compare it
            return s1+s2 > s2+s1;
        });
        if(nums[0] == 0) return "0";
        for(auto it : nums){
            res += to_string(it);
        }
        return res;
    }
};