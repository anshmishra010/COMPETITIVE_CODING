/*
Given a list of integers nums, return whether the list is strictly increasing or strictly decreasing.

Constraints

n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [1, 2, 3, 4, 5]
Output
true
*/

bool solve(vector<int>& nums) {
    bool a = true;
    bool b = true;
    for (int i = 0; i < nums.size()-1; i++) {
        if(nums[i] > nums[i+1] or nums[i] == nums[i+1]){
            a = false;
        }
        if(nums[i] < nums[i+1] or nums[i] == nums[i+1]){
            b = false;
        }
    }
    return a or b;
}