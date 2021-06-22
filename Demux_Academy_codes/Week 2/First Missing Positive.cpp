/*
Given an unsorted integer array nums, find the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.

 

Example 1:

Input: nums = [1,2,0]
Output: 3
*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        /*
        
          1) Firstly we will check whether there it is 1 in the array or not , if it is not present then              it would be least positive number
          2) We will check wehter size of array is 1 , then we will return 2 as it would be smallest                  number as we have checked for 1 previously.
          3) If any element in the array is smaller than 0 or greater than size of array then it is of                no use as we have to find least positive integer , at insead of the least positive number                we have that greater element.
          4) We will convert all the number into the negaitve of the index,
          5) Whosover number is not negative then we will return index+1;
          6) this means we have all the number from 1 to n , so next least will be n+1;
        */
        
        // 1 step
        bool check_one = false;
        for(int x: nums){
            if(x ==1){
                check_one = true;
                break;
            }
        }
        
        if(!check_one) return 1;
        
        int n = nums.size();
        
        //2 step
        if(n == 1) return 2;
        
        //3 step
        for(int i=0;i<n;i++){
            if(nums[i] <= 0 or nums[i]>n){
                nums[i] =1;
            }
        }
        
        // 4 step
        for(int i =0;i<n;i++){
            // index for x will start from 1 to n , instaed of 0 to n;
            int x = abs(nums[i]);
            if(nums[x-1] > 0){
                nums[x-1] *= -1;
            }
        }
        
        //5th step
        for(int i=0;i<n; i++){
            if(nums[i] >0){
                return i+1;
            }
        }
        
        return n+1;
    }
};