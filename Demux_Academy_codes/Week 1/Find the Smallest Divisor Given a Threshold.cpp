class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        // will be solving using binary search
        
        // left = start as divisor cannot be 0, thats why starting from 1
        // in question the max limit is 10^6 that why 1e6
        // mid = between 1 to 10^6
        // sum = minimum
        // n = size of nums array
        
        
        int n = nums.size();
        int right;
        // finding the max element of the nums, to set the right limit
        for(int i =0 ;i<n;i++) right = max(right,nums[i]);

        int left = 1 , mid , sum;
        
        while(left < right){
            
            mid = (left+right)/2;
            sum =0;
            
            for(int i : nums)
            {
                //main logic
                // though we have to do ceil func but we haven't used
                // as this logic will also gives the same, we are actually typecasting the value
                // we can also write this -  (i+m-1)/m , instead of ((i-1)/mid) + 1, both will work
                
                
                sum += ((i-1)/mid) + 1;
                
            }
            
            // if sum is greater then we have to take the right part as greater the divisor smaller will be the sum
            if(sum > threshold){
                left = mid +1;
            }
            else{
                right = mid;
            }
        }
        return left;
        
    }
};