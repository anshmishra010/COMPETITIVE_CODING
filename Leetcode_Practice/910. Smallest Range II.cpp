/*
You are given an integer array nums and an integer k.
For each index i where 0 <= i < nums.length, change nums[i] to be either nums[i] + k or nums[i] - k.
The score of nums is the difference between the maximum and minimum elements in nums.
Return the minimum score of nums after changing the values at each index.


Example 1:

Input: nums = [1], k = 0
Output: 0
Explanation: The score is max(nums) - min(nums) = 1 - 1 = 0.
*/

class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        // storing the max value
        int res = nums[n-1] - nums[0];
        if(n == 1) return 0;
        for(auto i=0;i<n-1;i++)
        {
            // possible max
            int maxh = max(nums[n-1]-k , nums[i]+k);
            //possible min
            int minh = min(nums[0]+k,nums[i+1]-k);
            
            res = min(res,maxh-minh);
        }
        return res;
        
    }
};