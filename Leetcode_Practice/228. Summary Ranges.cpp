/*
You are given a sorted unique integer array nums.
Return the smallest sorted list of ranges that cover all the numbers in the array exactly.
That is, each element of nums is covered by exactly one of the ranges, and there is no 
integer x such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

"a->b" if a != b
"a" if a == b
 
Example 1:

Input: nums = [0,1,2,4,5,7]
Output: ["0->2","4->5","7"]
Explanation: The ranges are:
[0,2] --> "0->2"
[4,5] --> "4->5"
[7,7] --> "7"
*/

    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int n = nums.size();
        
        
         for (int i = 0; i < n; i++)
        {
            int start_ind = nums[i]; 
            while(i != (n-1) and nums[i] == nums[i+1] -1) i++;
            int end_ind = nums[i];
            
             
            if(start_ind == end_ind) res.push_back(to_string(start_ind)); // no range found
            else res.push_back(to_string(start_ind)+ "->" + to_string(end_ind));
        }
        
        return res;
    }