// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int l = nums.size();
//         if(l==0 || l==1){
//             return;
//         }
//         int left=0,right=0;
//         int temp;
//         while(right<l){
//             if(nums[right]==0){
//                 ++right;
//             }
//             else{
//                 temp=nums[left];
//                 nums[left]=nums[right];
//                 nums[right]=temp;
//                 ++left;
//                 ++right;
//             }
//         }
//     }
// };
// more optimized solution
class Solution{
public:
    void moveZeroes(vector<int>& nums){
        int n =nums.size();
        int pos =0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[pos] = nums[i];
                pos++;
                
            }
        }
        while(pos<n){
            nums[pos]=0;
            pos++;
        }
    }
    
};