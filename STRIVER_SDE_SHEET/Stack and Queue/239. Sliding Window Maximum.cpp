/*
You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right.
 You can only see the k numbers in the window. Each time the sliding window moves right by one position.
Return the max sliding window.
*/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> q;
        
        for(int i=0;i<nums.size();i++)
        {
            // As the window move on, element nums[i-k] will be outdated.
            if(!q.empty() and i-k>=0 and q.front() == nums[i-k]) {
                q.pop_front();
            }
            
            while(!q.empty() and q.back() < nums[i]){
                q.pop_back();
            }
            q.push_back(nums[i]);
            
            if( i >= k-1){
                res.push_back(q.front());
            }
        }
        return res;
        
    }
};