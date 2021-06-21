/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

 

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        /*
        Brute force 
        TC- NLogN
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
            
        }
        return nums[0];
        
        */
         
        // optimised app
        //TC- O(N)
        
        int len = nums.size();
        for(int i=0;i<len;i++){
            
        // in this we are converting the visted number into a negative number , just to know that it is visted
            // as the number lies between 1 to n
            //and we are comparing the data value at nums[i] to the current (i) value
            if(nums[abs(nums[i])] <0){
                return abs(nums[i]);
            }
            nums[abs(nums[i])] *= -1;
            
        }
        return -1;
        
    }
};