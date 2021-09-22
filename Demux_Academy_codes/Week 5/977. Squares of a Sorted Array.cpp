/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
*/
// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         for(auto i=0;i<nums.size();i++)
//         {
//             nums[i]=nums[i]*nums[i];
//         }
//         sort(nums.begin(),nums.end());
//         return nums;
//     }
// };

// above method is also true but it is not efficient as the later one.
class Solution {
public:
    // Two pointer app.
    
    vector<int> sortedSquares(vector<int>& nums) {
        int start =0;
        int end=nums.size()-1;
        
        vector<int> arr(nums.begin(),nums.end());
        int index=nums.size()-1;
        // if we use for loop then we can also neglect the index var
        while(index>=0)
        {
            if(nums[start]*nums[start]>nums[end]*nums[end])
            {
                arr[index]=nums[start]*nums[start];
                start++;
                index--;
                continue;
            }
            else
            {
                arr[index--]=nums[end]*nums[end];
                end--;
            }
        }
        return arr;
        
    }
};
