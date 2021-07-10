/*
Given two sorted arrays of distinct elements. There is only 1 difference between the arrays. First array has one element extra added in between. Find the index of the extra element.

Example 1:

Input:
N = 7
A[] = {2,4,6,8,9,10,12}
B[] = {2,4,6,8,10,12}
*/

int findExtra(int a[], int b[], int n) {
        // add code here.
        int low = 0, high = n-1,idx =0;
        while(low <= high){
            int mid = low + (high -low)/2;
            
            if(a[mid] == b[mid]){
                low = mid+1;
            }
            else{
                idx= mid;
                high = mid -1;
            }
        }
        return idx;
    }