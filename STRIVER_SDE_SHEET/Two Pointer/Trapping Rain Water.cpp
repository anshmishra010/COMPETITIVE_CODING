/*
Given n non-negative integers representing an elevation map where the width of each bar is 1,
 compute how much water it can trap after raining.
*/
class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int res =0, left_max = 0, right_max =0;
        
        while(left < right)
        {
            if(height[left] < height[right]){
                if(height[left] > left_max) left_max = height[left];
                else res += left_max - height[left];
                left++;
            }
            else{
                if(height[right] > right_max) right_max = height[right];
                else res += right_max - height[right];
                right--;
            } 
                
        }
        return res;
    }
};

/*
Brute force 
   At every index we will check what amout of water is being stored
   min(left_side(i) , right_side) - current_idx[i] = water_stored_at_curr_idx 
   
Better 
   In the above sol we were using nested loop for calculating left and right max, so in this we will pre-calculate it in the form of prefix_max and suffix_max (prefix/suffix sum is different) .By the we can get left max and right max without using nested loop.
   
   Best 
   Using Two pointer
   
   Another app
   We can also use stack for it, but Tc = O(N)
*/