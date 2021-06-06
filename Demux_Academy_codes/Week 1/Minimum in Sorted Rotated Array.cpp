




// Using RECURSION

/*
class Solution {

public:
    int search(vector<int>& nums, int l , int h){
            if(nums[l] == nums[h]){
                return nums[l];
            }
            int mid = l + (h- l)/2;
            // searchimg in right side
            if(nums[mid] > nums[h]){
                return search(nums, mid+1, h);
            }
            // searching in left side
            if(nums[mid] < nums[h]){
                return search(nums, l , mid);
            }
            // mid is the minimum
            return nums[mid];
    }
    int findMin(vector<int>& nums) {
        
        // we will be using binary search as tc is log n
        
        return search(nums, 0 , nums.size()-1);
        
    }
};
*/

// Iterative approach

class Solution {

public:

    int findMin(vector<int>& nums) {
        
        // we will be using binary search as tc is log n
        int n = nums.size();
        int left = 0, right = n-1;
        
        while(left < right){
            int mid = left + (right - left)/2;
            
            if(nums[mid] > nums[right]){
                left = mid+1;
            }
            else if(nums[mid] < nums[right]){
                right = mid;
            }
            else{
                // mid is the minimum value 
                return nums[mid];
            }
        }
        // this happens when left == right
        return nums[left];
        
    }
};