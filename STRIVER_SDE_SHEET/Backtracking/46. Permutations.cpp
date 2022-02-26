/*
Given an array nums of distinct integers, return all the possible permutations. 
You can return the answer in any order.

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
*/

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        find_permutation(nums,0,res);
        return res;
        
    }
    
    void find_permutation(vector<int>&nums, int start, vector<vector<int>>&res)
    {
        // base case
        if(start >= nums.size()){
            res.push_back(nums);
            return;
        }
        
        // genrating combinations
        for(int i=start;i<nums.size();i++)
        {
            swap(nums[start],nums[i]);
            find_permutation(nums,start+1,res);
            swap(nums[start],nums[i]); // while backtracking we will return it to original state as in find_permutation func we have taken it by refernce (&), so it copies the same.
        }
    }
};