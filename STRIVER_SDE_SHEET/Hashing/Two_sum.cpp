class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         int a=0,b=0;
           int len = nums.size();
        
//         for(int i=0;i<len-1;i++){
//             for(int j=i+1;j<len;j++){
//                 if(nums[i]+nums[j] == target){
//                     a=i;
//                     b=j;
//                 }
//             }
//         }
//         return{a,b};
        //-------------------------------------------
    //     for(int i=0;i<len;++i){
    //         for(int j=i+1;j<len;++j){
    //             if(nums[i]+nums[j] == target){
    //                 return {i,j};
    //             }
    //         }
    //     }
    //     return {};
    // }
        //=============================================
        //using hashmap
//         vector<int> ans;
//         unordered_map<int,int> mp;
//         for(int i=0;i<len;i++){
//             if(mp.find(target-nums[i]) != mp.end()){
//                 ans.push_back(mp[target-nums[i]]);
//                 ans.push_back(i);
//                 return ans;
//             }
//             mp[nums[i]] =i;
            
//         }
//         return ans;
        //---------------------
        unordered_map<int, int> numToIndex;

        for (int i = 0; i < nums.size(); ++i) {
            if (numToIndex.count(target - nums[i]))
                return {numToIndex[target - nums[i]], i};
            numToIndex[nums[i]] = i;
        }
        throw;
    }
    
};