/*
Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.
*/
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        // we will be using two function
        // first for finding the first index
        // second for the last index
        
        vector<int> res;
        int fidx = firstidx(nums,target);
        int sdx =  secondidx (nums, target);
        res.push_back(fidx);
        res.push_back(sdx);
        return res;
        
    }
    
    int firstidx(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int pos =-1;
        
        while(low <= high){
            int mid = low +(high - low )/2;
            
            if(nums[mid] == target){
                pos = mid;
                // here we will be searching in left part of array
                high = mid -1;
            }
            else if(nums[mid] < target){
                low = mid+1;
            }
            else if(nums[mid] > target){
                high = mid -1;
            }
            
        }
        return pos;
        
    }
    
    int secondidx(vector<int>& nums, int target){
        
        int low = 0;
        int high = nums.size()-1;
        int pos =-1;
        while(low <=  high){
            int mid = low+(high - low)/2;
            if(nums[mid] == target){
                pos = mid;
                // here we will be searching in right part of array
                low = mid +1;
            }
            else if(nums[mid] < target){
                low = mid+1;
            }
            else if(nums[mid] > target){
                high = mid -1;
            }
        }
        return pos;
    }
};