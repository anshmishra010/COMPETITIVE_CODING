/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0, maj =0;
        //moore voting algo
        
        for(int i=0;i<nums.size();i++){
            if(count == 0) maj = nums[i];
            if(maj == nums[i]) count++;
            else count--;
        }
        count =0;
        for(int i=0;i<nums.size();i++){
            if(maj == nums[i]){
                count++;
            }
        }
        return count>nums.size()/2 ? maj : -1;
        
    }
};

// brute force would be using map and then checking the count.