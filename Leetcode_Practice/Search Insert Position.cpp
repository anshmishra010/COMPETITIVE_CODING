/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/
// https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // simply using binary search
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target ){

                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        // as in last iteration the high becomes greater than low so loop breaks and we return low or we can also return high+1
        return low;
        
        
    }
};