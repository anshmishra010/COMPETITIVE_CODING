#include<bits/stdc++.h>
using namespace std;

// class Solution{
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums){
//         unordered_set<int> s(nums.begin(),nums.end());
//         vector<int> res;

//         for(int i=1;i<nums.size();i++){
//             if(s.find(i) == s.end()){
//                 res.emplace_back(i);
//             }
//         }

//         return res;
//     }
// };

// more optimized

class Solution{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums){
        vector<int> res;

        for(int i=0;i<nums.size();i++){
            int curr = abs(nums[i]);
            nums[curr-1] = -abs(nums[curr-1]);
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                res.emplace_back(i+1);
            }
        }
        return res;
    }
};