/*
There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

You must decrease the overall operation steps as much as possible.
*/

//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/



bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            
            if(nums[mid] == target){
                return true;
            }
            
            // this if is for handling the duplicates
        
            if(nums[mid] == nums[left] and nums[mid] == nums[right]){
                left++;
                right--;
            }
            
            // checking for the left half
            else if(nums[mid] >= nums[left]){
                // this means we are searching in left part
                if(nums[left] <= target and nums[mid] > target){
                    right = mid-1;
                }
                else{
                    // we will searching right
                    left = mid+1;
                }
            }
            
            // in the right half
            else {
                if(nums[mid] < target and nums[right] >= target){
                    left = mid+1;
                }
                else {
                    right = mid -1;
                }
            }
        }
        return false;
        
    }