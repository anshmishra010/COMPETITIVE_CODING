/*
Given an array, rotate the array to the right by k steps, where k is non-negative.
Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {

        int n = nums.size();

        /*
        TC = O(N) , SC= O(N)
        
        vector<int> dummy(n);
        if(n < 0){
            return;
        }        
        for(int i=0;i<n;i++){
            dummy[i] = nums[i];
        }
        
        for(int i=0;i<n;i++){
            nums[(i+k)%n] = dummy[i];
        }
        
        */
        // SC- O(1)

        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};