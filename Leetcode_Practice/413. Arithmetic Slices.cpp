/*
An integer array is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.

For example, [1,3,5,7,9], [7,7,7,7], and [3,-1,-5,-9] are arithmetic sequences.
Given an integer array nums, return the number of arithmetic subarrays of nums.

A subarray is a contiguous subsequence of the array.

 

Example 1:

Input: nums = [1,2,3,4]
Output: 3
Explanation: We have 3 arithmetic slices in nums: [1, 2, 3], [2, 3, 4] and [1,2,3,4] itself.
*/
/*
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int n=nums.size();
        if(n<3) return 0;
        vector<int> dp(n,0);
        int res=0;
        for(int i=2;i<n;i++){
            if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2]){
                dp[i] = dp[i-1]+1;
            }
            res += dp[i];
        }
        return res;
        
    }
};
*/

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        // O(1) space
        int res =0,ans=0;
        int n= nums.size();
        if(n<=2) return 0;
        for(int i= 2;i<n;i++){
            if(nums[i] -nums[i-1] == nums[i-1]-nums[i-2]){
                res++;
            }
            else{
                res=0;
            }
            ans+=res;
            
        }
        return ans;
        
    }
};