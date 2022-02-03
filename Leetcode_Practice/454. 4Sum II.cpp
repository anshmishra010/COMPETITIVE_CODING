/*
Given four integer arrays nums1, nums2, nums3, and nums4 all of length n, return the 
number of tuples (i, j, k, l) such that:

0 <= i, j, k, l < n
nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0
 

Example 1:

Input: nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
Output: 2
*/
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int res =0;
        unordered_map<int,int> um;
        
        for(auto i : nums1){
            for(auto j : nums2){
                // here we have filled the (sum,frequency) in the map
                um[i+j]++;
            }
        }
        
        for(auto i : nums3){
            for(auto j : nums4){
                /*
                   a+b+c+d =0   => a+b = 0-c-d;
                */
                auto temp_sum = um.find(0-i-j);
                
                // finding the sum in the previously filled map, if found we will just return the frequency. That's why it is temp_sum->second.
                if(temp_sum != um.end()) res += temp_sum->second;
            }
        }
        return res;
    }
};