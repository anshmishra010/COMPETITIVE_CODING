/*
A peak element is an element that is strictly greater than its neighbors.

Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞.

You must write an algorithm that runs in O(log n) time.

 

Example 1:

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // using binary search
        
        int low = 0;
        int high = nums.size()-1;
        
        while(low < high)
        {
            int mid = low + (high - low)/2;
            // checking its next element
            int mid2 = mid+1;
            
            // if gets true then it means that we have to check in right section
            if(nums[mid] < nums[mid2])
            {
                low = mid2;
            }
            else
            {
                //else in left section
                high = mid;
            }
        }
        return low;
    }
};