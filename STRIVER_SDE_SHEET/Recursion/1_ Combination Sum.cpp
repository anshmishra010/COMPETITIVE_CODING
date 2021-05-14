/*
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.
*/
//https://leetcode.com/problems/combination-sum/


class Solution {
public:
    
    void findc(int idx , int target , vector<int>&arr , vector<vector<int>> &res , vector<int> &temp)
    {
        if(idx == arr.size())
        {
            if(target == 0){
               res.push_back(temp);
            }
            return;
        }
        
        //using recursion for picking data
        if(arr[idx] <= target)
        {
            temp.push_back(arr[idx]);
            //if we choose the element
            findc(idx , target- arr[idx] , arr , res , temp);
            //while backtracking we have to remove the latest added element from temp
            temp.pop_back();
        }
        //if we don't choose then we move forward
        findc(idx+1 , target , arr , res , temp);
        
    }
    
 
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     
        vector<vector<int>> res;
        vector<int> temp;
        
        
        findc(0, target,candidates, res , temp );
        return res;
    }
};