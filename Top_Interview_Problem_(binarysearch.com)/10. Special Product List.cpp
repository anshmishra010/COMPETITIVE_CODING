/*
Given a list of integers nums, return a new list such that each element at index i of the 
new list is the product of all the numbers in the original list except the one at i. 
Do this without using division.

Constraints

2 ≤ n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [1, 2, 3, 4, 5]
Output
[120, 60, 40, 30, 24]
*/
//vector<int> solve(vector<int>& nums) {
    // int n= nums.size();
    // vector<int> res(n);
    // vector<int> pref(n);
    // vector<int> suf(n);
    
    // pref[0] = nums[0];
    // suf[n-1] = nums[n-1];
    // for(int i=1;i<nums.size();i++) pref[i] =nums[i]* pref[i-1];
    // for(int i=n-2;i>=0;i--) suf[i] =nums[i]* suf[i+1];
    
    // // we can't use the formula for first and last element as it will become zero.
    // res[0] = suf[1]; 
    // res[n-1] = pref[n-2];

    // for(int i=1;i<n-1;i++){
    //     res[i] = pref[i-1]*suf[i+1];
    // }

    // return res;
    //}

    vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> a(n, 1);
    int left = nums[0];
    for (int i = 1; i < n; i++) {
        a[i] = left;
        left *= nums[i];
    }
    int right = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        a[i] *= right;
        right *= nums[i];
    }
    return a;


}