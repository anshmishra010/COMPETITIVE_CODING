class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        // will be using binary search
        
        // n = size of array
        // left will be lower_bound or the max weight of the array, 
        // right will bbe upper bound or the sum of the array, as it can maximum possible weight
        
        
        int n = weights.size();
        int left =0;
        for(int i : weights){
            left = max(left, i);
        }
        
        int right = accumulate(weights.begin(),weights.end(),0);
        
        while(left < right)
        {
            // mid will be the current capacity of the ship
            int mid = left + (right - left)/2;
            
            // n_day = needed day 
            //c_weight = current weight of the ship
            int n_day = 1, c_weight =0;
            
            for(int i=0; i<n and n_day <= days ; c_weight += weights[i++])
            {
                // current weight + upcoming must be smaller to mid , in order to add more weight in that day only on the ship
                // if it current weight + upcoming weight is greater than mid , then we have to add other weight on the next day
                if(c_weight + weights[i] > mid)
                {
                    c_weight = 0;
                    n_day++;
                }
            }
            // if this true, this means the current weight(mid) is small so we have to move right
            if(n_day > days){
                left =mid +1;
            }
            else{
                right = mid;
            }
        }
        return left;
        
        
    }
};