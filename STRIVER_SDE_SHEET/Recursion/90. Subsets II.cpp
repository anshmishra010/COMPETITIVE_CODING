/*
Given an integer array nums that may contain duplicates, return all possible subsets (the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:
Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
*/
class Solution {
    void subset(int x, vector<int> &nums, vector<int>&temp, vector<vector<int>> &ans)
    {
        //every time we push back subset present in the temp
        ans.push_back(temp);
        for(int i =x;i<nums.size();i++){
            if(i != x and nums[i] == nums[i-1])continue; // ele prior to this is equal and not equal to curr pos we will ignore it. 
            temp.push_back(nums[i]);
            subset(i+1,nums,temp,ans);
            // pop back so that at every recursive call it does not get repeated
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        // then only we can compare it with pervious element
        sort(nums.begin(),nums.end());
        subset(0,nums,temp,ans);
        return ans;
    }
};
// brute force : We will pick one by one and make them subset and then we will put that subset into a set so that no duplicate remains

//optimal :
/*
We will use recursion + a ds to store generated subset
TC- (2^n * n),SC - O(2^n)
*/
