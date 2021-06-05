/*
Let's call an array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
*/
//https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l =arr.size();
        
        int low =0;
        int high = l-1;
        
        while(low <high){
            int mid = low+(high - low)/2;
            if(arr[mid] > arr[mid+1]){
                // it means you are on the right of the array , now you have to discard right part of it.
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
        
    }
};