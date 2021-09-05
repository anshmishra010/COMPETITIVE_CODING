/*
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
You must write an algorithm that runs in O(n) time.

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int res = 0;
        for(auto it : nums){
            st.insert(it);
        }
        for(auto i : nums){
            if(st.find(i-1) != st.end()) continue;
            int next_val =i+1, count =1;
            while(true)
            {
                if(st.find(next_val) != st.end()){
                    count++;
                    next_val++;
                }
                else{
                    break;
                }
            }
            res =max(res,count);
        }
        return res;
    }
};