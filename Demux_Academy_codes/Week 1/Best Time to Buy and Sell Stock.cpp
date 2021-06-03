/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        /*
        int n = prices.size(), prof, min_price = prices[0], res =0;
        
        for(int i=1;i<n;i++){
            
            // max price on ith day - min price  
            prof = prices[i] - min_price;
            
            // updating the min price
            min_price = min(min_price, prices[i]);
            
            // we have to update the result with max profit 
            res = max(res, prof);
        }
        return res;
        */
        
        
        // more short way


        int mini = INT_MAX;
        int res =0;
        for(int i=0;i<prices.size();i++)
        {
            mini = min(mini, prices[i]);
            res = max(prices[i] - mini , res);
        }
        return res;
        
    }
};