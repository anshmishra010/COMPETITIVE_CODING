/*
A permutation of an array of integers is an arrangement of its members into a sequence or 
linear order.

For example, for arr = [1,2,3], the following are considered permutations of arr: [1,2,3], 
[1,3,2], [3,1,2], [2,3,1].
The next permutation of an array of integers is the next lexicographically greater 
permutation of its integer. More formally, if all the permutations of the array are sorted
in one container according to their lexicographical order, then the next permutation of 
that array is the permutation that follows it in the sorted container. If such arrangement 
is not possible, the array must be rearranged as the lowest possible order 
(i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a 
lexicographical larger rearrangement.
Given an array of integers nums, find the next permutation of nums.

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), x ,y;
        
        for(x = n-2;x>=0;x--)
        {
            if(nums[x] < nums[x+1]) break;
        }
        if(x<0) reverse(nums.begin(),nums.end());
        else{
            for(y = n-1;y>=0;y--){
                if(nums[y] > nums[x]) break;
            }
            swap(nums[x],nums[y]);
            reverse(nums.begin()+x+1, nums.end());
        }
    }
};

/*
1) we will move from backward and find first elemet which is greater than current element (nums[i] > nums[i-1] as we going from back) and then we will break as we have got first index to swap to get the next greater perm, and now our task is left to find the second element for swap

2) edge case : if we are at the end of the permutation then the next greater perm will be first one, so will be just reverse whole number
3) we will again traverse from back and now we have to first element which is greater than the element found in first step.
4) just swap them
5) and later we have to reverse the right side of(the first num we found) to get in ascending order.
*/