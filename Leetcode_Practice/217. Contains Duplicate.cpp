/*
Given an integer array nums, return true if any value appears at least twice in the 
array, and return false if every element is distinct.

Example 1:
Input: nums = [1,2,3,1]
Output: true
*/
/*
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            us.insert(nums[i]);
        }
        int m;
        m = us.size();
        if(n>m) return true;
        return false;
    }
};
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] == nums[i+1]) return true;
        }
        return false;
    }
};