/*
You are given a list of non-negative integers nums where each element represents the 
height of a hill. Suppose it will rain and all the spaces between two sides get filled up.
Return the amount of rain that would be caught between the hills.

Constraints
n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [2, 5, 2, 0, 5, 8, 8]
Output
8
Explanation
nums[2] can catch 3 rain drops, and nums[3] can catch 5 for a total of 8.
*/

int solve(vector<int>& nums) {
    int leftmax= 0, rightmax=0, n=nums.size(), low = 0, high = n-1,res_water =0;

    while(low < high)
    {
        if(nums[low] < nums[high])
        {
            if(nums[low] < leftmax)
            {
                res_water += leftmax-nums[low];
            }
            else
            {
                leftmax = nums[low];
            }
            low++;
        }
        else
        {
            if(nums[high] < rightmax)
            {
                res_water+= rightmax-nums[high];
            }
            else
            {
                rightmax= nums[high];
            }
            high--;
        }
        
    }
    return res_water;
}