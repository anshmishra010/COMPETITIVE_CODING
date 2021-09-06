/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.
Follow up: Your solution should run in O(log n) time and O(1) space.

Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     
        int n= nums.size();
        int low = 0, high =n-1,count =0;
        while(low < high)
        {
            int mid = low + (high -low)/2;
            
            // if the index of mid is even then it's duplicate will lie on odd index, else in even index
            if(mid %2 == 0 and nums[mid] == nums[mid+1] or mid % 2 != 0 and nums[mid] == nums[mid-1]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return nums[low];
    }
};