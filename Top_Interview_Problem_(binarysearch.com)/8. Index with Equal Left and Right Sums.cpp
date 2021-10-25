/*
Given a list of integer nums, return the earliest index i such that the sum of the numbers left of i is equal to the sum of numbers right of i. If there's no solution, return -1.

Sum of an empty list is defined to be 0.

Constraints

1 ≤ n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [2, 3, 4, 0, 5, 2, 2]
Output
3
*/

int solve(vector<int>& nums) {
    int n = nums.size();
    int sum =0, leftsum =0;

    for(int i =0;i<n;i++) sum += nums[i];

    for(int i=0;i<n;i++){
        // right sum
        sum -= nums[i];
        if(sum == leftsum) return i;
        leftsum += nums[i];
    }
    return -1;
}
// using prefix and suffix sum and adding the extra space to it instead of adding the variables to it.

int solve(vector<int>& nums) {
    vector<int> rev = nums;
    int i, n = nums.size();
    for (i = 1; i < n; i++) {
        nums[i] += nums[i - 1];
        rev[n - i - 1] += rev[n - i];
    }
    for (i = 0; i < n; i++) {
        if (nums[i] == rev[i]) return i;
    }
    return -1;
}