/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        
        if(n<1) return res;
        
        int product = 1;
        // traversing from left to right 
        
        for(int i=0;i<n;i++){
            product *= nums[i];
            res.push_back(product);
        }
        
        product = 1;
        for(int i=n-1;i>0;--i){
            res[i] = res[i-1] * product;
            product *= nums[i];
            
        }
        // corner case
        // as in last or the nums[0] element will contain product of all the element in the right most
        // and at this point in product we have multiplication of all the element except nums[0]
        res[0] = product;
        
        return res;
        
    }
};

// better approach
/*
we can make 2 extra vector to store multiplication of left and right sub array seperately
amd then by traversing we can update it in otuput array

TC- O(n) SC - O(n)
*/

// most optimal app
/*
firstly we will traverse through array and update the multiplication in the output array as a prefix multi, and then again we will traverse through the right sub array and update output array

TC- O(N) SC - O(1)
*/