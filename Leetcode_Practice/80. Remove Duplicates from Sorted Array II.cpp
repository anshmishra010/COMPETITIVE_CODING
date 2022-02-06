/*
Given an integer array nums sorted in non-decreasing order, remove some duplicates 
in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), slow = 2, fast =2;
        if(n <3) return n;
        
        while(fast < n)
        {
            if(nums[fast] != nums[slow-2]){ // this means that number occured more than k
                nums[slow++] = nums[fast];  // just replace current (extra or greater than 3) number with the next one
            }
            fast++;
        }
        return slow;
        
    }
};