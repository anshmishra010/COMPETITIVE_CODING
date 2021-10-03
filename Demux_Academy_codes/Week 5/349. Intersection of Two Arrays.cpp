/*
Given two integer arrays nums1 and nums2, return an array of their intersection.
 Each element in the result must be unique and you may return the result in any order.
Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
*/

/*
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // using  two pointer approach first, TC : O(nlogn) SC :  O(1)
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0, j=0;
        int n1 = nums1.size(), n2 = nums2.size();
        vector<int> res;
        
        while(i<n1 and j<n2)
        {
            if(nums1[i] > nums2[j]) j++;
            else if(nums1[i] < nums2[j]) i++;
            
            else{
                res.push_back(nums1[i]);
                if(i<n1)
                {
                    int t1 = nums1[i];
                    while(i<n1 and nums1[i] == t1) i++;
                }
                if(j<n2)
                {
                    int t2 = nums2[j];
                    while(j<n2 and nums2[j] == t2)j++;
                }
            }
        }
        return res;
        
    }
};
*/
// ---------------------------------------------------
// using unordered set TC : O(N), SC : O(N)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us(nums1.begin(),nums1.end());
        vector<int> res;
        for(auto i : nums2){
            // if we found i in nums1 then firstly we will push back into res then we will erase it from set !
            if(us.erase(i)) res.push_back(i);
        }
        return res;
    }
};