/*
Given the array of integers nums, you will choose two different indices i and j of that array.
 Return the maximum value of (nums[i]-1)*(nums[j]-1).
*/
//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // for storing the value of nums[i] and nums[j]
        int a =0 , b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > a){
                // as we have to make a as the first greatest int amd b as the second greatest
                // for the first iteration a is 0;
                b = a;
                // here we are giving the value to a
                a= nums[i];
            }
            else if(nums[i] > b){
                b = nums[i];
            }
        }
        
        return (a-1)*(b-1);
        
    }
};