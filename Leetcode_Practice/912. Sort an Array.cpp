/*
Given an array of integers nums, sort the array in ascending order.

Example 1:
Input: nums = [5,2,3,1]
Output: [1,2,3,5]
*/

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n= nums.size();
        
        // Bubble sort , 
        // but if we try to submit it , it will give TLE as TC is O(n*n)
        
        // for(int i=0;i<n;i++){
        //     for(int j= n-1;j>i;j--){
        //         if(nums[j] < nums[j-1]){
        //             swap(nums[j],nums[j-1]);
        //         }
        //     }
        // }
        
        
        // slection sort
        // this will also give TLE , TC is O(n*n)
        
        // for(int i=0;i<n-1;i++){
        //     int minn = i;
        //     for(int j=i+1;j<n;j++){
        //         if(nums[minn] > nums[j]) minn = j;
        //     }
        //     if(minn != i)swap (nums[minn],nums[i]);
        // }
        
        
        //insertion sort
        // this will also give TLE as TC is O(n*n);
//         for(int i=1;i<n;i++){
//             int k = nums[i];
//             int j = i-1;
            
//             while(j>=0 and nums[j] > k){
//                 nums[j+1] = nums[j];
//                 j  =j-1;
//             }
//             nums[j+1] = k;
//         }
//                return nums;
        
        // Merge Sort 
        // This will work as it has avg TC of nlogn
        
        mergesort(nums,0,n-1);
        return nums;
        
    }
    void mergesort(vector<int>&nums, int left, int right){
        if(left<right)
        {
            int mid = left + (right-left)/2;
            mergesort(nums,left,mid);
            mergesort(nums,mid+1,right);
            merge(nums,left, mid,right);
        }
    }
    void merge(vector<int>&nums, int left,int mid ,int right){
        int a = mid -left +1;
        int b = right - mid;
        int l[a];
        int r[b];
        
        for(int i=0;i<a;i++) l[i] =nums[left+ i];
        for(int j=0;j<b;j++) r[j] = nums[mid+1+j];
        
        int i=0,j=0,k=left;
        
        while(i<a and j<b)
        {
            if(l[i] <= r[j]){
                //left is smaller than right indexed element
                nums[k] = l[i];
                i++;
            }
            else{
                nums[k] = r[j];
                j++;
            }
            k++;
        }
        // edge cases if anyone is left
        while(i<a){
            nums[k] = l[i];
            i++;
            k++;
        }
        while(j<b){
            nums[k] = r[j];
            j++;
            k++;
        }
    }
};