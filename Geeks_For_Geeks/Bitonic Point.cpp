/*
Given an array arr of n elements which is first increasing and then may be decreasing, find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.

Example 1:

Input: 
n = 9
arr[] = {1,15,25,45,42,21,17,12,11}
Output: 45
Explanation: Maximum element is 45.
*/

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int low = 0, high = n-1;
	   
	    while(low < high){
	      //  int mid = low + (high - low)/2;
	      int mid = (low + high)/2;
	        if(arr[mid] > arr[mid +1]){
	            high = mid;
	        }
	        else{
	            low = mid+1;
	        }
	    }
	    return arr[high];
	}
};