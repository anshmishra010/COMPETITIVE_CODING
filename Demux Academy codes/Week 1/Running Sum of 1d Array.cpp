/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.
*/
//https://leetcode.com/problems/running-sum-of-1d-array/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int len = nums.size();
        int sum = 0;
        vector<int> res;
        for(int i=0;i<len;i++){
            sum += nums[i];
            res.push_back(sum);
        }
        return res;
    }
};