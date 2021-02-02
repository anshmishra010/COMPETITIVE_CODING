class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         int a=0,b=0;
           int len = nums.size();
        
//         for(int i=0;i<len-1;i++){
//             for(int j=i+1;j<len;j++){
                // if(nums[i]+nums[j] == target){   THIS SOLUTION WAS TAKING 32MS
//                     a=i;
//                     b=j;
//                 }
//             }
//         }
//         return{a,b};
        for(int i=0;i<len;++i){
            for(int j=i+1;j<len;++j){
                if(nums[i]+nums[j] == target){  
                    return {i,j};
                }
            }
        }
        return {};
        // THIS SOLUTION IS TAKING 4MS.
    }
};