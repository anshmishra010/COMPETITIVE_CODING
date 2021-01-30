class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size()==2) { return nums[1]>nums[0]? nums[1]:nums[0];}
        sort(nums.begin(), nums.end());
        int buff=1;
        for(int i=nums.size()-1; i>0;--i){
            // cout<<nums[i];
            if(nums[i]!=nums[i-1]) buff++;
            if(buff==3) return nums[i-1];  
        }
        return nums[nums.size()-1];
    }
};

