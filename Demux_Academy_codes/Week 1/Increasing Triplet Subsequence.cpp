/*
Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. 
If no such indices exists, return false.
*/
// https://leetcode.com/problems/increasing-triplet-subsequence/


class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        // brute force approach
        
//         bool ans = false;
//         int l = nums.size();
//         for(int i=0;i<l;i++){
//             for(int j= i+1;j<l;j++){
//                 for(int k = j+2 ; k<l;k++){
//                     if( nums[i]< nums[j] and nums[j]<nums[k]){
//                         ans = true;
//                     }
//                 }
//             }
//         }
//         return ans;
        
//     }
        
        // efficient app.
        
        
        int n = nums.size();
        if(n < 3){
            return false;
        }
        int left = INT_MAX , mid = INT_MAX;
        
        for(int i=0;i<n;i++){
            // main condition left < mid < right (after mid ele)
            
            if(nums [i] < left){
                left = nums[i];
            }
            else if(nums [i] < mid and nums[i] > left){
                mid = nums[i];
            }
            else if(nums[i] > mid){
                return true;
            }
        }
        return false;
   }                           
        
};