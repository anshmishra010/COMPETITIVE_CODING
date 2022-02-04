/*
Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.
Example 1:

Input: nums = [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.
*/

/*
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        //O(n*n) this solution will give you a tle
        int n = nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            int zero=0, one =0;
            for(int j=i;j<n;j++){
                if(nums[j] == 0) zero++;
                else one++;
                if(zero == one) maxi = max(maxi,j-i+1);
            }
        }
        return maxi;
    }
};
*/
class Solution {
public:
 int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        unordered_map<int,int> record;
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0)
                sum -= 1;
            else if(nums[i] == 1)
                sum += 1;
            
            if(sum == 0){
                result = max(result, i+1);
            }
            
            if(record.find(sum) != record.end()){
                result = max(result, i - record[sum]);
            }
            else{
                record[sum] = i;
            }
        }
        return result;
    }
};