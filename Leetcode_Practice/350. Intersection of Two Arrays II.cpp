/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // Two approach
        // 1)  By sorting both the array and then get the common one but the TC will get high
        // 2) By using hashmap/unordered_map , we will store the key and value in of one array then find it from second one.
        vector<int> v;
        unordered_map<int,int> u;
        
        for(auto it : nums1){
            u[it]++;
        }
        
        for(auto i : nums2){
            if(u[i]){
                v.push_back(i);
                u[i]--;
            }
        }
        return v;
        
    }
};

//====================== Using sorting
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
          sort(nums1.begin(), nums1.end());
          sort(nums2.begin(), nums2.end());   
        vector<int>answer;
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] < nums2[j]){
                i++;
            }
            else if(nums1[i] > nums2[j]) {
                j++;
            }
            else {
                answer.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return answer;
    }
};