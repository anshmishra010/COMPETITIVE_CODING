/*
Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

Example 1:

Input:
N = 12
Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
Output: 3
Explanation: There are 3 0's in the given arra
*/

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        int low = 0, high =n-1;
        if(arr[0]==0) return n;
        
        while(low<high){
           int mid = low + (high - low)/2;
         
            if(arr[mid] == 1){
               if(arr[mid + 1] ==0){
                   return n-mid-1;
               }
                low = mid;
                continue;
                
            }
            high = mid;
        }
    }
};
