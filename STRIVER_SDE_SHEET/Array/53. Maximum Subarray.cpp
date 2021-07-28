/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
A subarray is a contiguous part of an array.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // Using Kadane Algorithm
        int sum = 0;
        int maxi = INT_MIN;
        for (auto it : nums)
        {
            sum += it;
            maxi = max(sum, maxi);
            if (sum < 0)
                sum = 0;
        }
        return maxi;
    }
};

/*
Brut force
We can take 3 for loop and find out maximum sum , TC - O(n3), SC -O(1)
*/