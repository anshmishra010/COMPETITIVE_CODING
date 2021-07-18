/*
Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). 
n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). 
Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size()-1;
        
        int water = 0; // amout of water it will store
        while(low < high)
        {
             int width = (high - low); 
             int h = min(height[low],height[high]); // height
            
             water = max(water, width*h);   // taking out the max area
            
            if(height[low] < height[high]){  
                low++;
            }
            else{
                high--;
            }
        }
        return water;
        
    }
};