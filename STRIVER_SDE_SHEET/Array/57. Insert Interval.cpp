/*
You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] 
represent the start and the end of the ith interval and intervals is sorted in ascending 
order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

Insert newInterval into intervals such that intervals is still sorted in ascending order 
by starti and intervals still does not have any overlapping intervals (merge overlapping 
intervals if necessary).

Return intervals after the insertion
*/

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size(),i=0;
        vector<vector<int>>res;
        // firstly pushing all the elements before the overlap
        while(i<n and intervals[i][1] < newInterval[0]) res.push_back(intervals[i++]);
        
        // if that while loop broke it means we found an overlapping
        vector<int> temp = newInterval;
        while(i<n and intervals[i][0] <= newInterval[1]){
            temp[0] = min(temp[0],intervals[i][0]); 
            temp[1] = max(temp[1],intervals[i][1]);
            i++;
        }
        res.push_back(temp);
        
        // adding rest elements to the res after merging overlap
        while(i<n) res.push_back(intervals[i++]);
        return res;
    }
};