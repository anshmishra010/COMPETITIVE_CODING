/*
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
*/
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> res;
        int n = intervals.size();
        if (n == 0)
            return res;
        sort(intervals.begin(), intervals.end());
        res.push_back(intervals[0]);
        int j = 0;
        for (auto i = 1; i < n; i++)
        {
            if (res[j][1] >= intervals[i][0])
            {
                res[j][1] = max(res[j][1], intervals[i][1]);
            }
            else
            {
                j++;
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};