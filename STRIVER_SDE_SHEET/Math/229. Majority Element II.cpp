/*
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
Example 1:

Input: nums = [3,2,3]
Output: [3]
*/
/*
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int check =  nums.size()/3;
        unordered_map<int,int> mp;
        for(auto i : nums) mp[i]++;
        for(auto j : mp){
            if(j.second > check) res.push_back(j.first);
        }
        return res;
    }
};
*/
// Moore voting algo,  TC- O(n)+O(n) , SC - O(1)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        // at max we can only have 2 numbers more than n/3, so we are taking no. and it's count for checking
        
        int count1=0, count2 =0, n1=-1, n2=-1,i;
        for(i =0;i<n;i++)
        {
            if(nums[i] == n1) count1++;
            else if(nums[i] == n2) count2++;
            else if(count1 == 0){
                n1 = nums[i];
                count1=1;
            }
            else if(count2 ==0){
                n2 = nums[i];
                count2=1;
            }
            else {
                count1--, count2--;
            }
        }
        // till now we have got 2 numbers with max freq, now we will check whether they are n/3;
        vector<int > res;
        int c1,c2;
         c1=c2=0;

        for(int j=0;j<n;j++)
        {
            if(nums[j] == n1) c1++;
            else if(nums[j] == n2) c2++;
        }
        if(c1 > (n/3)) res.push_back(n1);
        if(c2 > (n/3)) res.push_back(n2);
        return res;
    }
};