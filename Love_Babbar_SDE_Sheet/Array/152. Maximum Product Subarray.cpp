/*
Given an integer array nums, find a contiguous non-empty subarray within the array that has the largest product, and return the product.
It is guaranteed that the answer will fit in a 32-bit integer.
A subarray is a contiguous subsequence of the array.


Example 1:
Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
*/
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int bestp = INT_MIN;
        int maxp = 1;
        int minp = 1;

        for (auto it : nums)
        {
            if (it < 0)
            {
                // because if a <= b then -b <= -a.
                //this will only happen when we hit -ve number
                swap(maxp, minp);
            }

            // using it means, if it is bigger than maxp then we have to consider new subarray which will start from it.
            maxp = max(maxp * it, it);
            minp = min(minp * it, it);

            bestp = max(bestp, maxp);
        }
        return bestp;
    }
};
//for better understanding

//https://leetcode.com/problems/maximum-product-subarray/discuss/203013/C%2B%2B-O(N)-time-O(1)-space-solution-with-explanation