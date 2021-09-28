/*
Given an array of intervals intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

 

Example 1:

Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
Output: 1
Explanation: [1,3] can be removed and the rest of the intervals are non-overlapping.
*/
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[=](vector<int> &a, vector<int> &b){
            return a[1] < b[1];
        });
        int count =0;
        int i=0;
        
        for(int j=1;j<intervals.size();j++){
            // if we get the overlapped interval then we will increament the counter
            if(intervals[i][1] > intervals[j][0]) count++;
            //else we will move forward so i = prev index
            else i = j;
        }
        return count;
    }
};