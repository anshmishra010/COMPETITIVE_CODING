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
    vector<int> sortedSquares(vector<int>& nums) {
        int start =0;
        int end=nums.size()-1;
        
        vector<int> arr(nums.begin(),nums.end());
        int index=nums.size()-1;
        
        while(index>=0)
        {
            if(nums[start]*nums[start]>nums[end]*nums[end])
            {
                arr[index--]=nums[start]*nums[start];
                start++;
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