/*
Given an array of integers nums and an integer k, 
return the total number of continuous subarrays whose sum equals to k.

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int> um;
        if(n==0) return 0;
        int count=0, i=0, csum = 0;
        
        while(i < n)
        {
            csum += nums[i];
            if(csum == k) count++;
            
            if(um.find(csum -k) != um.end()) count += um[csum-k];
            
            um[csum] ++;
            i++;
        }
        return count;
    }
};

/*
If you confused why the count was increased by myMap[ curr - k ] instead of just count+=1 . It was because prefix sum can be same because of some negative values in the array. so out next occuring k will also pair  with those negative values also . 

consider this case A : [3 4  7    2   -3   1   4   2   1 ]  
                       preSum : [3 7 14 16 13 14 18 20 21]
you can see 14 occured twice  because of the subsequence [2 -3 1] their sum is 0. so When you are at the final index with value 1 . you have curr - k = 21 - 7 = 14 . you check for 14 it has occured twice . so you need to consider subsequences [2 -3 1 4 2 1] and [4 2 1] . Hope this helps
*/