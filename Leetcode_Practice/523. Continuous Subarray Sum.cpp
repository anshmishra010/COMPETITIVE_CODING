/*
Given an integer array nums and an integer k, return true if nums has a 
continuous subarray of size at least two whose elements sum up to a multiple of k, or false otherwise.

An integer x is a multiple of k if there exists an integer n such that 
x = n * k. 0 is always a multiple of k.
*/

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum=0,n = nums.size();
        mp[0]=-1;
        
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            sum %= k;
            if(mp.find(sum) != mp.end()){
                if(i- mp[sum] > 1) return true;
            }
            else {
                mp[sum] =i;
            }
        }
        return false;
    }
};

