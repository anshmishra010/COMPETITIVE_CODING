// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         vector<int> original;
//         vector<int> :: iterator it;
//         for(it = nums.begin(); it != nums.end(); it++){
//             int ele = *it;
//             if(find(original.begin(), original.end(), ele) != original.end()){
//                 nums.erase(it);
//                 it--;
//             }
//             else{
//                 original.push_back(*it);
//             }
            
//         }
//         return nums.size();
//     }
// };

// more optimized solution 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        
        int j = 0;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] != nums[j])
                nums[++j] = nums[i];
        }
        
        return j + 1;
    }
};