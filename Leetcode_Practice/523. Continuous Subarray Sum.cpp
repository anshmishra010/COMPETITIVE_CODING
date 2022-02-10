/*
Given an integer array nums and an integer k, return true if nums has a 
continuous subarray of size at least two whose elements sum up to a multiple of k, or false otherwise.

An integer x is a multiple of k if there exists an integer n such that 
x = n * k. 0 is always a multiple of k.
*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int i =0,res=0, cursum=0;
        
        while(i < n)
        {
            cursum += nums[i];
            if(cursum == k) res++;
            //it just means that a subarray exists which has a sum equal to k.
            if(mp.find(cursum-k) != mp.end()) res+= mp[cursum-k];
            mp[cursum]++;
            i++;
        }
        return res;
        
        
    }
};

